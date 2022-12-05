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
    // m_sensor_id com.eprosima.idl.parser.typecode.PrimitiveTypeCode@101df177
    m_sensor_id = 0;
    // m_index com.eprosima.idl.parser.typecode.PrimitiveTypeCode@166fa74d
    m_index = 0;
    // m_sensor_data com.eprosima.idl.parser.typecode.StringTypeCode@40f08448
    m_sensor_data ="";

}

HelloMsg::~HelloMsg()
{



}

HelloMsg::HelloMsg(
        const HelloMsg& x)
{
    m_sensor_id = x.m_sensor_id;
    m_index = x.m_index;
    m_sensor_data = x.m_sensor_data;
}

HelloMsg::HelloMsg(
        HelloMsg&& x)
{
    m_sensor_id = x.m_sensor_id;
    m_index = x.m_index;
    m_sensor_data = std::move(x.m_sensor_data);
}

HelloMsg& HelloMsg::operator =(
        const HelloMsg& x)
{

    m_sensor_id = x.m_sensor_id;
    m_index = x.m_index;
    m_sensor_data = x.m_sensor_data;

    return *this;
}

HelloMsg& HelloMsg::operator =(
        HelloMsg&& x)
{

    m_sensor_id = x.m_sensor_id;
    m_index = x.m_index;
    m_sensor_data = std::move(x.m_sensor_data);

    return *this;
}

bool HelloMsg::operator ==(
        const HelloMsg& x) const
{

    return (m_sensor_id == x.m_sensor_id && m_index == x.m_index && m_sensor_data == x.m_sensor_data);
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


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 256 + 1;


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


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.sensor_data().size() + 1;


    return current_alignment - initial_alignment;
}

void HelloMsg::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_sensor_id;
    scdr << m_index;
    scdr << m_sensor_data;

}

void HelloMsg::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_sensor_id;
    dcdr >> m_index;
    dcdr >> m_sensor_data;
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
 * @brief This function copies the value in member sensor_data
 * @param _sensor_data New value to be copied in member sensor_data
 */
void HelloMsg::sensor_data(
        const std::string& _sensor_data)
{
    m_sensor_data = _sensor_data;
}

/*!
 * @brief This function moves the value in member sensor_data
 * @param _sensor_data New value to be moved in member sensor_data
 */
void HelloMsg::sensor_data(
        std::string&& _sensor_data)
{
    m_sensor_data = std::move(_sensor_data);
}

/*!
 * @brief This function returns a constant reference to member sensor_data
 * @return Constant reference to member sensor_data
 */
const std::string& HelloMsg::sensor_data() const
{
    return m_sensor_data;
}

/*!
 * @brief This function returns a reference to member sensor_data
 * @return Reference to member sensor_data
 */
std::string& HelloMsg::sensor_data()
{
    return m_sensor_data;
}

size_t HelloMsg::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;


     current_align += 2 + eprosima::fastcdr::Cdr::alignment(current_align, 2);

     



    return current_align;
}

bool HelloMsg::isKeyDefined()
{
    return true;
}

void HelloMsg::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
     scdr << m_sensor_id;
        
}
