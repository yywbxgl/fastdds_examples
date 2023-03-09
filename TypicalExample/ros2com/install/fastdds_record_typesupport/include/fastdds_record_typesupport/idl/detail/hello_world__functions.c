// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fastdds_record_typesupport:idl/HelloWorld.idl
// generated code does not contain a copyright notice
#include "fastdds_record_typesupport/idl/detail/hello_world__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
fastdds_record_typesupport__idl__HelloWorld__init(fastdds_record_typesupport__idl__HelloWorld * msg)
{
  if (!msg) {
    return false;
  }
  // index
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    fastdds_record_typesupport__idl__HelloWorld__fini(msg);
    return false;
  }
  return true;
}

void
fastdds_record_typesupport__idl__HelloWorld__fini(fastdds_record_typesupport__idl__HelloWorld * msg)
{
  if (!msg) {
    return;
  }
  // index
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

fastdds_record_typesupport__idl__HelloWorld *
fastdds_record_typesupport__idl__HelloWorld__create()
{
  fastdds_record_typesupport__idl__HelloWorld * msg = (fastdds_record_typesupport__idl__HelloWorld *)malloc(sizeof(fastdds_record_typesupport__idl__HelloWorld));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fastdds_record_typesupport__idl__HelloWorld));
  bool success = fastdds_record_typesupport__idl__HelloWorld__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
fastdds_record_typesupport__idl__HelloWorld__destroy(fastdds_record_typesupport__idl__HelloWorld * msg)
{
  if (msg) {
    fastdds_record_typesupport__idl__HelloWorld__fini(msg);
  }
  free(msg);
}


bool
fastdds_record_typesupport__idl__HelloWorld__Sequence__init(fastdds_record_typesupport__idl__HelloWorld__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  fastdds_record_typesupport__idl__HelloWorld * data = NULL;
  if (size) {
    data = (fastdds_record_typesupport__idl__HelloWorld *)calloc(size, sizeof(fastdds_record_typesupport__idl__HelloWorld));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fastdds_record_typesupport__idl__HelloWorld__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fastdds_record_typesupport__idl__HelloWorld__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
fastdds_record_typesupport__idl__HelloWorld__Sequence__fini(fastdds_record_typesupport__idl__HelloWorld__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      fastdds_record_typesupport__idl__HelloWorld__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

fastdds_record_typesupport__idl__HelloWorld__Sequence *
fastdds_record_typesupport__idl__HelloWorld__Sequence__create(size_t size)
{
  fastdds_record_typesupport__idl__HelloWorld__Sequence * array = (fastdds_record_typesupport__idl__HelloWorld__Sequence *)malloc(sizeof(fastdds_record_typesupport__idl__HelloWorld__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = fastdds_record_typesupport__idl__HelloWorld__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
fastdds_record_typesupport__idl__HelloWorld__Sequence__destroy(fastdds_record_typesupport__idl__HelloWorld__Sequence * array)
{
  if (array) {
    fastdds_record_typesupport__idl__HelloWorld__Sequence__fini(array);
  }
  free(array);
}
