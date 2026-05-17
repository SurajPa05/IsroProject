#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped, Point
from ascend_msgs.msg import MissionState
from std_msgs.msg import Bool
import math

class CoveragePlanner(Node):
    def __init__(self):
        super().__init__("coverage_planner")

        # ── Arena parameters ─────────────────────────────────────────
        # Declare as ROS2 parameters so they can be changed without
        # recompiling
        self.declare_parameter("arena_width",   10.0)  # metres
        self.declare_parameter("arena_height",  10.0)  # metres
        self.declare_parameter("flight_height",  3.0)  # metres
        self.declare_parameter("lane_spacing",   1.5)  # metres
        self.declare_parameter("flight_speed",   0.8)  # m/s

        self.arena_width   = self.get_parameter("arena_width").value
        self.arena_height  = self.get_parameter("arena_height").value
        self.flight_height = self.get_parameter("flight_height").value
        self.lane_spacing  = self.get_parameter("lane_spacing").value
        self.flight_speed  = self.get_parameter("flight_speed").value

        # Waypoint acceptance radius in metres
        self.waypoint_radius = 0.3

        # ── State ────────────────────────────────────────────────────
        self.waypoints         = []
        self.current_wp_index  = 0
        self.active            = False
        self.current_pose      = None
        self.mission_phase     = 0

        # Generate the lawnmower pattern on startup
        self.generate_lawnmower_pattern()

        # ── Publishers ───────────────────────────────────────────────
        self.setpoint_pub = self.create_publisher(
            PoseStamped, "/mavros/setpoint_position/local", 10)

        self.coverage_complete_pub = self.create_publisher(
            Bool, "/ascend/coverage_complete", 10)

        # ── Subscribers ──────────────────────────────────────────────
        self.pose_sub = self.create_subscription(
            PoseStamped, "/mavros/local_position/pose",
            self.pose_callback, 10)

        self.mission_sub = self.create_subscription(
            MissionState, "/ascend/mission_state",
            self.mission_callback, 10)

        # ── Timer ────────────────────────────────────────────────────
        # Publish setpoints at 10Hz
        self.timer = self.create_timer(0.1, self.run)

        self.get_logger().info(
            f"Coverage planner ready. "
            f"Arena: {self.arena_width}x{self.arena_height}m. "
            f"Waypoints: {len(self.waypoints)}"
        )
        self.log_waypoints()

    def generate_lawnmower_pattern(self):
        self.waypoints = []
        # Start from bottom left corner of arena
        # Sweep in X direction, increment Y by lane_spacing
        y = 0.0
        direction = 1  # 1 = left to right, -1 = right to left
        while y <= self.arena_height:
            if direction == 1:
                x_start = 0.0
                x_end   = self.arena_width
            else:
                x_start = self.arena_width
                x_end   = 0.0

            # Add start of lane
            self.waypoints.append(
                (x_start, y, self.flight_height))

            # Add end of lane
            self.waypoints.append(
                (x_end, y, self.flight_height))

            y         += self.lane_spacing
            direction *= -1

        self.get_logger().info(
            f"Generated {len(self.waypoints)} waypoints "
            f"with {self.lane_spacing}m lane spacing"
        )

    def log_waypoints(self):
        for i, wp in enumerate(self.waypoints):
            self.get_logger().info(
                f"WP{i:02d}: X={wp[0]:.1f} Y={wp[1]:.1f} Z={wp[2]:.1f}"
            )

    def pose_callback(self, msg):
        self.current_pose = msg

    def mission_callback(self, msg):
        # Activate only during SEARCHING phase
        if msg.current_phase == 3:  # SEARCHING
            if not self.active:
                self.get_logger().info("Coverage planner activated")
                self.active = True
        else:
            if self.active:
                self.get_logger().info("Coverage planner paused")
                self.active = False

        # Reset waypoints on new sortie
        if (msg.current_phase == 2 and  # TAKEOFF
                msg.sortie_number > 0 and
                self.current_wp_index >= len(self.waypoints)):
            self.get_logger().info("Resetting coverage pattern for new sortie")
            self.current_wp_index = 0

    def run(self):
        if not self.active:
            return
        if self.current_pose is None:
            return
        if self.current_wp_index >= len(self.waypoints):
            # All waypoints visited
            self.get_logger().info("Coverage complete")
            msg = Bool()
            msg.data = True
            self.coverage_complete_pub.publish(msg)
            self.active = False
            return

        # Get current target waypoint
        target = self.waypoints[self.current_wp_index]

        # Check if we reached current waypoint
        if self.reached_waypoint(target):
            self.get_logger().info(
                f"Reached WP{self.current_wp_index:02d} "
                f"({self.current_wp_index + 1}/{len(self.waypoints)})"
            )
            self.current_wp_index += 1
            return

        # Publish setpoint for current waypoint
        self.publish_setpoint(target)

    def reached_waypoint(self, target):
        pos = self.current_pose.pose.position
        dx  = pos.x - target[0]
        dy  = pos.y - target[1]
        dz  = pos.z - target[2]
        dist = math.sqrt(dx*dx + dy*dy + dz*dz)
        return dist < self.waypoint_radius

    def publish_setpoint(self, target):
        msg = PoseStamped()
        msg.header.stamp    = self.get_clock().now().to_msg()
        msg.header.frame_id = "map"
        msg.pose.position.x = target[0]
        msg.pose.position.y = target[1]
        msg.pose.position.z = target[2]
        # Keep orientation level (no rotation)
        msg.pose.orientation.w = 1.0
        self.setpoint_pub.publish(msg)


def main(args=None):
    rclpy.init(args=args)
    node = CoveragePlanner()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
