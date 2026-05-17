# Current phase of the ASCEND mission
std_msgs/Header header

uint8 IDLE=0
uint8 SEEDING=1
uint8 TAKEOFF=2
uint8 SEARCHING=3
uint8 TARGET_FOUND=4
uint8 CAPTURING=5
uint8 RETURNING=6
uint8 DOCKING=7
uint8 CHARGING=8
uint8 DATA_TRANSFER=9
uint8 VALIDATING=10
uint8 SORTIE_COMPLETE=11
uint8 LOW_BATTERY=12
uint8 EMERGENCY=13

uint8 current_phase
uint8 previous_phase
int32 sortie_number
int32 targets_found
int32 targets_validated
bool last_validation_result
string status_message
