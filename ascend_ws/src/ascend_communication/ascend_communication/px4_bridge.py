#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile, ReliabilityPolicy, HistoryPolicy

from mavros_msgs.msg import State, ExtendedState
from mavros_msgs.srv import CommandBool, SetMode, CommandTOL
from geometry_msgs.msg import PoseStamped, TwistStamped
from sensor_msgs.msg import BatteryState, Imu
from std_msgs.msg import String

class PX4Bridge(Node):
    def __init__(self):
        super().__init__('px4_bridge')

        # QoS profile for flight critical data
        qos = QoSProfile(
            reliability=ReliabilityPolicy.BEST_EFFORT,
            history=HistoryPolicy.KEEP_LAST,
            depth=10
        )

        # ── State tracking ──────────────────────────────────────────
        self.current_state = State()
        self.current_pose  = PoseStamped()
        self.current_vel   = TwistStamped()
        self.battery       = BatteryState()

        # ── Subscribers ─────────────────────────────────────────────
        self.state_sub = self.create_subscription(
            State, '/mavros/state',
            self.state_callback, qos)

        self.pose_sub = self.create_subscription(
            PoseStamped, '/mavros/local_position/pose',
            self.pose_callback, qos)

        self.vel_sub = self.create_subscription(
            TwistStamped, '/mavros/local_position/velocity_local',
            self.vel_callback, qos)

        self.battery_sub = self.create_subscription(
            BatteryState, '/mavros/battery',
            self.battery_callback, qos)

        # ── Publishers ──────────────────────────────────────────────
        # Telemetry publisher (for ISRO qualification requirement)
        self.telemetry_pub = self.create_publisher(
            String, '/ascend/telemetry', 10)

        # Setpoint publisher (for autonomous flight commands)
        self.setpoint_pub = self.create_publisher(
            PoseStamped, '/mavros/setpoint_position/local', 10)

        # ── Service clients ─────────────────────────────────────────
        self.arming_client = self.create_client(
            CommandBool, '/mavros/cmd/arming')

        self.mode_client = self.create_client(
            SetMode, '/mavros/set_mode')

        self.takeoff_client = self.create_client(
            CommandTOL, '/mavros/cmd/takeoff')

        self.land_client = self.create_client(
            CommandTOL, '/mavros/cmd/land')

        # ── Timers ──────────────────────────────────────────────────
        # Telemetry broadcast at 2Hz (ISRO requirement)
        self.telemetry_timer = self.create_timer(
            0.5, self.publish_telemetry)

        # State logger at 1Hz
        self.log_timer = self.create_timer(
            1.0, self.log_state)

        self.get_logger().info('PX4 Bridge node started')

    # ── Callbacks ────────────────────────────────────────────────────
    def state_callback(self, msg):
        self.current_state = msg

    def pose_callback(self, msg):
        self.current_pose = msg

    def vel_callback(self, msg):
        self.current_vel = msg

    def battery_callback(self, msg):
        self.battery = msg

    # ── Telemetry publisher ──────────────────────────────────────────
    def publish_telemetry(self):
        pos = self.current_pose.pose.position
        vel = self.current_vel.twist.linear

        telemetry = (
            f"MODE:{self.current_state.mode} | "
            f"ARMED:{self.current_state.armed} | "
            f"X:{pos.x:.2f} Y:{pos.y:.2f} Z:{pos.z:.2f} | "
            f"VX:{vel.x:.2f} VY:{vel.y:.2f} VZ:{vel.z:.2f} | "
            f"BAT:{self.battery.percentage * 100:.1f}%"
        )

        msg = String()
        msg.data = telemetry
        self.telemetry_pub.publish(msg)

    # ── State logger ─────────────────────────────────────────────────
    def log_state(self):
        self.get_logger().info(
            f"Connected:{self.current_state.connected} | "
            f"Armed:{self.current_state.armed} | "
            f"Mode:{self.current_state.mode}"
        )

    # ── Service calls ────────────────────────────────────────────────
    def arm(self):
        if not self.arming_client.wait_for_service(timeout_sec=3.0):
            self.get_logger().error('Arming service not available')
            return False
        req = CommandBool.Request()
        req.value = True
        future = self.arming_client.call_async(req)
        self.get_logger().info('Arm command sent')
        return future

    def disarm(self):
        if not self.arming_client.wait_for_service(timeout_sec=3.0):
            self.get_logger().error('Arming service not available')
            return False
        req = CommandBool.Request()
        req.value = False
        future = self.arming_client.call_async(req)
        self.get_logger().info('Disarm command sent')
        return future

    def set_mode(self, mode: str):
        if not self.mode_client.wait_for_service(timeout_sec=3.0):
            self.get_logger().error('Set mode service not available')
            return False
        req = SetMode.Request()
        req.custom_mode = mode
        future = self.mode_client.call_async(req)
        self.get_logger().info(f'Mode change to {mode} sent')
        return future

    def takeoff(self, altitude: float):
        if not self.takeoff_client.wait_for_service(timeout_sec=3.0):
            self.get_logger().error('Takeoff service not available')
            return False
        req = CommandTOL.Request()
        req.altitude = altitude
        future = self.takeoff_client.call_async(req)
        self.get_logger().info(f'Takeoff to {altitude}m sent')
        return future

    def land(self):
        if not self.land_client.wait_for_service(timeout_sec=3.0):
            self.get_logger().error('Land service not available')
            return False
        req = CommandTOL.Request()
        future = self.land_client.call_async(req)
        self.get_logger().info('Land command sent')
        return future


def main(args=None):
    rclpy.init(args=args)
    node = PX4Bridge()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
