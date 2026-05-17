// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ascend_msgs:msg/DockStatus.idl
// generated code does not contain a copyright notice

#ifndef ASCEND_MSGS__MSG__DETAIL__DOCK_STATUS__BUILDER_HPP_
#define ASCEND_MSGS__MSG__DETAIL__DOCK_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ascend_msgs/msg/detail/dock_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ascend_msgs
{

namespace msg
{

namespace builder
{

class Init_DockStatus_data_transfer_active
{
public:
  explicit Init_DockStatus_data_transfer_active(::ascend_msgs::msg::DockStatus & msg)
  : msg_(msg)
  {}
  ::ascend_msgs::msg::DockStatus data_transfer_active(::ascend_msgs::msg::DockStatus::_data_transfer_active_type arg)
  {
    msg_.data_transfer_active = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ascend_msgs::msg::DockStatus msg_;
};

class Init_DockStatus_pogo_connected
{
public:
  explicit Init_DockStatus_pogo_connected(::ascend_msgs::msg::DockStatus & msg)
  : msg_(msg)
  {}
  Init_DockStatus_data_transfer_active pogo_connected(::ascend_msgs::msg::DockStatus::_pogo_connected_type arg)
  {
    msg_.pogo_connected = std::move(arg);
    return Init_DockStatus_data_transfer_active(msg_);
  }

private:
  ::ascend_msgs::msg::DockStatus msg_;
};

class Init_DockStatus_drone_battery_percentage
{
public:
  explicit Init_DockStatus_drone_battery_percentage(::ascend_msgs::msg::DockStatus & msg)
  : msg_(msg)
  {}
  Init_DockStatus_pogo_connected drone_battery_percentage(::ascend_msgs::msg::DockStatus::_drone_battery_percentage_type arg)
  {
    msg_.drone_battery_percentage = std::move(arg);
    return Init_DockStatus_pogo_connected(msg_);
  }

private:
  ::ascend_msgs::msg::DockStatus msg_;
};

class Init_DockStatus_dock_battery_percentage
{
public:
  explicit Init_DockStatus_dock_battery_percentage(::ascend_msgs::msg::DockStatus & msg)
  : msg_(msg)
  {}
  Init_DockStatus_drone_battery_percentage dock_battery_percentage(::ascend_msgs::msg::DockStatus::_dock_battery_percentage_type arg)
  {
    msg_.dock_battery_percentage = std::move(arg);
    return Init_DockStatus_drone_battery_percentage(msg_);
  }

private:
  ::ascend_msgs::msg::DockStatus msg_;
};

class Init_DockStatus_charging_state
{
public:
  explicit Init_DockStatus_charging_state(::ascend_msgs::msg::DockStatus & msg)
  : msg_(msg)
  {}
  Init_DockStatus_dock_battery_percentage charging_state(::ascend_msgs::msg::DockStatus::_charging_state_type arg)
  {
    msg_.charging_state = std::move(arg);
    return Init_DockStatus_dock_battery_percentage(msg_);
  }

private:
  ::ascend_msgs::msg::DockStatus msg_;
};

class Init_DockStatus_cover_state
{
public:
  explicit Init_DockStatus_cover_state(::ascend_msgs::msg::DockStatus & msg)
  : msg_(msg)
  {}
  Init_DockStatus_charging_state cover_state(::ascend_msgs::msg::DockStatus::_cover_state_type arg)
  {
    msg_.cover_state = std::move(arg);
    return Init_DockStatus_charging_state(msg_);
  }

private:
  ::ascend_msgs::msg::DockStatus msg_;
};

class Init_DockStatus_header
{
public:
  Init_DockStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DockStatus_cover_state header(::ascend_msgs::msg::DockStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DockStatus_cover_state(msg_);
  }

private:
  ::ascend_msgs::msg::DockStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ascend_msgs::msg::DockStatus>()
{
  return ascend_msgs::msg::builder::Init_DockStatus_header();
}

}  // namespace ascend_msgs

#endif  // ASCEND_MSGS__MSG__DETAIL__DOCK_STATUS__BUILDER_HPP_
