// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ascend_msgs:msg/Telemetry.idl
// generated code does not contain a copyright notice

#ifndef ASCEND_MSGS__MSG__DETAIL__TELEMETRY__BUILDER_HPP_
#define ASCEND_MSGS__MSG__DETAIL__TELEMETRY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ascend_msgs/msg/detail/telemetry__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ascend_msgs
{

namespace msg
{

namespace builder
{

class Init_Telemetry_targets_found
{
public:
  explicit Init_Telemetry_targets_found(::ascend_msgs::msg::Telemetry & msg)
  : msg_(msg)
  {}
  ::ascend_msgs::msg::Telemetry targets_found(::ascend_msgs::msg::Telemetry::_targets_found_type arg)
  {
    msg_.targets_found = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ascend_msgs::msg::Telemetry msg_;
};

class Init_Telemetry_sortie_number
{
public:
  explicit Init_Telemetry_sortie_number(::ascend_msgs::msg::Telemetry & msg)
  : msg_(msg)
  {}
  Init_Telemetry_targets_found sortie_number(::ascend_msgs::msg::Telemetry::_sortie_number_type arg)
  {
    msg_.sortie_number = std::move(arg);
    return Init_Telemetry_targets_found(msg_);
  }

private:
  ::ascend_msgs::msg::Telemetry msg_;
};

class Init_Telemetry_armed
{
public:
  explicit Init_Telemetry_armed(::ascend_msgs::msg::Telemetry & msg)
  : msg_(msg)
  {}
  Init_Telemetry_sortie_number armed(::ascend_msgs::msg::Telemetry::_armed_type arg)
  {
    msg_.armed = std::move(arg);
    return Init_Telemetry_sortie_number(msg_);
  }

private:
  ::ascend_msgs::msg::Telemetry msg_;
};

class Init_Telemetry_flight_mode
{
public:
  explicit Init_Telemetry_flight_mode(::ascend_msgs::msg::Telemetry & msg)
  : msg_(msg)
  {}
  Init_Telemetry_armed flight_mode(::ascend_msgs::msg::Telemetry::_flight_mode_type arg)
  {
    msg_.flight_mode = std::move(arg);
    return Init_Telemetry_armed(msg_);
  }

private:
  ::ascend_msgs::msg::Telemetry msg_;
};

class Init_Telemetry_battery_voltage
{
public:
  explicit Init_Telemetry_battery_voltage(::ascend_msgs::msg::Telemetry & msg)
  : msg_(msg)
  {}
  Init_Telemetry_flight_mode battery_voltage(::ascend_msgs::msg::Telemetry::_battery_voltage_type arg)
  {
    msg_.battery_voltage = std::move(arg);
    return Init_Telemetry_flight_mode(msg_);
  }

private:
  ::ascend_msgs::msg::Telemetry msg_;
};

class Init_Telemetry_battery_percentage
{
public:
  explicit Init_Telemetry_battery_percentage(::ascend_msgs::msg::Telemetry & msg)
  : msg_(msg)
  {}
  Init_Telemetry_battery_voltage battery_percentage(::ascend_msgs::msg::Telemetry::_battery_percentage_type arg)
  {
    msg_.battery_percentage = std::move(arg);
    return Init_Telemetry_battery_voltage(msg_);
  }

private:
  ::ascend_msgs::msg::Telemetry msg_;
};

class Init_Telemetry_yaw
{
public:
  explicit Init_Telemetry_yaw(::ascend_msgs::msg::Telemetry & msg)
  : msg_(msg)
  {}
  Init_Telemetry_battery_percentage yaw(::ascend_msgs::msg::Telemetry::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_Telemetry_battery_percentage(msg_);
  }

private:
  ::ascend_msgs::msg::Telemetry msg_;
};

class Init_Telemetry_pitch
{
public:
  explicit Init_Telemetry_pitch(::ascend_msgs::msg::Telemetry & msg)
  : msg_(msg)
  {}
  Init_Telemetry_yaw pitch(::ascend_msgs::msg::Telemetry::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_Telemetry_yaw(msg_);
  }

private:
  ::ascend_msgs::msg::Telemetry msg_;
};

class Init_Telemetry_roll
{
public:
  explicit Init_Telemetry_roll(::ascend_msgs::msg::Telemetry & msg)
  : msg_(msg)
  {}
  Init_Telemetry_pitch roll(::ascend_msgs::msg::Telemetry::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_Telemetry_pitch(msg_);
  }

private:
  ::ascend_msgs::msg::Telemetry msg_;
};

class Init_Telemetry_vel_z
{
public:
  explicit Init_Telemetry_vel_z(::ascend_msgs::msg::Telemetry & msg)
  : msg_(msg)
  {}
  Init_Telemetry_roll vel_z(::ascend_msgs::msg::Telemetry::_vel_z_type arg)
  {
    msg_.vel_z = std::move(arg);
    return Init_Telemetry_roll(msg_);
  }

private:
  ::ascend_msgs::msg::Telemetry msg_;
};

class Init_Telemetry_vel_y
{
public:
  explicit Init_Telemetry_vel_y(::ascend_msgs::msg::Telemetry & msg)
  : msg_(msg)
  {}
  Init_Telemetry_vel_z vel_y(::ascend_msgs::msg::Telemetry::_vel_y_type arg)
  {
    msg_.vel_y = std::move(arg);
    return Init_Telemetry_vel_z(msg_);
  }

private:
  ::ascend_msgs::msg::Telemetry msg_;
};

class Init_Telemetry_vel_x
{
public:
  explicit Init_Telemetry_vel_x(::ascend_msgs::msg::Telemetry & msg)
  : msg_(msg)
  {}
  Init_Telemetry_vel_y vel_x(::ascend_msgs::msg::Telemetry::_vel_x_type arg)
  {
    msg_.vel_x = std::move(arg);
    return Init_Telemetry_vel_y(msg_);
  }

private:
  ::ascend_msgs::msg::Telemetry msg_;
};

class Init_Telemetry_pos_z
{
public:
  explicit Init_Telemetry_pos_z(::ascend_msgs::msg::Telemetry & msg)
  : msg_(msg)
  {}
  Init_Telemetry_vel_x pos_z(::ascend_msgs::msg::Telemetry::_pos_z_type arg)
  {
    msg_.pos_z = std::move(arg);
    return Init_Telemetry_vel_x(msg_);
  }

private:
  ::ascend_msgs::msg::Telemetry msg_;
};

class Init_Telemetry_pos_y
{
public:
  explicit Init_Telemetry_pos_y(::ascend_msgs::msg::Telemetry & msg)
  : msg_(msg)
  {}
  Init_Telemetry_pos_z pos_y(::ascend_msgs::msg::Telemetry::_pos_y_type arg)
  {
    msg_.pos_y = std::move(arg);
    return Init_Telemetry_pos_z(msg_);
  }

private:
  ::ascend_msgs::msg::Telemetry msg_;
};

class Init_Telemetry_pos_x
{
public:
  explicit Init_Telemetry_pos_x(::ascend_msgs::msg::Telemetry & msg)
  : msg_(msg)
  {}
  Init_Telemetry_pos_y pos_x(::ascend_msgs::msg::Telemetry::_pos_x_type arg)
  {
    msg_.pos_x = std::move(arg);
    return Init_Telemetry_pos_y(msg_);
  }

private:
  ::ascend_msgs::msg::Telemetry msg_;
};

class Init_Telemetry_header
{
public:
  Init_Telemetry_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Telemetry_pos_x header(::ascend_msgs::msg::Telemetry::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Telemetry_pos_x(msg_);
  }

private:
  ::ascend_msgs::msg::Telemetry msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ascend_msgs::msg::Telemetry>()
{
  return ascend_msgs::msg::builder::Init_Telemetry_header();
}

}  // namespace ascend_msgs

#endif  // ASCEND_MSGS__MSG__DETAIL__TELEMETRY__BUILDER_HPP_
