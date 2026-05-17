// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ascend_msgs:msg/MissionState.idl
// generated code does not contain a copyright notice

#ifndef ASCEND_MSGS__MSG__DETAIL__MISSION_STATE__TRAITS_HPP_
#define ASCEND_MSGS__MSG__DETAIL__MISSION_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ascend_msgs/msg/detail/mission_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace ascend_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MissionState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: current_phase
  {
    out << "current_phase: ";
    rosidl_generator_traits::value_to_yaml(msg.current_phase, out);
    out << ", ";
  }

  // member: previous_phase
  {
    out << "previous_phase: ";
    rosidl_generator_traits::value_to_yaml(msg.previous_phase, out);
    out << ", ";
  }

  // member: sortie_number
  {
    out << "sortie_number: ";
    rosidl_generator_traits::value_to_yaml(msg.sortie_number, out);
    out << ", ";
  }

  // member: targets_found
  {
    out << "targets_found: ";
    rosidl_generator_traits::value_to_yaml(msg.targets_found, out);
    out << ", ";
  }

  // member: targets_validated
  {
    out << "targets_validated: ";
    rosidl_generator_traits::value_to_yaml(msg.targets_validated, out);
    out << ", ";
  }

  // member: last_validation_result
  {
    out << "last_validation_result: ";
    rosidl_generator_traits::value_to_yaml(msg.last_validation_result, out);
    out << ", ";
  }

  // member: status_message
  {
    out << "status_message: ";
    rosidl_generator_traits::value_to_yaml(msg.status_message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MissionState & msg,
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

  // member: current_phase
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_phase: ";
    rosidl_generator_traits::value_to_yaml(msg.current_phase, out);
    out << "\n";
  }

  // member: previous_phase
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "previous_phase: ";
    rosidl_generator_traits::value_to_yaml(msg.previous_phase, out);
    out << "\n";
  }

  // member: sortie_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sortie_number: ";
    rosidl_generator_traits::value_to_yaml(msg.sortie_number, out);
    out << "\n";
  }

  // member: targets_found
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "targets_found: ";
    rosidl_generator_traits::value_to_yaml(msg.targets_found, out);
    out << "\n";
  }

  // member: targets_validated
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "targets_validated: ";
    rosidl_generator_traits::value_to_yaml(msg.targets_validated, out);
    out << "\n";
  }

  // member: last_validation_result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_validation_result: ";
    rosidl_generator_traits::value_to_yaml(msg.last_validation_result, out);
    out << "\n";
  }

  // member: status_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_message: ";
    rosidl_generator_traits::value_to_yaml(msg.status_message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MissionState & msg, bool use_flow_style = false)
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
  const ascend_msgs::msg::MissionState & msg,
  std::ostream & out, size_t indentation = 0)
{
  ascend_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ascend_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ascend_msgs::msg::MissionState & msg)
{
  return ascend_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ascend_msgs::msg::MissionState>()
{
  return "ascend_msgs::msg::MissionState";
}

template<>
inline const char * name<ascend_msgs::msg::MissionState>()
{
  return "ascend_msgs/msg/MissionState";
}

template<>
struct has_fixed_size<ascend_msgs::msg::MissionState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ascend_msgs::msg::MissionState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ascend_msgs::msg::MissionState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ASCEND_MSGS__MSG__DETAIL__MISSION_STATE__TRAITS_HPP_
