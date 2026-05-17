// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ascend_msgs:msg/MissionState.idl
// generated code does not contain a copyright notice

#ifndef ASCEND_MSGS__MSG__DETAIL__MISSION_STATE__BUILDER_HPP_
#define ASCEND_MSGS__MSG__DETAIL__MISSION_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ascend_msgs/msg/detail/mission_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ascend_msgs
{

namespace msg
{

namespace builder
{

class Init_MissionState_status_message
{
public:
  explicit Init_MissionState_status_message(::ascend_msgs::msg::MissionState & msg)
  : msg_(msg)
  {}
  ::ascend_msgs::msg::MissionState status_message(::ascend_msgs::msg::MissionState::_status_message_type arg)
  {
    msg_.status_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ascend_msgs::msg::MissionState msg_;
};

class Init_MissionState_last_validation_result
{
public:
  explicit Init_MissionState_last_validation_result(::ascend_msgs::msg::MissionState & msg)
  : msg_(msg)
  {}
  Init_MissionState_status_message last_validation_result(::ascend_msgs::msg::MissionState::_last_validation_result_type arg)
  {
    msg_.last_validation_result = std::move(arg);
    return Init_MissionState_status_message(msg_);
  }

private:
  ::ascend_msgs::msg::MissionState msg_;
};

class Init_MissionState_targets_validated
{
public:
  explicit Init_MissionState_targets_validated(::ascend_msgs::msg::MissionState & msg)
  : msg_(msg)
  {}
  Init_MissionState_last_validation_result targets_validated(::ascend_msgs::msg::MissionState::_targets_validated_type arg)
  {
    msg_.targets_validated = std::move(arg);
    return Init_MissionState_last_validation_result(msg_);
  }

private:
  ::ascend_msgs::msg::MissionState msg_;
};

class Init_MissionState_targets_found
{
public:
  explicit Init_MissionState_targets_found(::ascend_msgs::msg::MissionState & msg)
  : msg_(msg)
  {}
  Init_MissionState_targets_validated targets_found(::ascend_msgs::msg::MissionState::_targets_found_type arg)
  {
    msg_.targets_found = std::move(arg);
    return Init_MissionState_targets_validated(msg_);
  }

private:
  ::ascend_msgs::msg::MissionState msg_;
};

class Init_MissionState_sortie_number
{
public:
  explicit Init_MissionState_sortie_number(::ascend_msgs::msg::MissionState & msg)
  : msg_(msg)
  {}
  Init_MissionState_targets_found sortie_number(::ascend_msgs::msg::MissionState::_sortie_number_type arg)
  {
    msg_.sortie_number = std::move(arg);
    return Init_MissionState_targets_found(msg_);
  }

private:
  ::ascend_msgs::msg::MissionState msg_;
};

class Init_MissionState_previous_phase
{
public:
  explicit Init_MissionState_previous_phase(::ascend_msgs::msg::MissionState & msg)
  : msg_(msg)
  {}
  Init_MissionState_sortie_number previous_phase(::ascend_msgs::msg::MissionState::_previous_phase_type arg)
  {
    msg_.previous_phase = std::move(arg);
    return Init_MissionState_sortie_number(msg_);
  }

private:
  ::ascend_msgs::msg::MissionState msg_;
};

class Init_MissionState_current_phase
{
public:
  explicit Init_MissionState_current_phase(::ascend_msgs::msg::MissionState & msg)
  : msg_(msg)
  {}
  Init_MissionState_previous_phase current_phase(::ascend_msgs::msg::MissionState::_current_phase_type arg)
  {
    msg_.current_phase = std::move(arg);
    return Init_MissionState_previous_phase(msg_);
  }

private:
  ::ascend_msgs::msg::MissionState msg_;
};

class Init_MissionState_header
{
public:
  Init_MissionState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MissionState_current_phase header(::ascend_msgs::msg::MissionState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MissionState_current_phase(msg_);
  }

private:
  ::ascend_msgs::msg::MissionState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ascend_msgs::msg::MissionState>()
{
  return ascend_msgs::msg::builder::Init_MissionState_header();
}

}  // namespace ascend_msgs

#endif  // ASCEND_MSGS__MSG__DETAIL__MISSION_STATE__BUILDER_HPP_
