// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ascend_msgs:msg/DockStatus.idl
// generated code does not contain a copyright notice

#ifndef ASCEND_MSGS__MSG__DETAIL__DOCK_STATUS__STRUCT_H_
#define ASCEND_MSGS__MSG__DETAIL__DOCK_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'COVER_OPEN'.
enum
{
  ascend_msgs__msg__DockStatus__COVER_OPEN = 0
};

/// Constant 'COVER_CLOSED'.
enum
{
  ascend_msgs__msg__DockStatus__COVER_CLOSED = 1
};

/// Constant 'COVER_MOVING'.
enum
{
  ascend_msgs__msg__DockStatus__COVER_MOVING = 2
};

/// Constant 'NOT_CHARGING'.
enum
{
  ascend_msgs__msg__DockStatus__NOT_CHARGING = 0
};

/// Constant 'CHARGING'.
enum
{
  ascend_msgs__msg__DockStatus__CHARGING = 1
};

/// Constant 'CHARGE_COMPLETE'.
enum
{
  ascend_msgs__msg__DockStatus__CHARGE_COMPLETE = 2
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/DockStatus in the package ascend_msgs.
/**
  * Status of the ground dock
 */
typedef struct ascend_msgs__msg__DockStatus
{
  std_msgs__msg__Header header;
  uint8_t cover_state;
  uint8_t charging_state;
  float dock_battery_percentage;
  float drone_battery_percentage;
  bool pogo_connected;
  bool data_transfer_active;
} ascend_msgs__msg__DockStatus;

// Struct for a sequence of ascend_msgs__msg__DockStatus.
typedef struct ascend_msgs__msg__DockStatus__Sequence
{
  ascend_msgs__msg__DockStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ascend_msgs__msg__DockStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ASCEND_MSGS__MSG__DETAIL__DOCK_STATUS__STRUCT_H_
