// generated from rosidl_generator_c/resource/rosidl_generator_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef FASTDDS_RECORD_TYPESUPPORT__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_
#define FASTDDS_RECORD_TYPESUPPORT__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_GENERATOR_C_EXPORT_fastdds_record_typesupport __attribute__ ((dllexport))
    #define ROSIDL_GENERATOR_C_IMPORT_fastdds_record_typesupport __attribute__ ((dllimport))
  #else
    #define ROSIDL_GENERATOR_C_EXPORT_fastdds_record_typesupport __declspec(dllexport)
    #define ROSIDL_GENERATOR_C_IMPORT_fastdds_record_typesupport __declspec(dllimport)
  #endif
  #ifdef ROSIDL_GENERATOR_C_BUILDING_DLL_fastdds_record_typesupport
    #define ROSIDL_GENERATOR_C_PUBLIC_fastdds_record_typesupport ROSIDL_GENERATOR_C_EXPORT_fastdds_record_typesupport
  #else
    #define ROSIDL_GENERATOR_C_PUBLIC_fastdds_record_typesupport ROSIDL_GENERATOR_C_IMPORT_fastdds_record_typesupport
  #endif
#else
  #define ROSIDL_GENERATOR_C_EXPORT_fastdds_record_typesupport __attribute__ ((visibility("default")))
  #define ROSIDL_GENERATOR_C_IMPORT_fastdds_record_typesupport
  #if __GNUC__ >= 4
    #define ROSIDL_GENERATOR_C_PUBLIC_fastdds_record_typesupport __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_GENERATOR_C_PUBLIC_fastdds_record_typesupport
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // FASTDDS_RECORD_TYPESUPPORT__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_
