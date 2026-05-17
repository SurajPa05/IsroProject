// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ascend_msgs:msg/TargetDetection.idl
// generated code does not contain a copyright notice

#ifndef ASCEND_MSGS__MSG__DETAIL__TARGET_DETECTION__TRAITS_HPP_
#define ASCEND_MSGS__MSG__DETAIL__TARGET_DETECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ascend_msgs/msg/detail/target_detection__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'position'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace ascend_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TargetDetection & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << ", ";
  }

  // member: feature_type
  {
    out << "feature_type: ";
    rosidl_generator_traits::value_to_yaml(msg.feature_type, out);
    out << ", ";
  }

  // member: image_path
  {
    out << "image_path: ";
    rosidl_generator_traits::value_to_yaml(msg.image_path, out);
    out << ", ";
  }

  // member: validated
  {
    out << "validated: ";
    rosidl_generator_traits::value_to_yaml(msg.validated, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TargetDetection & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
  }

  // member: feature_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feature_type: ";
    rosidl_generator_traits::value_to_yaml(msg.feature_type, out);
    out << "\n";
  }

  // member: image_path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image_path: ";
    rosidl_generator_traits::value_to_yaml(msg.image_path, out);
    out << "\n";
  }

  // member: validated
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "validated: ";
    rosidl_generator_traits::value_to_yaml(msg.validated, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TargetDetection & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace ascend_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ascend_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ascend_msgs::msg::TargetDetection & msg,
  std::ostream & out, size_t indentation = 0)
{
  ascend_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ascend_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ascend_msgs::msg::TargetDetection & msg)
{
  return ascend_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ascend_msgs::msg::TargetDetection>()
{
  return "ascend_msgs::msg::TargetDetection";
}

template<>
inline const char * name<ascend_msgs::msg::TargetDetection>()
{
  return "ascend_msgs/msg/TargetDetection";
}

template<>
struct has_fixed_size<ascend_msgs::msg::TargetDetection>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ascend_msgs::msg::TargetDetection>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ascend_msgs::msg::TargetDetection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ASCEND_MSGS__MSG__DETAIL__TARGET_DETECTION__TRAITS_HPP_
