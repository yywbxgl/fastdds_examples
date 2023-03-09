// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from fastdds_record_typesupport:idl/HelloWorld.idl
// generated code does not contain a copyright notice

#ifndef FASTDDS_RECORD_TYPESUPPORT__IDL__DETAIL__HELLO_WORLD__FUNCTIONS_H_
#define FASTDDS_RECORD_TYPESUPPORT__IDL__DETAIL__HELLO_WORLD__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "fastdds_record_typesupport/msg/rosidl_generator_c__visibility_control.h"

#include "fastdds_record_typesupport/idl/detail/hello_world__struct.h"

/// Initialize idl/HelloWorld message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * fastdds_record_typesupport__idl__HelloWorld
 * )) before or use
 * fastdds_record_typesupport__idl__HelloWorld__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_fastdds_record_typesupport
bool
fastdds_record_typesupport__idl__HelloWorld__init(fastdds_record_typesupport__idl__HelloWorld * msg);

/// Finalize idl/HelloWorld message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fastdds_record_typesupport
void
fastdds_record_typesupport__idl__HelloWorld__fini(fastdds_record_typesupport__idl__HelloWorld * msg);

/// Create idl/HelloWorld message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * fastdds_record_typesupport__idl__HelloWorld__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fastdds_record_typesupport
fastdds_record_typesupport__idl__HelloWorld *
fastdds_record_typesupport__idl__HelloWorld__create();

/// Destroy idl/HelloWorld message.
/**
 * It calls
 * fastdds_record_typesupport__idl__HelloWorld__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fastdds_record_typesupport
void
fastdds_record_typesupport__idl__HelloWorld__destroy(fastdds_record_typesupport__idl__HelloWorld * msg);


/// Initialize array of idl/HelloWorld messages.
/**
 * It allocates the memory for the number of elements and calls
 * fastdds_record_typesupport__idl__HelloWorld__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_fastdds_record_typesupport
bool
fastdds_record_typesupport__idl__HelloWorld__Sequence__init(fastdds_record_typesupport__idl__HelloWorld__Sequence * array, size_t size);

/// Finalize array of idl/HelloWorld messages.
/**
 * It calls
 * fastdds_record_typesupport__idl__HelloWorld__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fastdds_record_typesupport
void
fastdds_record_typesupport__idl__HelloWorld__Sequence__fini(fastdds_record_typesupport__idl__HelloWorld__Sequence * array);

/// Create array of idl/HelloWorld messages.
/**
 * It allocates the memory for the array and calls
 * fastdds_record_typesupport__idl__HelloWorld__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fastdds_record_typesupport
fastdds_record_typesupport__idl__HelloWorld__Sequence *
fastdds_record_typesupport__idl__HelloWorld__Sequence__create(size_t size);

/// Destroy array of idl/HelloWorld messages.
/**
 * It calls
 * fastdds_record_typesupport__idl__HelloWorld__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fastdds_record_typesupport
void
fastdds_record_typesupport__idl__HelloWorld__Sequence__destroy(fastdds_record_typesupport__idl__HelloWorld__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // FASTDDS_RECORD_TYPESUPPORT__IDL__DETAIL__HELLO_WORLD__FUNCTIONS_H_
