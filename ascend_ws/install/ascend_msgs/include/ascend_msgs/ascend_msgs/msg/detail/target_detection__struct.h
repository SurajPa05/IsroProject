// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ascend_msgs:msg/TargetDetection.idl
// generated code does not contain a copyright notice

#ifndef ASCEND_MSGS__MSG__DETAIL__TARGET_DETECTION__STRUCT_H_
#define ASCEND_MSGS__MSG__DETAIL__TARGET_DETECTION__STRUCT_H_

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
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'feature_type'
// Member 'image_path'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/TargetDetection in the package ascend_msgs.
/**
  * Target detected by Siamese network
 */
typedef struct ascend_msgs__msg__TargetDetection
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Point position;
  float confidence;
  rosidl_runtime_c__String feature_type;
  rosidl_runtime_c__String image_path;
  bool validated;
} ascend_msgs__msg__TargetDetection;

// Struct for a sequence of ascend_msgs__msg__TargetDetection.
typedef struct ascend_msgs__msg__TargetDetection__Sequence
{
  ascend_msgs__msg__TargetDetection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ascend_msgs__msg__TargetDetection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ASCEND_MSGS__MSG__DETAIL__TARGET_DETECTION__STRUCT_H_
