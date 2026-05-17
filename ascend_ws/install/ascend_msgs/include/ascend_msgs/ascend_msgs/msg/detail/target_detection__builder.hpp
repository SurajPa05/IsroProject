// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ascend_msgs:msg/TargetDetection.idl
// generated code does not contain a copyright notice

#ifndef ASCEND_MSGS__MSG__DETAIL__TARGET_DETECTION__BUILDER_HPP_
#define ASCEND_MSGS__MSG__DETAIL__TARGET_DETECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ascend_msgs/msg/detail/target_detection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ascend_msgs
{

namespace msg
{

namespace builder
{

class Init_TargetDetection_validated
{
public:
  explicit Init_TargetDetection_validated(::ascend_msgs::msg::TargetDetection & msg)
  : msg_(msg)
  {}
  ::ascend_msgs::msg::TargetDetection validated(::ascend_msgs::msg::TargetDetection::_validated_type arg)
  {
    msg_.validated = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ascend_msgs::msg::TargetDetection msg_;
};

class Init_TargetDetection_image_path
{
public:
  explicit Init_TargetDetection_image_path(::ascend_msgs::msg::TargetDetection & msg)
  : msg_(msg)
  {}
  Init_TargetDetection_validated image_path(::ascend_msgs::msg::TargetDetection::_image_path_type arg)
  {
    msg_.image_path = std::move(arg);
    return Init_TargetDetection_validated(msg_);
  }

private:
  ::ascend_msgs::msg::TargetDetection msg_;
};

class Init_TargetDetection_feature_type
{
public:
  explicit Init_TargetDetection_feature_type(::ascend_msgs::msg::TargetDetection & msg)
  : msg_(msg)
  {}
  Init_TargetDetection_image_path feature_type(::ascend_msgs::msg::TargetDetection::_feature_type_type arg)
  {
    msg_.feature_type = std::move(arg);
    return Init_TargetDetection_image_path(msg_);
  }

private:
  ::ascend_msgs::msg::TargetDetection msg_;
};

class Init_TargetDetection_confidence
{
public:
  explicit Init_TargetDetection_confidence(::ascend_msgs::msg::TargetDetection & msg)
  : msg_(msg)
  {}
  Init_TargetDetection_feature_type confidence(::ascend_msgs::msg::TargetDetection::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_TargetDetection_feature_type(msg_);
  }

private:
  ::ascend_msgs::msg::TargetDetection msg_;
};

class Init_TargetDetection_position
{
public:
  explicit Init_TargetDetection_position(::ascend_msgs::msg::TargetDetection & msg)
  : msg_(msg)
  {}
  Init_TargetDetection_confidence position(::ascend_msgs::msg::TargetDetection::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_TargetDetection_confidence(msg_);
  }

private:
  ::ascend_msgs::msg::TargetDetection msg_;
};

class Init_TargetDetection_header
{
public:
  Init_TargetDetection_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TargetDetection_position header(::ascend_msgs::msg::TargetDetection::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TargetDetection_position(msg_);
  }

private:
  ::ascend_msgs::msg::TargetDetection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ascend_msgs::msg::TargetDetection>()
{
  return ascend_msgs::msg::builder::Init_TargetDetection_header();
}

}  // namespace ascend_msgs

#endif  // ASCEND_MSGS__MSG__DETAIL__TARGET_DETECTION__BUILDER_HPP_
