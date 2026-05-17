#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from mavros_msgs.msg import State
from ascend_msgs.msg import MissionState, TargetDetection, DockStatus

class MissionStateMachine(Node):
    def __init__(self):
        super().__init__("mission_state_machine")

        self.IDLE           = 0
        self.SEEDING        = 1
        self.TAKEOFF        = 2
        self.SEARCHING      = 3
        self.TARGET_FOUND   = 4
        self.CAPTURING      = 5
        self.RETURNING      = 6
        self.DOCKING        = 7
        self.CHARGING       = 8
        self.DATA_TRANSFER  = 9
        self.VALIDATING     = 10
        self.SORTIE_COMPLETE = 11
        self.LOW_BATTERY    = 12
        self.EMERGENCY      = 13

        self.current_phase     = self.IDLE
        self.previous_phase    = self.IDLE
        self.sortie_number     = 0
        self.targets_found     = 0
        self.targets_validated = 0
        self.last_validation   = False
        self.battery_pct       = 100.0
        self.drone_connected   = False
        self.drone_armed       = False
        self.pogo_connected    = False
        self.charging_state    = 0
        self.seeding_done      = False

        self.LOW_BATTERY_THRESHOLD    = 30.0
        self.RETURN_BATTERY_THRESHOLD = 25.0
        self.CHARGED_THRESHOLD        = 90.0

        self.phase_names = {
            0: "IDLE", 1: "SEEDING", 2: "TAKEOFF",
            3: "SEARCHING", 4: "TARGET_FOUND", 5: "CAPTURING",
            6: "RETURNING", 7: "DOCKING", 8: "CHARGING",
            9: "DATA_TRANSFER", 10: "VALIDATING",
            11: "SORTIE_COMPLETE", 12: "LOW_BATTERY", 13: "EMERGENCY"
        }

        self.mission_pub = self.create_publisher(
            MissionState, "/ascend/mission_state", 10)

        self.telemetry_sub = self.create_subscription(
            String, "/ascend/telemetry",
            self.telemetry_callback, 10)

        self.target_sub = self.create_subscription(
            TargetDetection, "/ascend/target_detection",
            self.target_callback, 10)

        self.dock_sub = self.create_subscription(
            DockStatus, "/ascend/dock_status",
            self.dock_callback, 10)

        self.px4_state_sub = self.create_subscription(
            State, "/mavros/state",
            self.px4_state_callback, 10)

        self.validation_sub = self.create_subscription(
            String, "/ascend/validation_result",
            self.validation_callback, 10)

        self.sm_timer  = self.create_timer(0.5, self.run_state_machine)
        self.pub_timer = self.create_timer(0.2, self.publish_state)

        self.get_logger().info("Mission State Machine started")
        self.get_logger().info("Current state: IDLE")

    def px4_state_callback(self, msg):
        self.drone_connected = msg.connected
        self.drone_armed     = msg.armed

    def telemetry_callback(self, msg):
        try:
            for part in msg.data.split("|"):
                if "BAT:" in part:
                    self.battery_pct = float(
                        part.strip().replace("BAT:", "").replace("%", ""))
        except Exception:
            pass

    def target_callback(self, msg):
        if self.current_phase == self.SEARCHING:
            if msg.confidence > 0.75:
                self.targets_found += 1
                self.get_logger().info(
                    f"Target found! Confidence:{msg.confidence:.2f} "
                    f"Total:{self.targets_found}")
                self.transition_to(self.TARGET_FOUND)

    def dock_callback(self, msg):
        self.pogo_connected = msg.pogo_connected
        self.charging_state = msg.charging_state

    def validation_callback(self, msg):
        if self.current_phase == self.VALIDATING:
            self.last_validation = msg.data.upper() == "VALID"
            if self.last_validation:
                self.targets_validated += 1
                self.get_logger().info(
                    f"Validation PASSED. Validated:{self.targets_validated}")
            else:
                self.get_logger().warn("Validation FAILED")
            self.transition_to(self.SORTIE_COMPLETE)

    def run_state_machine(self):
        if (self.battery_pct < self.RETURN_BATTERY_THRESHOLD and
                self.current_phase not in [
                    self.RETURNING, self.DOCKING, self.CHARGING,
                    self.DATA_TRANSFER, self.VALIDATING,
                    self.IDLE, self.EMERGENCY, self.LOW_BATTERY]):
            self.get_logger().warn(
                f"LOW BATTERY:{self.battery_pct:.1f}% - Returning")
            self.transition_to(self.LOW_BATTERY)
            return

        if self.current_phase == self.IDLE:
            if self.drone_connected:
                self.transition_to(self.SEEDING)

        elif self.current_phase == self.SEEDING:
            if self.seeding_done:
                self.sortie_number += 1
                self.transition_to(self.TAKEOFF)

        elif self.current_phase == self.TARGET_FOUND:
            self.transition_to(self.CAPTURING)

        elif self.current_phase == self.LOW_BATTERY:
            self.transition_to(self.RETURNING)

        elif self.current_phase == self.DOCKING:
            if self.pogo_connected:
                self.transition_to(self.CHARGING)

        elif self.current_phase == self.CHARGING:
            if self.battery_pct >= self.CHARGED_THRESHOLD:
                self.get_logger().info(
                    f"Charged to {self.battery_pct:.1f}%")
                self.transition_to(self.DATA_TRANSFER)

        elif self.current_phase == self.SORTIE_COMPLETE:
            self.get_logger().info(
                f"Sortie {self.sortie_number} complete. Next sortie.")
            self.transition_to(self.TAKEOFF)

    def transition_to(self, new_phase):
        old_name = self.phase_names.get(self.current_phase, "UNKNOWN")
        new_name = self.phase_names.get(new_phase, "UNKNOWN")
        self.get_logger().info(f"State: {old_name} --> {new_name}")
        self.previous_phase = self.current_phase
        self.current_phase  = new_phase

    def publish_state(self):
        msg = MissionState()
        msg.header.stamp       = self.get_clock().now().to_msg()
        msg.header.frame_id    = "mission"
        msg.current_phase      = self.current_phase
        msg.previous_phase     = self.previous_phase
        msg.sortie_number      = self.sortie_number
        msg.targets_found      = self.targets_found
        msg.targets_validated  = self.targets_validated
        msg.last_validation_result = self.last_validation
        msg.status_message     = f"Battery:{self.battery_pct:.1f}%"
        self.mission_pub.publish(msg)


def main(args=None):
    rclpy.init(args=args)
    node = MissionStateMachine()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
