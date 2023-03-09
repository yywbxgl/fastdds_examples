// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fastdds_record_typesupport:idl/HelloWorld.idl
// generated code does not contain a copyright notice

#ifndef FASTDDS_RECORD_TYPESUPPORT__IDL__DETAIL__HELLO_WORLD__STRUCT_H_
#define FASTDDS_RECORD_TYPESUPPORT__IDL__DETAIL__HELLO_WORLD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

// Struct defined in idl/HelloWorld in the package fastdds_record_typesupport.
typedef struct fastdds_record_typesupport__idl__HelloWorld
{
  uint32_t index;
  rosidl_runtime_c__String message;
} fastdds_record_typesupport__idl__HelloWorld;

// Struct for a sequence of fastdds_record_typesupport__idl__HelloWorld.
typedef struct fastdds_record_typesupport__idl__HelloWorld__Sequence
{
  fastdds_record_typesupport__idl__HelloWorld * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fastdds_record_typesupport__idl__HelloWorld__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FASTDDS_RECORD_TYPESUPPORT__IDL__DETAIL__HELLO_WORLD__STRUCT_H_
