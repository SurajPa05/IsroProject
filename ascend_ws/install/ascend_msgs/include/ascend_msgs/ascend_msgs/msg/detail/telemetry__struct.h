// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ascend_msgs:msg/Telemetry.idl
// generated code does not contain a copyright notice

#ifndef ASCEND_MSGS__MSG__DETAIL__TELEMETRY__STRUCT_H_
#define ASCEND_MSGS__MSG__DETAIL__TELEMETRY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'flight_mode'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Telemetry in the package ascend_msgs.
/**
  * Consolidated telemetry for ISRO qualification requirement
 */
typedef struct ascend_msgs__msg__Telemetry
{
  std_msgs__msg__Header header;
  float pos_x;
  float pos_y;
  float pos_z;
  float vel_x;
  float vel_y;
  float vel_z;
  float roll;
  float pitch;
  float yaw;
  float battery_percentage;
  float battery_voltage;
  rosidl_runtime_c__String flight_mode;
  bool armed;
  int32_t sortie_number;
  int32_t targets_found;
} ascend_msgs__msg__Telemetry;

// Struct for a sequence of ascend_msgs__msg__Telemetry.
typedef struct ascend_msgs__msg__Telemetry__Sequence
{
  ascend_msgs__msg__Telemetry * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ascend_msgs__msg__Telemetry__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ASCEND_MSGS__MSG__DETAIL__TELEMETRY__STRUCT_H_
