// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from fastdds_record_typesupport:idl/hello.idl
// generated code does not contain a copyright notice

#ifndef FASTDDS_RECORD_TYPESUPPORT__IDL__DETAIL__HELLO__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define FASTDDS_RECORD_TYPESUPPORT__IDL__DETAIL__HELLO__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "fastdds_record_typesupport/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "fastdds_record_typesupport/idl/detail/hello__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace fastdds_record_typesupport
{

namespace idl
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fastdds_record_typesupport
cdr_serialize(
  const fastdds_record_typesupport::idl::HelloWorld & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fastdds_record_typesupport
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  fastdds_record_typesupport::idl::HelloWorld & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fastdds_record_typesupport
get_serialized_size(
  const fastdds_record_typesupport::idl::HelloWorld & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fastdds_record_typesupport
max_serialized_size_HelloWorld(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace idl

}  // namespace fastdds_record_typesupport

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fastdds_record_typesupport
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, fastdds_record_typesupport, idl, HelloWorld)();

#ifdef __cplusplus
}
#endif

#endif  // FASTDDS_RECORD_TYPESUPPORT__IDL__DETAIL__HELLO__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
