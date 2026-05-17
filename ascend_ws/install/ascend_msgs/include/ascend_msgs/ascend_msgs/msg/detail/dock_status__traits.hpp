// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ascend_msgs:msg/DockStatus.idl
// generated code does not contain a copyright notice

#ifndef ASCEND_MSGS__MSG__DETAIL__DOCK_STATUS__TRAITS_HPP_
#define ASCEND_MSGS__MSG__DETAIL__DOCK_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ascend_msgs/msg/detail/dock_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace ascend_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DockStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: cover_state
  {
    out << "cover_state: ";
    rosidl_generator_traits::value_to_yaml(msg.cover_state, out);
    out << ", ";
  }

  // member: charging_state
  {
    out << "charging_state: ";
    rosidl_generator_traits::value_to_yaml(msg.charging_state, out);
    out << ", ";
  }

  // member: dock_battery_percentage
  {
    out << "dock_battery_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.dock_battery_percentage, out);
    out << ", ";
  }

  // member: drone_battery_percentage
  {
    out << "drone_battery_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.drone_battery_percentage, out);
    out << ", ";
  }

  // member: pogo_connected
  {
    out << "pogo_connected: ";
    rosidl_generator_traits::value_to_yaml(msg.pogo_connected, out);
    out << ", ";
  }

  // member: data_transfer_active
  {
    out << "data_transfer_active: ";
    rosidl_generator_traits::value_to_yaml(msg.data_transfer_active, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DockStatus & msg,
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

  // member: cover_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cover_state: ";
    rosidl_generator_traits::value_to_yaml(msg.cover_state, out);
    out << "\n";
  }

  // member: charging_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "charging_state: ";
    rosidl_generator_traits::value_to_yaml(msg.charging_state, out);
    out << "\n";
  }

  // member: dock_battery_percentage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dock_battery_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.dock_battery_percentage, out);
    out << "\n";
  }

  // member: drone_battery_percentage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drone_battery_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.drone_battery_percentage, out);
    out << "\n";
  }

  // member: pogo_connected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pogo_connected: ";
    rosidl_generator_traits::value_to_yaml(msg.pogo_connected, out);
    out << "\n";
  }

  // member: data_transfer_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data_transfer_active: ";
    rosidl_generator_traits::value_to_yaml(msg.data_transfer_active, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DockStatus & msg, bool use_flow_style = false)
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
  const ascend_msgs::msg::DockStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  ascend_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ascend_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ascend_msgs::msg::DockStatus & msg)
{
  return ascend_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ascend_msgs::msg::DockStatus>()
{
  return "ascend_msgs::msg::DockStatus";
}

template<>
inline const char * name<ascend_msgs::msg::DockStatus>()
{
  return "ascend_msgs/msg/DockStatus";
}

template<>
struct has_fixed_size<ascend_msgs::msg::DockStatus>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<ascend_msgs::msg::DockStatus>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<ascend_msgs::msg::DockStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ASCEND_MSGS__MSG__DETAIL__DOCK_STATUS__TRAITS_HPP_
