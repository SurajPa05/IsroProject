# Status of the ground dock
std_msgs/Header header
uint8 COVER_OPEN=0
uint8 COVER_CLOSED=1
uint8 COVER_MOVING=2
uint8 NOT_CHARGING=0
uint8 CHARGING=1
uint8 CHARGE_COMPLETE=2
uint8 cover_state
uint8 charging_state
float32 dock_battery_percentage
float32 drone_battery_percentage
bool pogo_connected
bool data_transfer_active
