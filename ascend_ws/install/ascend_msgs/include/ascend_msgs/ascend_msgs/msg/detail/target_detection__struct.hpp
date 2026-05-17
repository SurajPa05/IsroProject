// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ascend_msgs:msg/TargetDetection.idl
// generated code does not contain a copyright notice

#ifndef ASCEND_MSGS__MSG__DETAIL__TARGET_DETECTION__STRUCT_HPP_
#define ASCEND_MSGS__MSG__DETAIL__TARGET_DETECTION__STRUCT_HPP_

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
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ascend_msgs__msg__TargetDetection __attribute__((deprecated))
#else
# define DEPRECATED__ascend_msgs__msg__TargetDetection __declspec(deprecated)
#endif

namespace ascend_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TargetDetection_
{
  using Type = TargetDetection_<ContainerAllocator>;

  explicit TargetDetection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->confidence = 0.0f;
      this->feature_type = "";
      this->image_path = "";
      this->validated = false;
    }
  }

  explicit TargetDetection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    position(_alloc, _init),
    feature_type(_alloc),
    image_path(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->confidence = 0.0f;
      this->feature_type = "";
      this->image_path = "";
      this->validated = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_type position;
  using _confidence_type =
    float;
  _confidence_type confidence;
  using _feature_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _feature_type_type feature_type;
  using _image_path_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _image_path_type image_path;
  using _validated_type =
    bool;
  _validated_type validated;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__confidence(
    const float & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__feature_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->feature_type = _arg;
    return *this;
  }
  Type & set__image_path(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->image_path = _arg;
    return *this;
  }
  Type & set__validated(
    const bool & _arg)
  {
    this->validated = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ascend_msgs::msg::TargetDetection_<ContainerAllocator> *;
  using ConstRawPtr =
    const ascend_msgs::msg::TargetDetection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ascend_msgs::msg::TargetDetection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ascend_msgs::msg::TargetDetection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ascend_msgs::msg::TargetDetection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ascend_msgs::msg::TargetDetection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ascend_msgs::msg::TargetDetection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ascend_msgs::msg::TargetDetection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ascend_msgs::msg::TargetDetection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ascend_msgs::msg::TargetDetection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ascend_msgs__msg__TargetDetection
    std::shared_ptr<ascend_msgs::msg::TargetDetection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ascend_msgs__msg__TargetDetection
    std::shared_ptr<ascend_msgs::msg::TargetDetection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TargetDetection_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->feature_type != other.feature_type) {
      return false;
    }
    if (this->image_path != other.image_path) {
      return false;
    }
    if (this->validated != other.validated) {
      return false;
    }
    return true;
  }
  bool operator!=(const TargetDetection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TargetDetection_

// alias to use template instance with default allocator
using TargetDetection =
  ascend_msgs::msg::TargetDetection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ascend_msgs

#endif  // ASCEND_MSGS__MSG__DETAIL__TARGET_DETECTION__STRUCT_HPP_
