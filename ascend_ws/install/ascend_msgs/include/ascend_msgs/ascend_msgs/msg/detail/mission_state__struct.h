// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ascend_msgs:msg/MissionState.idl
// generated code does not contain a copyright notice

#ifndef ASCEND_MSGS__MSG__DETAIL__MISSION_STATE__STRUCT_H_
#define ASCEND_MSGS__MSG__DETAIL__MISSION_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'IDLE'.
enum
{
  ascend_msgs__msg__MissionState__IDLE = 0
};

/// Constant 'SEEDING'.
enum
{
  ascend_msgs__msg__MissionState__SEEDING = 1
};

/// Constant 'TAKEOFF'.
enum
{
  ascend_msgs__msg__MissionState__TAKEOFF = 2
};

/// Constant 'SEARCHING'.
enum
{
  ascend_msgs__msg__MissionState__SEARCHING = 3
};

/// Constant 'TARGET_FOUND'.
enum
{
  ascend_msgs__msg__MissionState__TARGET_FOUND = 4
};

/// Constant 'CAPTURING'.
enum
{
  ascend_msgs__msg__MissionState__CAPTURING = 5
};

/// Constant 'RETURNING'.
enum
{
  ascend_msgs__msg__MissionState__RETURNING = 6
};

/// Constant 'DOCKING'.
enum
{
  ascend_msgs__msg__MissionState__DOCKING = 7
};

/// Constant 'CHARGING'.
enum
{
  ascend_msgs__msg__MissionState__CHARGING = 8
};

/// Constant 'DATA_TRANSFER'.
enum
{
  ascend_msgs__msg__MissionState__DATA_TRANSFER = 9
};

/// Constant 'VALIDATING'.
enum
{
  ascend_msgs__msg__MissionState__VALIDATING = 10
};

/// Constant 'SORTIE_COMPLETE'.
enum
{
  ascend_msgs__msg__MissionState__SORTIE_COMPLETE = 11
};

/// Constant 'LOW_BATTERY'.
enum
{
  ascend_msgs__msg__MissionState__LOW_BATTERY = 12
};

/// Constant 'EMERGENCY'.
enum
{
  ascend_msgs__msg__MissionState__EMERGENCY = 13
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'status_message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MissionState in the package ascend_msgs.
/**
  * Current phase of the ASCEND mission
 */
typedef struct ascend_msgs__msg__MissionState
{
  std_msgs__msg__Header header;
  uint8_t current_phase;
  uint8_t previous_phase;
  int32_t sortie_number;
  int32_t targets_found;
  int32_t targets_validated;
  bool last_validation_result;
  rosidl_runtime_c__String status_message;
} ascend_msgs__msg__MissionState;

// Struct for a sequence of ascend_msgs__msg__MissionState.
typedef struct ascend_msgs__msg__MissionState__Sequence
{
  ascend_msgs__msg__MissionState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ascend_msgs__msg__MissionState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ASCEND_MSGS__MSG__DETAIL__MISSION_STATE__STRUCT_H_
