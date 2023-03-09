// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fastdds_record_typesupport:idl/hello.idl
// generated code does not contain a copyright notice

#ifndef FASTDDS_RECORD_TYPESUPPORT__IDL__DETAIL__HELLO__TRAITS_HPP_
#define FASTDDS_RECORD_TYPESUPPORT__IDL__DETAIL__HELLO__TRAITS_HPP_

#include "fastdds_record_typesupport/idl/detail/hello__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const fastdds_record_typesupport::idl::HelloWorld & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "index: ";
    value_to_yaml(msg.index, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const fastdds_record_typesupport::idl::HelloWorld & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<fastdds_record_typesupport::idl::HelloWorld>()
{
  return "fastdds_record_typesupport::idl::HelloWorld";
}

template<>
inline const char * name<fastdds_record_typesupport::idl::HelloWorld>()
{
  return "fastdds_record_typesupport/idl/HelloWorld";
}

template<>
struct has_fixed_size<fastdds_record_typesupport::idl::HelloWorld>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<fastdds_record_typesupport::idl::HelloWorld>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<fastdds_record_typesupport::idl::HelloWorld>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FASTDDS_RECORD_TYPESUPPORT__IDL__DETAIL__HELLO__TRAITS_HPP_
