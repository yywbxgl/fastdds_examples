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
    // m_sensor_id com.eprosima.idl.parser.typecode.PrimitiveTypeCode@3ecd23d9
    m_sensor_id = 0;
    // m_index com.eprosima.idl.parser.typecode.PrimitiveTypeCode@569cfc36
    m_index = 0;
    // m_temperature com.eprosima.idl.parser.typecode.PrimitiveTypeCode@43bd930a
    m_temperature = 0;

}

HelloMsg::~HelloMsg()
{



}

HelloMsg::HelloMsg(
        const HelloMsg& x)
{
    m_sensor_id = x.m_sensor_id;
    m_index = x.m_index;
    m_temperature = x.m_temperature;
}

HelloMsg::HelloMsg(
        HelloMsg&& x) noexcept 
{
    m_sensor_id = x.m_sensor_id;
    m_index = x.m_index;
    m_temperature = x.m_temperature;
}

HelloMsg& HelloMsg::operator =(
        const HelloMsg& x)
{

    m_sensor_id = x.m_sensor_id;
    m_index = x.m_index;
    m_temperature = x.m_temperature;

    return *this;
}

HelloMsg& HelloMsg::operator =(
        HelloMsg&& x) noexcept
{

    m_sensor_id = x.m_sensor_id;
    m_index = x.m_index;
    m_temperature = x.m_temperature;

    return *this;
}

bool HelloMsg::operator ==(
        const HelloMsg& x) const
{

    return (m_sensor_id == x.m_sensor_id && m_index == x.m_index && m_temperature == x.m_temperature);
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


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



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


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    return current_alignment - initial_alignment;
}

void HelloMsg::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_sensor_id;
    scdr << m_index;
    scdr << m_temperature;

}

void HelloMsg::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_sensor_id;
    dcdr >> m_index;
    dcdr >> m_temperature;
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
 * @brief This function sets a value in member temperature
 * @param _temperature New value for member temperature
 */
void HelloMsg::temperature(
        uint32_t _temperature)
{
    m_temperature = _temperature;
}

/*!
 * @brief This function returns the value of member temperature
 * @return Value of member temperature
 */
uint32_t HelloMsg::temperature() const
{
    return m_temperature;
}

/*!
 * @brief This function returns a reference to member temperature
 * @return Reference to member temperature
 */
uint32_t& HelloMsg::temperature()
{
    return m_temperature;
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
