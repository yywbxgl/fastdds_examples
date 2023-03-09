// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fastdds_record_typesupport:idl/HelloWorld.idl
// generated code does not contain a copyright notice

#ifndef FASTDDS_RECORD_TYPESUPPORT__IDL__DETAIL__HELLO_WORLD__STRUCT_HPP_
#define FASTDDS_RECORD_TYPESUPPORT__IDL__DETAIL__HELLO_WORLD__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__fastdds_record_typesupport__idl__HelloWorld __attribute__((deprecated))
#else
# define DEPRECATED__fastdds_record_typesupport__idl__HelloWorld __declspec(deprecated)
#endif

namespace fastdds_record_typesupport
{

namespace idl
{

// message struct
template<class ContainerAllocator>
struct HelloWorld_
{
  using Type = HelloWorld_<ContainerAllocator>;

  explicit HelloWorld_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->index = 0ul;
      this->message = "";
    }
  }

  explicit HelloWorld_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->index = 0ul;
      this->message = "";
    }
  }

  // field types and members
  using _index_type =
    uint32_t;
  _index_type index;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__index(
    const uint32_t & _arg)
  {
    this->index = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fastdds_record_typesupport::idl::HelloWorld_<ContainerAllocator> *;
  using ConstRawPtr =
    const fastdds_record_typesupport::idl::HelloWorld_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fastdds_record_typesupport::idl::HelloWorld_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fastdds_record_typesupport::idl::HelloWorld_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fastdds_record_typesupport::idl::HelloWorld_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fastdds_record_typesupport::idl::HelloWorld_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fastdds_record_typesupport::idl::HelloWorld_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fastdds_record_typesupport::idl::HelloWorld_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fastdds_record_typesupport::idl::HelloWorld_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fastdds_record_typesupport::idl::HelloWorld_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fastdds_record_typesupport__idl__HelloWorld
    std::shared_ptr<fastdds_record_typesupport::idl::HelloWorld_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fastdds_record_typesupport__idl__HelloWorld
    std::shared_ptr<fastdds_record_typesupport::idl::HelloWorld_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HelloWorld_ & other) const
  {
    if (this->index != other.index) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const HelloWorld_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HelloWorld_

// alias to use template instance with default allocator
using HelloWorld =
  fastdds_record_typesupport::idl::HelloWorld_<std::allocator<void>>;

// constant definitions

}  // namespace idl

}  // namespace fastdds_record_typesupport

#endif  // FASTDDS_RECORD_TYPESUPPORT__IDL__DETAIL__HELLO_WORLD__STRUCT_HPP_
