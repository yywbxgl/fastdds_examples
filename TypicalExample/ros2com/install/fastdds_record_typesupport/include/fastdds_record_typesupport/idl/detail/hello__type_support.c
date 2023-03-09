// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from fastdds_record_typesupport:idl/hello.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "fastdds_record_typesupport/idl/detail/hello__rosidl_typesupport_introspection_c.h"
#include "fastdds_record_typesupport/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "fastdds_record_typesupport/idl/detail/hello__functions.h"
#include "fastdds_record_typesupport/idl/detail/hello__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void HelloWorld__rosidl_typesupport_introspection_c__HelloWorld_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fastdds_record_typesupport__idl__HelloWorld__init(message_memory);
}

void HelloWorld__rosidl_typesupport_introspection_c__HelloWorld_fini_function(void * message_memory)
{
  fastdds_record_typesupport__idl__HelloWorld__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember HelloWorld__rosidl_typesupport_introspection_c__HelloWorld_message_member_array[2] = {
  {
    "index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fastdds_record_typesupport__idl__HelloWorld, index),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fastdds_record_typesupport__idl__HelloWorld, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers HelloWorld__rosidl_typesupport_introspection_c__HelloWorld_message_members = {
  "fastdds_record_typesupport__idl",  // message namespace
  "HelloWorld",  // message name
  2,  // number of fields
  sizeof(fastdds_record_typesupport__idl__HelloWorld),
  HelloWorld__rosidl_typesupport_introspection_c__HelloWorld_message_member_array,  // message members
  HelloWorld__rosidl_typesupport_introspection_c__HelloWorld_init_function,  // function to initialize message memory (memory has to be allocated)
  HelloWorld__rosidl_typesupport_introspection_c__HelloWorld_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t HelloWorld__rosidl_typesupport_introspection_c__HelloWorld_message_type_support_handle = {
  0,
  &HelloWorld__rosidl_typesupport_introspection_c__HelloWorld_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fastdds_record_typesupport
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fastdds_record_typesupport, idl, HelloWorld)() {
  if (!HelloWorld__rosidl_typesupport_introspection_c__HelloWorld_message_type_support_handle.typesupport_identifier) {
    HelloWorld__rosidl_typesupport_introspection_c__HelloWorld_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &HelloWorld__rosidl_typesupport_introspection_c__HelloWorld_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
