// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fastdds_record_typesupport:idl/hello.idl
// generated code does not contain a copyright notice

#ifndef FASTDDS_RECORD_TYPESUPPORT__IDL__DETAIL__HELLO__BUILDER_HPP_
#define FASTDDS_RECORD_TYPESUPPORT__IDL__DETAIL__HELLO__BUILDER_HPP_

#include "fastdds_record_typesupport/idl/detail/hello__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace fastdds_record_typesupport
{

namespace idl
{

namespace builder
{

class Init_HelloWorld_message
{
public:
  explicit Init_HelloWorld_message(::fastdds_record_typesupport::idl::HelloWorld & msg)
  : msg_(msg)
  {}
  ::fastdds_record_typesupport::idl::HelloWorld message(::fastdds_record_typesupport::idl::HelloWorld::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fastdds_record_typesupport::idl::HelloWorld msg_;
};

class Init_HelloWorld_index
{
public:
  Init_HelloWorld_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HelloWorld_message index(::fastdds_record_typesupport::idl::HelloWorld::_index_type arg)
  {
    msg_.index = std::move(arg);
    return Init_HelloWorld_message(msg_);
  }

private:
  ::fastdds_record_typesupport::idl::HelloWorld msg_;
};

}  // namespace builder

}  // namespace idl

template<typename MessageType>
auto build();

template<>
inline
auto build<::fastdds_record_typesupport::idl::HelloWorld>()
{
  return fastdds_record_typesupport::idl::builder::Init_HelloWorld_index();
}

}  // namespace fastdds_record_typesupport

#endif  // FASTDDS_RECORD_TYPESUPPORT__IDL__DETAIL__HELLO__BUILDER_HPP_
