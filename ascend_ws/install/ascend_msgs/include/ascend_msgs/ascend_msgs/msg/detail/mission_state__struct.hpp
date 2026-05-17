// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ascend_msgs:msg/MissionState.idl
// generated code does not contain a copyright notice

#ifndef ASCEND_MSGS__MSG__DETAIL__MISSION_STATE__STRUCT_HPP_
#define ASCEND_MSGS__MSG__DETAIL__MISSION_STATE__STRUCT_HPP_

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
# define DEPRECATED__ascend_msgs__msg__MissionState __attribute__((deprecated))
#else
# define DEPRECATED__ascend_msgs__msg__MissionState __declspec(deprecated)
#endif

namespace ascend_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MissionState_
{
  using Type = MissionState_<ContainerAllocator>;

  explicit MissionState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_phase = 0;
      this->previous_phase = 0;
      this->sortie_number = 0l;
      this->targets_found = 0l;
      this->targets_validated = 0l;
      this->last_validation_result = false;
      this->status_message = "";
    }
  }

  explicit MissionState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    status_message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_phase = 0;
      this->previous_phase = 0;
      this->sortie_number = 0l;
      this->targets_found = 0l;
      this->targets_validated = 0l;
      this->last_validation_result = false;
      this->status_message = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _current_phase_type =
    uint8_t;
  _current_phase_type current_phase;
  using _previous_phase_type =
    uint8_t;
  _previous_phase_type previous_phase;
  using _sortie_number_type =
    int32_t;
  _sortie_number_type sortie_number;
  using _targets_found_type =
    int32_t;
  _targets_found_type targets_found;
  using _targets_validated_type =
    int32_t;
  _targets_validated_type targets_validated;
  using _last_validation_result_type =
    bool;
  _last_validation_result_type last_validation_result;
  using _status_message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_message_type status_message;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__current_phase(
    const uint8_t & _arg)
  {
    this->current_phase = _arg;
    return *this;
  }
  Type & set__previous_phase(
    const uint8_t & _arg)
  {
    this->previous_phase = _arg;
    return *this;
  }
  Type & set__sortie_number(
    const int32_t & _arg)
  {
    this->sortie_number = _arg;
    return *this;
  }
  Type & set__targets_found(
    const int32_t & _arg)
  {
    this->targets_found = _arg;
    return *this;
  }
  Type & set__targets_validated(
    const int32_t & _arg)
  {
    this->targets_validated = _arg;
    return *this;
  }
  Type & set__last_validation_result(
    const bool & _arg)
  {
    this->last_validation_result = _arg;
    return *this;
  }
  Type & set__status_message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->status_message = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t IDLE =
    0u;
  static constexpr uint8_t SEEDING =
    1u;
  static constexpr uint8_t TAKEOFF =
    2u;
  static constexpr uint8_t SEARCHING =
    3u;
  static constexpr uint8_t TARGET_FOUND =
    4u;
  static constexpr uint8_t CAPTURING =
    5u;
  static constexpr uint8_t RETURNING =
    6u;
  static constexpr uint8_t DOCKING =
    7u;
  static constexpr uint8_t CHARGING =
    8u;
  static constexpr uint8_t DATA_TRANSFER =
    9u;
  static constexpr uint8_t VALIDATING =
    10u;
  static constexpr uint8_t SORTIE_COMPLETE =
    11u;
  static constexpr uint8_t LOW_BATTERY =
    12u;
  static constexpr uint8_t EMERGENCY =
    13u;

  // pointer types
  using RawPtr =
    ascend_msgs::msg::MissionState_<ContainerAllocator> *;
  using ConstRawPtr =
    const ascend_msgs::msg::MissionState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ascend_msgs::msg::MissionState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ascend_msgs::msg::MissionState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ascend_msgs::msg::MissionState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ascend_msgs::msg::MissionState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ascend_msgs::msg::MissionState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ascend_msgs::msg::MissionState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ascend_msgs::msg::MissionState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ascend_msgs::msg::MissionState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ascend_msgs__msg__MissionState
    std::shared_ptr<ascend_msgs::msg::MissionState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ascend_msgs__msg__MissionState
    std::shared_ptr<ascend_msgs::msg::MissionState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MissionState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->current_phase != other.current_phase) {
      return false;
    }
    if (this->previous_phase != other.previous_phase) {
      return false;
    }
    if (this->sortie_number != other.sortie_number) {
      return false;
    }
    if (this->targets_found != other.targets_found) {
      return false;
    }
    if (this->targets_validated != other.targets_validated) {
      return false;
    }
    if (this->last_validation_result != other.last_validation_result) {
      return false;
    }
    if (this->status_message != other.status_message) {
      return false;
    }
    return true;
  }
  bool operator!=(const MissionState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MissionState_

// alias to use template instance with default allocator
using MissionState =
  ascend_msgs::msg::MissionState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionState_<ContainerAllocator>::IDLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionState_<ContainerAllocator>::SEEDING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionState_<ContainerAllocator>::TAKEOFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionState_<ContainerAllocator>::SEARCHING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionState_<ContainerAllocator>::TARGET_FOUND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionState_<ContainerAllocator>::CAPTURING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionState_<ContainerAllocator>::RETURNING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionState_<ContainerAllocator>::DOCKING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionState_<ContainerAllocator>::CHARGING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionState_<ContainerAllocator>::DATA_TRANSFER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionState_<ContainerAllocator>::VALIDATING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionState_<ContainerAllocator>::SORTIE_COMPLETE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionState_<ContainerAllocator>::LOW_BATTERY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionState_<ContainerAllocator>::EMERGENCY;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace ascend_msgs

#endif  // ASCEND_MSGS__MSG__DETAIL__MISSION_STATE__STRUCT_HPP_
