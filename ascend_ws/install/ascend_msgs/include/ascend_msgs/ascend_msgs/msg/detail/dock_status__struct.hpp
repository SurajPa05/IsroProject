// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ascend_msgs:msg/DockStatus.idl
// generated code does not contain a copyright notice

#ifndef ASCEND_MSGS__MSG__DETAIL__DOCK_STATUS__STRUCT_HPP_
#define ASCEND_MSGS__MSG__DETAIL__DOCK_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ascend_msgs__msg__DockStatus __attribute__((deprecated))
#else
# define DEPRECATED__ascend_msgs__msg__DockStatus __declspec(deprecated)
#endif

namespace ascend_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DockStatus_
{
  using Type = DockStatus_<ContainerAllocator>;

  explicit DockStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cover_state = 0;
      this->charging_state = 0;
      this->dock_battery_percentage = 0.0f;
      this->drone_battery_percentage = 0.0f;
      this->pogo_connected = false;
      this->data_transfer_active = false;
    }
  }

  explicit DockStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cover_state = 0;
      this->charging_state = 0;
      this->dock_battery_percentage = 0.0f;
      this->drone_battery_percentage = 0.0f;
      this->pogo_connected = false;
      this->data_transfer_active = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _cover_state_type =
    uint8_t;
  _cover_state_type cover_state;
  using _charging_state_type =
    uint8_t;
  _charging_state_type charging_state;
  using _dock_battery_percentage_type =
    float;
  _dock_battery_percentage_type dock_battery_percentage;
  using _drone_battery_percentage_type =
    float;
  _drone_battery_percentage_type drone_battery_percentage;
  using _pogo_connected_type =
    bool;
  _pogo_connected_type pogo_connected;
  using _data_transfer_active_type =
    bool;
  _data_transfer_active_type data_transfer_active;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__cover_state(
    const uint8_t & _arg)
  {
    this->cover_state = _arg;
    return *this;
  }
  Type & set__charging_state(
    const uint8_t & _arg)
  {
    this->charging_state = _arg;
    return *this;
  }
  Type & set__dock_battery_percentage(
    const float & _arg)
  {
    this->dock_battery_percentage = _arg;
    return *this;
  }
  Type & set__drone_battery_percentage(
    const float & _arg)
  {
    this->drone_battery_percentage = _arg;
    return *this;
  }
  Type & set__pogo_connected(
    const bool & _arg)
  {
    this->pogo_connected = _arg;
    return *this;
  }
  Type & set__data_transfer_active(
    const bool & _arg)
  {
    this->data_transfer_active = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t COVER_OPEN =
    0u;
  static constexpr uint8_t COVER_CLOSED =
    1u;
  static constexpr uint8_t COVER_MOVING =
    2u;
  static constexpr uint8_t NOT_CHARGING =
    0u;
  static constexpr uint8_t CHARGING =
    1u;
  static constexpr uint8_t CHARGE_COMPLETE =
    2u;

  // pointer types
  using RawPtr =
    ascend_msgs::msg::DockStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const ascend_msgs::msg::DockStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ascend_msgs::msg::DockStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ascend_msgs::msg::DockStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ascend_msgs::msg::DockStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ascend_msgs::msg::DockStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ascend_msgs::msg::DockStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ascend_msgs::msg::DockStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ascend_msgs::msg::DockStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ascend_msgs::msg::DockStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ascend_msgs__msg__DockStatus
    std::shared_ptr<ascend_msgs::msg::DockStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ascend_msgs__msg__DockStatus
    std::shared_ptr<ascend_msgs::msg::DockStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DockStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->cover_state != other.cover_state) {
      return false;
    }
    if (this->charging_state != other.charging_state) {
      return false;
    }
    if (this->dock_battery_percentage != other.dock_battery_percentage) {
      return false;
    }
    if (this->drone_battery_percentage != other.drone_battery_percentage) {
      return false;
    }
    if (this->pogo_connected != other.pogo_connected) {
      return false;
    }
    if (this->data_transfer_active != other.data_transfer_active) {
      return false;
    }
    return true;
  }
  bool operator!=(const DockStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DockStatus_

// alias to use template instance with default allocator
using DockStatus =
  ascend_msgs::msg::DockStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DockStatus_<ContainerAllocator>::COVER_OPEN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DockStatus_<ContainerAllocator>::COVER_CLOSED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DockStatus_<ContainerAllocator>::COVER_MOVING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DockStatus_<ContainerAllocator>::NOT_CHARGING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DockStatus_<ContainerAllocator>::CHARGING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DockStatus_<ContainerAllocator>::CHARGE_COMPLETE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace ascend_msgs

#endif  // ASCEND_MSGS__MSG__DETAIL__DOCK_STATUS__STRUCT_HPP_
