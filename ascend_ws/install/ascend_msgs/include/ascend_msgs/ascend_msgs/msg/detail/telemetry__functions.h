// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ascend_msgs:msg/Telemetry.idl
// generated code does not contain a copyright notice

#ifndef ASCEND_MSGS__MSG__DETAIL__TELEMETRY__FUNCTIONS_H_
#define ASCEND_MSGS__MSG__DETAIL__TELEMETRY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ascend_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "ascend_msgs/msg/detail/telemetry__struct.h"

/// Initialize msg/Telemetry message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ascend_msgs__msg__Telemetry
 * )) before or use
 * ascend_msgs__msg__Telemetry__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ascend_msgs
bool
ascend_msgs__msg__Telemetry__init(ascend_msgs__msg__Telemetry * msg);

/// Finalize msg/Telemetry message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ascend_msgs
void
ascend_msgs__msg__Telemetry__fini(ascend_msgs__msg__Telemetry * msg);

/// Create msg/Telemetry message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ascend_msgs__msg__Telemetry__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ascend_msgs
ascend_msgs__msg__Telemetry *
ascend_msgs__msg__Telemetry__create();

/// Destroy msg/Telemetry message.
/**
 * It calls
 * ascend_msgs__msg__Telemetry__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ascend_msgs
void
ascend_msgs__msg__Telemetry__destroy(ascend_msgs__msg__Telemetry * msg);

/// Check for msg/Telemetry message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ascend_msgs
bool
ascend_msgs__msg__Telemetry__are_equal(const ascend_msgs__msg__Telemetry * lhs, const ascend_msgs__msg__Telemetry * rhs);

/// Copy a msg/Telemetry message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ascend_msgs
bool
ascend_msgs__msg__Telemetry__copy(
  const ascend_msgs__msg__Telemetry * input,
  ascend_msgs__msg__Telemetry * output);

/// Initialize array of msg/Telemetry messages.
/**
 * It allocates the memory for the number of elements and calls
 * ascend_msgs__msg__Telemetry__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ascend_msgs
bool
ascend_msgs__msg__Telemetry__Sequence__init(ascend_msgs__msg__Telemetry__Sequence * array, size_t size);

/// Finalize array of msg/Telemetry messages.
/**
 * It calls
 * ascend_msgs__msg__Telemetry__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ascend_msgs
void
ascend_msgs__msg__Telemetry__Sequence__fini(ascend_msgs__msg__Telemetry__Sequence * array);

/// Create array of msg/Telemetry messages.
/**
 * It allocates the memory for the array and calls
 * ascend_msgs__msg__Telemetry__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ascend_msgs
ascend_msgs__msg__Telemetry__Sequence *
ascend_msgs__msg__Telemetry__Sequence__create(size_t size);

/// Destroy array of msg/Telemetry messages.
/**
 * It calls
 * ascend_msgs__msg__Telemetry__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ascend_msgs
void
ascend_msgs__msg__Telemetry__Sequence__destroy(ascend_msgs__msg__Telemetry__Sequence * array);

/// Check for msg/Telemetry message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ascend_msgs
bool
ascend_msgs__msg__Telemetry__Sequence__are_equal(const ascend_msgs__msg__Telemetry__Sequence * lhs, const ascend_msgs__msg__Telemetry__Sequence * rhs);

/// Copy an array of msg/Telemetry messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ascend_msgs
bool
ascend_msgs__msg__Telemetry__Sequence__copy(
  const ascend_msgs__msg__Telemetry__Sequence * input,
  ascend_msgs__msg__Telemetry__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ASCEND_MSGS__MSG__DETAIL__TELEMETRY__FUNCTIONS_H_
