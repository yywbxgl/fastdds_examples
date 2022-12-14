// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file hello.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace {
char dummy;
}  // namespace
#endif  // _WIN32

#include "hello.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

HelloMsg::HelloMsg()
{
    // m_sensor_id com.eprosima.idl.parser.typecode.PrimitiveTypeCode@365185bd
    m_sensor_id = 0;
    // m_index com.eprosima.idl.parser.typecode.PrimitiveTypeCode@18bf3d14
    m_index = 0;
    // m_time_stamp com.eprosima.idl.parser.typecode.PrimitiveTypeCode@4fb64261
    m_time_stamp = 0;
    // m_data com.eprosima.idl.parser.typecode.ArrayTypeCode@42607a4f
    memset(&m_data, 0, (5*1024*1024) * 1);

}

HelloMsg::~HelloMsg()
{




}

HelloMsg::HelloMsg(
        const HelloMsg& x)
{
    m_sensor_id = x.m_sensor_id;
    m_index = x.m_index;
    m_time_stamp = x.m_time_stamp;
    m_data = x.m_data;
}

HelloMsg::HelloMsg(
        HelloMsg&& x)
{
    m_sensor_id = x.m_sensor_id;
    m_index = x.m_index;
    m_time_stamp = x.m_time_stamp;
    m_data = std::move(x.m_data);
}

HelloMsg& HelloMsg::operator =(
        const HelloMsg& x)
{

    m_sensor_id = x.m_sensor_id;
    m_index = x.m_index;
    m_time_stamp = x.m_time_stamp;
    m_data = x.m_data;

    return *this;
}

HelloMsg& HelloMsg::operator =(
        HelloMsg&& x)
{

    m_sensor_id = x.m_sensor_id;
    m_index = x.m_index;
    m_time_stamp = x.m_time_stamp;
    m_data = std::move(x.m_data);

    return *this;
}

bool HelloMsg::operator ==(
        const HelloMsg& x) const
{

    return (m_sensor_id == x.m_sensor_id && m_index == x.m_index && m_time_stamp == x.m_time_stamp && m_data == x.m_data);
}

bool HelloMsg::operator !=(
        const HelloMsg& x) const
{
    return !(*this == x);
}

size_t HelloMsg::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += ((5*1024*1024) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);



    return current_alignment - initial_alignment;
}

size_t HelloMsg::getCdrSerializedSize(
        const HelloMsg& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    if ((5*1024*1024) > 0)
    {
        current_alignment += ((5*1024*1024) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);
    }


    return current_alignment - initial_alignment;
}

void HelloMsg::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_sensor_id;
    scdr << m_index;
    scdr << m_time_stamp;
    scdr << m_data;


}

void HelloMsg::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_sensor_id;
    dcdr >> m_index;
    dcdr >> m_time_stamp;
    dcdr >> m_data;

}

/*!
 * @brief This function sets a value in member sensor_id
 * @param _sensor_id New value for member sensor_id
 */
void HelloMsg::sensor_id(
        uint16_t _sensor_id)
{
    m_sensor_id = _sensor_id;
}

/*!
 * @brief This function returns the value of member sensor_id
 * @return Value of member sensor_id
 */
uint16_t HelloMsg::sensor_id() const
{
    return m_sensor_id;
}

/*!
 * @brief This function returns a reference to member sensor_id
 * @return Reference to member sensor_id
 */
uint16_t& HelloMsg::sensor_id()
{
    return m_sensor_id;
}

/*!
 * @brief This function sets a value in member index
 * @param _index New value for member index
 */
void HelloMsg::index(
        uint32_t _index)
{
    m_index = _index;
}

/*!
 * @brief This function returns the value of member index
 * @return Value of member index
 */
uint32_t HelloMsg::index() const
{
    return m_index;
}

/*!
 * @brief This function returns a reference to member index
 * @return Reference to member index
 */
uint32_t& HelloMsg::index()
{
    return m_index;
}

/*!
 * @brief This function sets a value in member time_stamp
 * @param _time_stamp New value for member time_stamp
 */
void HelloMsg::time_stamp(
        int64_t _time_stamp)
{
    m_time_stamp = _time_stamp;
}

/*!
 * @brief This function returns the value of member time_stamp
 * @return Value of member time_stamp
 */
int64_t HelloMsg::time_stamp() const
{
    return m_time_stamp;
}

/*!
 * @brief This function returns a reference to member time_stamp
 * @return Reference to member time_stamp
 */
int64_t& HelloMsg::time_stamp()
{
    return m_time_stamp;
}

/*!
 * @brief This function copies the value in member data
 * @param _data New value to be copied in member data
 */
void HelloMsg::data(
        const std::array<char, 5*1024*1024>& _data)
{
    m_data = _data;
}

/*!
 * @brief This function moves the value in member data
 * @param _data New value to be moved in member data
 */
void HelloMsg::data(
        std::array<char, 5*1024*1024>&& _data)
{
    m_data = std::move(_data);
}

/*!
 * @brief This function returns a constant reference to member data
 * @return Constant reference to member data
 */
const std::array<char, 5*1024*1024>& HelloMsg::data() const
{
    return m_data;
}

/*!
 * @brief This function returns a reference to member data
 * @return Reference to member data
 */
std::array<char, 5*1024*1024>& HelloMsg::data()
{
    return m_data;
}

size_t HelloMsg::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;







    return current_align;
}

bool HelloMsg::isKeyDefined()
{
    return false;
}

void HelloMsg::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
        
}
