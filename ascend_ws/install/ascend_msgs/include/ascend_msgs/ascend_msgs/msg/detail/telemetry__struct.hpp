// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ascend_msgs:msg/Telemetry.idl
// generated code does not contain a copyright notice

#ifndef ASCEND_MSGS__MSG__DETAIL__TELEMETRY__STRUCT_HPP_
#define ASCEND_MSGS__MSG__DETAIL__TELEMETRY__STRUCT_HPP_

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
# define DEPRECATED__ascend_msgs__msg__Telemetry __attribute__((deprecated))
#else
# define DEPRECATED__ascend_msgs__msg__Telemetry __declspec(deprecated)
#endif

namespace ascend_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Telemetry_
{
  using Type = Telemetry_<ContainerAllocator>;

  explicit Telemetry_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pos_x = 0.0f;
      this->pos_y = 0.0f;
      this->pos_z = 0.0f;
      this->vel_x = 0.0f;
      this->vel_y = 0.0f;
      this->vel_z = 0.0f;
      this->roll = 0.0f;
      this->pitch = 0.0f;
      this->yaw = 0.0f;
      this->battery_percentage = 0.0f;
      this->battery_voltage = 0.0f;
      this->flight_mode = "";
      this->armed = false;
      this->sortie_number = 0l;
      this->targets_found = 0l;
    }
  }

  explicit Telemetry_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    flight_mode(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pos_x = 0.0f;
      this->pos_y = 0.0f;
      this->pos_z = 0.0f;
      this->vel_x = 0.0f;
      this->vel_y = 0.0f;
      this->vel_z = 0.0f;
      this->roll = 0.0f;
      this->pitch = 0.0f;
      this->yaw = 0.0f;
      this->battery_percentage = 0.0f;
      this->battery_voltage = 0.0f;
      this->flight_mode = "";
      this->armed = false;
      this->sortie_number = 0l;
      this->targets_found = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _pos_x_type =
    float;
  _pos_x_type pos_x;
  using _pos_y_type =
    float;
  _pos_y_type pos_y;
  using _pos_z_type =
    float;
  _pos_z_type pos_z;
  using _vel_x_type =
    float;
  _vel_x_type vel_x;
  using _vel_y_type =
    float;
  _vel_y_type vel_y;
  using _vel_z_type =
    float;
  _vel_z_type vel_z;
  using _roll_type =
    float;
  _roll_type roll;
  using _pitch_type =
    float;
  _pitch_type pitch;
  using _yaw_type =
    float;
  _yaw_type yaw;
  using _battery_percentage_type =
    float;
  _battery_percentage_type battery_percentage;
  using _battery_voltage_type =
    float;
  _battery_voltage_type battery_voltage;
  using _flight_mode_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _flight_mode_type flight_mode;
  using _armed_type =
    bool;
  _armed_type armed;
  using _sortie_number_type =
    int32_t;
  _sortie_number_type sortie_number;
  using _targets_found_type =
    int32_t;
  _targets_found_type targets_found;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__pos_x(
    const float & _arg)
  {
    this->pos_x = _arg;
    return *this;
  }
  Type & set__pos_y(
    const float & _arg)
  {
    this->pos_y = _arg;
    return *this;
  }
  Type & set__pos_z(
    const float & _arg)
  {
    this->pos_z = _arg;
    return *this;
  }
  Type & set__vel_x(
    const float & _arg)
  {
    this->vel_x = _arg;
    return *this;
  }
  Type & set__vel_y(
    const float & _arg)
  {
    this->vel_y = _arg;
    return *this;
  }
  Type & set__vel_z(
    const float & _arg)
  {
    this->vel_z = _arg;
    return *this;
  }
  Type & set__roll(
    const float & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__pitch(
    const float & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__battery_percentage(
    const float & _arg)
  {
    this->battery_percentage = _arg;
    return *this;
  }
  Type & set__battery_voltage(
    const float & _arg)
  {
    this->battery_voltage = _arg;
    return *this;
  }
  Type & set__flight_mode(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->flight_mode = _arg;
    return *this;
  }
  Type & set__armed(
    const bool & _arg)
  {
    this->armed = _arg;
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

  // constant declarations

  // pointer types
  using RawPtr =
    ascend_msgs::msg::Telemetry_<ContainerAllocator> *;
  using ConstRawPtr =
    const ascend_msgs::msg::Telemetry_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ascend_msgs::msg::Telemetry_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ascend_msgs::msg::Telemetry_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ascend_msgs::msg::Telemetry_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ascend_msgs::msg::Telemetry_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ascend_msgs::msg::Telemetry_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ascend_msgs::msg::Telemetry_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ascend_msgs::msg::Telemetry_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ascend_msgs::msg::Telemetry_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ascend_msgs__msg__Telemetry
    std::shared_ptr<ascend_msgs::msg::Telemetry_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ascend_msgs__msg__Telemetry
    std::shared_ptr<ascend_msgs::msg::Telemetry_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Telemetry_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->pos_x != other.pos_x) {
      return false;
    }
    if (this->pos_y != other.pos_y) {
      return false;
    }
    if (this->pos_z != other.pos_z) {
      return false;
    }
    if (this->vel_x != other.vel_x) {
      return false;
    }
    if (this->vel_y != other.vel_y) {
      return false;
    }
    if (this->vel_z != other.vel_z) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->battery_percentage != other.battery_percentage) {
      return false;
    }
    if (this->battery_voltage != other.battery_voltage) {
      return false;
    }
    if (this->flight_mode != other.flight_mode) {
      return false;
    }
    if (this->armed != other.armed) {
      return false;
    }
    if (this->sortie_number != other.sortie_number) {
      return false;
    }
    if (this->targets_found != other.targets_found) {
      return false;
    }
    return true;
  }
  bool operator!=(const Telemetry_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Telemetry_

// alias to use template instance with default allocator
using Telemetry =
  ascend_msgs::msg::Telemetry_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ascend_msgs

#endif  // ASCEND_MSGS__MSG__DETAIL__TELEMETRY__STRUCT_HPP_
