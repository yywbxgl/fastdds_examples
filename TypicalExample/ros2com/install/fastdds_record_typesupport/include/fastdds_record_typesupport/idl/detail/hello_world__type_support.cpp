// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from fastdds_record_typesupport:idl/HelloWorld.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "fastdds_record_typesupport/idl/detail/hello_world__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace fastdds_record_typesupport
{

namespace idl
{

namespace rosidl_typesupport_introspection_cpp
{

void HelloWorld_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) fastdds_record_typesupport::idl::HelloWorld(_init);
}

void HelloWorld_fini_function(void * message_memory)
{
  auto typed_message = static_cast<fastdds_record_typesupport::idl::HelloWorld *>(message_memory);
  typed_message->~HelloWorld();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember HelloWorld_message_member_array[2] = {
  {
    "index",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fastdds_record_typesupport::idl::HelloWorld, index),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fastdds_record_typesupport::idl::HelloWorld, message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers HelloWorld_message_members = {
  "fastdds_record_typesupport::idl",  // message namespace
  "HelloWorld",  // message name
  2,  // number of fields
  sizeof(fastdds_record_typesupport::idl::HelloWorld),
  HelloWorld_message_member_array,  // message members
  HelloWorld_init_function,  // function to initialize message memory (memory has to be allocated)
  HelloWorld_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t HelloWorld_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &HelloWorld_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace idl

}  // namespace fastdds_record_typesupport


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<fastdds_record_typesupport::idl::HelloWorld>()
{
  return &::fastdds_record_typesupport::idl::rosidl_typesupport_introspection_cpp::HelloWorld_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, fastdds_record_typesupport, idl, HelloWorld)() {
  return &::fastdds_record_typesupport::idl::rosidl_typesupport_introspection_cpp::HelloWorld_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
