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
 * @file ChassisCommand.cpp
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

#include "ChassisCommand.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

control_msgs::msg::ChassisCommand::ChassisCommand()
{
    // m_ads_function com.eprosima.idl.parser.typecode.PrimitiveTypeCode@cb0ed20
    m_ads_function = 0;
    // m_steer_angle_cmd com.eprosima.idl.parser.typecode.PrimitiveTypeCode@8e24743
    m_steer_angle_cmd = 0.0;
    // m_steer_wheel_torque_cmd com.eprosima.idl.parser.typecode.PrimitiveTypeCode@4e718207
    m_steer_wheel_torque_cmd = 0.0;
    // m_steer_vibration_cmd com.eprosima.idl.parser.typecode.PrimitiveTypeCode@1d371b2d
    m_steer_vibration_cmd = 0;
    // m_long_acceleration_cmd com.eprosima.idl.parser.typecode.PrimitiveTypeCode@543c6f6d
    m_long_acceleration_cmd = 0.0;
    // m_long_accelerationjerk_max com.eprosima.idl.parser.typecode.PrimitiveTypeCode@13eb8acf
    m_long_accelerationjerk_max = 0.0;
    // m_long_accelerationjerk_min com.eprosima.idl.parser.typecode.PrimitiveTypeCode@51c8530f
    m_long_accelerationjerk_min = 0.0;
    // m_gear_cmd com.eprosima.idl.parser.typecode.PrimitiveTypeCode@7403c468
    m_gear_cmd = 0;
    // m_aeb_acceleration_enable com.eprosima.idl.parser.typecode.PrimitiveTypeCode@43738a82
    m_aeb_acceleration_enable = false;
    // m_brake_pedal_cmd com.eprosima.idl.parser.typecode.PrimitiveTypeCode@c81cdd1
    m_brake_pedal_cmd = 0;
    // m_aeb_acceleration_cmd com.eprosima.idl.parser.typecode.PrimitiveTypeCode@1fc2b765
    m_aeb_acceleration_cmd = 0.0;
    // m_brake_pedal_cmd_enable com.eprosima.idl.parser.typecode.PrimitiveTypeCode@75881071
    m_brake_pedal_cmd_enable = false;
    // m_accelration_pedal_cmd com.eprosima.idl.parser.typecode.PrimitiveTypeCode@2a70a3d8
    m_accelration_pedal_cmd = 0;
    // m_accelration_pedal_cmd_enble com.eprosima.idl.parser.typecode.PrimitiveTypeCode@289d1c02
    m_accelration_pedal_cmd_enble = false;

}

control_msgs::msg::ChassisCommand::~ChassisCommand()
{














}

control_msgs::msg::ChassisCommand::ChassisCommand(
        const ChassisCommand& x)
{
    m_ads_function = x.m_ads_function;
    m_steer_angle_cmd = x.m_steer_angle_cmd;
    m_steer_wheel_torque_cmd = x.m_steer_wheel_torque_cmd;
    m_steer_vibration_cmd = x.m_steer_vibration_cmd;
    m_long_acceleration_cmd = x.m_long_acceleration_cmd;
    m_long_accelerationjerk_max = x.m_long_accelerationjerk_max;
    m_long_accelerationjerk_min = x.m_long_accelerationjerk_min;
    m_gear_cmd = x.m_gear_cmd;
    m_aeb_acceleration_enable = x.m_aeb_acceleration_enable;
    m_brake_pedal_cmd = x.m_brake_pedal_cmd;
    m_aeb_acceleration_cmd = x.m_aeb_acceleration_cmd;
    m_brake_pedal_cmd_enable = x.m_brake_pedal_cmd_enable;
    m_accelration_pedal_cmd = x.m_accelration_pedal_cmd;
    m_accelration_pedal_cmd_enble = x.m_accelration_pedal_cmd_enble;
}

control_msgs::msg::ChassisCommand::ChassisCommand(
        ChassisCommand&& x) noexcept 
{
    m_ads_function = x.m_ads_function;
    m_steer_angle_cmd = x.m_steer_angle_cmd;
    m_steer_wheel_torque_cmd = x.m_steer_wheel_torque_cmd;
    m_steer_vibration_cmd = x.m_steer_vibration_cmd;
    m_long_acceleration_cmd = x.m_long_acceleration_cmd;
    m_long_accelerationjerk_max = x.m_long_accelerationjerk_max;
    m_long_accelerationjerk_min = x.m_long_accelerationjerk_min;
    m_gear_cmd = x.m_gear_cmd;
    m_aeb_acceleration_enable = x.m_aeb_acceleration_enable;
    m_brake_pedal_cmd = x.m_brake_pedal_cmd;
    m_aeb_acceleration_cmd = x.m_aeb_acceleration_cmd;
    m_brake_pedal_cmd_enable = x.m_brake_pedal_cmd_enable;
    m_accelration_pedal_cmd = x.m_accelration_pedal_cmd;
    m_accelration_pedal_cmd_enble = x.m_accelration_pedal_cmd_enble;
}

control_msgs::msg::ChassisCommand& control_msgs::msg::ChassisCommand::operator =(
        const ChassisCommand& x)
{

    m_ads_function = x.m_ads_function;
    m_steer_angle_cmd = x.m_steer_angle_cmd;
    m_steer_wheel_torque_cmd = x.m_steer_wheel_torque_cmd;
    m_steer_vibration_cmd = x.m_steer_vibration_cmd;
    m_long_acceleration_cmd = x.m_long_acceleration_cmd;
    m_long_accelerationjerk_max = x.m_long_accelerationjerk_max;
    m_long_accelerationjerk_min = x.m_long_accelerationjerk_min;
    m_gear_cmd = x.m_gear_cmd;
    m_aeb_acceleration_enable = x.m_aeb_acceleration_enable;
    m_brake_pedal_cmd = x.m_brake_pedal_cmd;
    m_aeb_acceleration_cmd = x.m_aeb_acceleration_cmd;
    m_brake_pedal_cmd_enable = x.m_brake_pedal_cmd_enable;
    m_accelration_pedal_cmd = x.m_accelration_pedal_cmd;
    m_accelration_pedal_cmd_enble = x.m_accelration_pedal_cmd_enble;

    return *this;
}

control_msgs::msg::ChassisCommand& control_msgs::msg::ChassisCommand::operator =(
        ChassisCommand&& x) noexcept
{

    m_ads_function = x.m_ads_function;
    m_steer_angle_cmd = x.m_steer_angle_cmd;
    m_steer_wheel_torque_cmd = x.m_steer_wheel_torque_cmd;
    m_steer_vibration_cmd = x.m_steer_vibration_cmd;
    m_long_acceleration_cmd = x.m_long_acceleration_cmd;
    m_long_accelerationjerk_max = x.m_long_accelerationjerk_max;
    m_long_accelerationjerk_min = x.m_long_accelerationjerk_min;
    m_gear_cmd = x.m_gear_cmd;
    m_aeb_acceleration_enable = x.m_aeb_acceleration_enable;
    m_brake_pedal_cmd = x.m_brake_pedal_cmd;
    m_aeb_acceleration_cmd = x.m_aeb_acceleration_cmd;
    m_brake_pedal_cmd_enable = x.m_brake_pedal_cmd_enable;
    m_accelration_pedal_cmd = x.m_accelration_pedal_cmd;
    m_accelration_pedal_cmd_enble = x.m_accelration_pedal_cmd_enble;

    return *this;
}

bool control_msgs::msg::ChassisCommand::operator ==(
        const ChassisCommand& x) const
{

    return (m_ads_function == x.m_ads_function && m_steer_angle_cmd == x.m_steer_angle_cmd && m_steer_wheel_torque_cmd == x.m_steer_wheel_torque_cmd && m_steer_vibration_cmd == x.m_steer_vibration_cmd && m_long_acceleration_cmd == x.m_long_acceleration_cmd && m_long_accelerationjerk_max == x.m_long_accelerationjerk_max && m_long_accelerationjerk_min == x.m_long_accelerationjerk_min && m_gear_cmd == x.m_gear_cmd && m_aeb_acceleration_enable == x.m_aeb_acceleration_enable && m_brake_pedal_cmd == x.m_brake_pedal_cmd && m_aeb_acceleration_cmd == x.m_aeb_acceleration_cmd && m_brake_pedal_cmd_enable == x.m_brake_pedal_cmd_enable && m_accelration_pedal_cmd == x.m_accelration_pedal_cmd && m_accelration_pedal_cmd_enble == x.m_accelration_pedal_cmd_enble);
}

bool control_msgs::msg::ChassisCommand::operator !=(
        const ChassisCommand& x) const
{
    return !(*this == x);
}

size_t control_msgs::msg::ChassisCommand::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);



    return current_alignment - initial_alignment;
}

size_t control_msgs::msg::ChassisCommand::getCdrSerializedSize(
        const control_msgs::msg::ChassisCommand& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);



    return current_alignment - initial_alignment;
}

void control_msgs::msg::ChassisCommand::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_ads_function;
    scdr << m_steer_angle_cmd;
    scdr << m_steer_wheel_torque_cmd;
    scdr << m_steer_vibration_cmd;
    scdr << m_long_acceleration_cmd;
    scdr << m_long_accelerationjerk_max;
    scdr << m_long_accelerationjerk_min;
    scdr << m_gear_cmd;
    scdr << m_aeb_acceleration_enable;
    scdr << m_brake_pedal_cmd;
    scdr << m_aeb_acceleration_cmd;
    scdr << m_brake_pedal_cmd_enable;
    scdr << m_accelration_pedal_cmd;
    scdr << m_accelration_pedal_cmd_enble;

}

void control_msgs::msg::ChassisCommand::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_ads_function;
    dcdr >> m_steer_angle_cmd;
    dcdr >> m_steer_wheel_torque_cmd;
    dcdr >> m_steer_vibration_cmd;
    dcdr >> m_long_acceleration_cmd;
    dcdr >> m_long_accelerationjerk_max;
    dcdr >> m_long_accelerationjerk_min;
    dcdr >> m_gear_cmd;
    dcdr >> m_aeb_acceleration_enable;
    dcdr >> m_brake_pedal_cmd;
    dcdr >> m_aeb_acceleration_cmd;
    dcdr >> m_brake_pedal_cmd_enable;
    dcdr >> m_accelration_pedal_cmd;
    dcdr >> m_accelration_pedal_cmd_enble;
}

/*!
 * @brief This function sets a value in member ads_function
 * @param _ads_function New value for member ads_function
 */
void control_msgs::msg::ChassisCommand::ads_function(
        uint32_t _ads_function)
{
    m_ads_function = _ads_function;
}

/*!
 * @brief This function returns the value of member ads_function
 * @return Value of member ads_function
 */
uint32_t control_msgs::msg::ChassisCommand::ads_function() const
{
    return m_ads_function;
}

/*!
 * @brief This function returns a reference to member ads_function
 * @return Reference to member ads_function
 */
uint32_t& control_msgs::msg::ChassisCommand::ads_function()
{
    return m_ads_function;
}

/*!
 * @brief This function sets a value in member steer_angle_cmd
 * @param _steer_angle_cmd New value for member steer_angle_cmd
 */
void control_msgs::msg::ChassisCommand::steer_angle_cmd(
        float _steer_angle_cmd)
{
    m_steer_angle_cmd = _steer_angle_cmd;
}

/*!
 * @brief This function returns the value of member steer_angle_cmd
 * @return Value of member steer_angle_cmd
 */
float control_msgs::msg::ChassisCommand::steer_angle_cmd() const
{
    return m_steer_angle_cmd;
}

/*!
 * @brief This function returns a reference to member steer_angle_cmd
 * @return Reference to member steer_angle_cmd
 */
float& control_msgs::msg::ChassisCommand::steer_angle_cmd()
{
    return m_steer_angle_cmd;
}

/*!
 * @brief This function sets a value in member steer_wheel_torque_cmd
 * @param _steer_wheel_torque_cmd New value for member steer_wheel_torque_cmd
 */
void control_msgs::msg::ChassisCommand::steer_wheel_torque_cmd(
        float _steer_wheel_torque_cmd)
{
    m_steer_wheel_torque_cmd = _steer_wheel_torque_cmd;
}

/*!
 * @brief This function returns the value of member steer_wheel_torque_cmd
 * @return Value of member steer_wheel_torque_cmd
 */
float control_msgs::msg::ChassisCommand::steer_wheel_torque_cmd() const
{
    return m_steer_wheel_torque_cmd;
}

/*!
 * @brief This function returns a reference to member steer_wheel_torque_cmd
 * @return Reference to member steer_wheel_torque_cmd
 */
float& control_msgs::msg::ChassisCommand::steer_wheel_torque_cmd()
{
    return m_steer_wheel_torque_cmd;
}

/*!
 * @brief This function sets a value in member steer_vibration_cmd
 * @param _steer_vibration_cmd New value for member steer_vibration_cmd
 */
void control_msgs::msg::ChassisCommand::steer_vibration_cmd(
        int8_t _steer_vibration_cmd)
{
    m_steer_vibration_cmd = _steer_vibration_cmd;
}

/*!
 * @brief This function returns the value of member steer_vibration_cmd
 * @return Value of member steer_vibration_cmd
 */
int8_t control_msgs::msg::ChassisCommand::steer_vibration_cmd() const
{
    return m_steer_vibration_cmd;
}

/*!
 * @brief This function returns a reference to member steer_vibration_cmd
 * @return Reference to member steer_vibration_cmd
 */
int8_t& control_msgs::msg::ChassisCommand::steer_vibration_cmd()
{
    return m_steer_vibration_cmd;
}

/*!
 * @brief This function sets a value in member long_acceleration_cmd
 * @param _long_acceleration_cmd New value for member long_acceleration_cmd
 */
void control_msgs::msg::ChassisCommand::long_acceleration_cmd(
        float _long_acceleration_cmd)
{
    m_long_acceleration_cmd = _long_acceleration_cmd;
}

/*!
 * @brief This function returns the value of member long_acceleration_cmd
 * @return Value of member long_acceleration_cmd
 */
float control_msgs::msg::ChassisCommand::long_acceleration_cmd() const
{
    return m_long_acceleration_cmd;
}

/*!
 * @brief This function returns a reference to member long_acceleration_cmd
 * @return Reference to member long_acceleration_cmd
 */
float& control_msgs::msg::ChassisCommand::long_acceleration_cmd()
{
    return m_long_acceleration_cmd;
}

/*!
 * @brief This function sets a value in member long_accelerationjerk_max
 * @param _long_accelerationjerk_max New value for member long_accelerationjerk_max
 */
void control_msgs::msg::ChassisCommand::long_accelerationjerk_max(
        float _long_accelerationjerk_max)
{
    m_long_accelerationjerk_max = _long_accelerationjerk_max;
}

/*!
 * @brief This function returns the value of member long_accelerationjerk_max
 * @return Value of member long_accelerationjerk_max
 */
float control_msgs::msg::ChassisCommand::long_accelerationjerk_max() const
{
    return m_long_accelerationjerk_max;
}

/*!
 * @brief This function returns a reference to member long_accelerationjerk_max
 * @return Reference to member long_accelerationjerk_max
 */
float& control_msgs::msg::ChassisCommand::long_accelerationjerk_max()
{
    return m_long_accelerationjerk_max;
}

/*!
 * @brief This function sets a value in member long_accelerationjerk_min
 * @param _long_accelerationjerk_min New value for member long_accelerationjerk_min
 */
void control_msgs::msg::ChassisCommand::long_accelerationjerk_min(
        float _long_accelerationjerk_min)
{
    m_long_accelerationjerk_min = _long_accelerationjerk_min;
}

/*!
 * @brief This function returns the value of member long_accelerationjerk_min
 * @return Value of member long_accelerationjerk_min
 */
float control_msgs::msg::ChassisCommand::long_accelerationjerk_min() const
{
    return m_long_accelerationjerk_min;
}

/*!
 * @brief This function returns a reference to member long_accelerationjerk_min
 * @return Reference to member long_accelerationjerk_min
 */
float& control_msgs::msg::ChassisCommand::long_accelerationjerk_min()
{
    return m_long_accelerationjerk_min;
}

/*!
 * @brief This function sets a value in member gear_cmd
 * @param _gear_cmd New value for member gear_cmd
 */
void control_msgs::msg::ChassisCommand::gear_cmd(
        int8_t _gear_cmd)
{
    m_gear_cmd = _gear_cmd;
}

/*!
 * @brief This function returns the value of member gear_cmd
 * @return Value of member gear_cmd
 */
int8_t control_msgs::msg::ChassisCommand::gear_cmd() const
{
    return m_gear_cmd;
}

/*!
 * @brief This function returns a reference to member gear_cmd
 * @return Reference to member gear_cmd
 */
int8_t& control_msgs::msg::ChassisCommand::gear_cmd()
{
    return m_gear_cmd;
}

/*!
 * @brief This function sets a value in member aeb_acceleration_enable
 * @param _aeb_acceleration_enable New value for member aeb_acceleration_enable
 */
void control_msgs::msg::ChassisCommand::aeb_acceleration_enable(
        bool _aeb_acceleration_enable)
{
    m_aeb_acceleration_enable = _aeb_acceleration_enable;
}

/*!
 * @brief This function returns the value of member aeb_acceleration_enable
 * @return Value of member aeb_acceleration_enable
 */
bool control_msgs::msg::ChassisCommand::aeb_acceleration_enable() const
{
    return m_aeb_acceleration_enable;
}

/*!
 * @brief This function returns a reference to member aeb_acceleration_enable
 * @return Reference to member aeb_acceleration_enable
 */
bool& control_msgs::msg::ChassisCommand::aeb_acceleration_enable()
{
    return m_aeb_acceleration_enable;
}

/*!
 * @brief This function sets a value in member brake_pedal_cmd
 * @param _brake_pedal_cmd New value for member brake_pedal_cmd
 */
void control_msgs::msg::ChassisCommand::brake_pedal_cmd(
        uint8_t _brake_pedal_cmd)
{
    m_brake_pedal_cmd = _brake_pedal_cmd;
}

/*!
 * @brief This function returns the value of member brake_pedal_cmd
 * @return Value of member brake_pedal_cmd
 */
uint8_t control_msgs::msg::ChassisCommand::brake_pedal_cmd() const
{
    return m_brake_pedal_cmd;
}

/*!
 * @brief This function returns a reference to member brake_pedal_cmd
 * @return Reference to member brake_pedal_cmd
 */
uint8_t& control_msgs::msg::ChassisCommand::brake_pedal_cmd()
{
    return m_brake_pedal_cmd;
}

/*!
 * @brief This function sets a value in member aeb_acceleration_cmd
 * @param _aeb_acceleration_cmd New value for member aeb_acceleration_cmd
 */
void control_msgs::msg::ChassisCommand::aeb_acceleration_cmd(
        float _aeb_acceleration_cmd)
{
    m_aeb_acceleration_cmd = _aeb_acceleration_cmd;
}

/*!
 * @brief This function returns the value of member aeb_acceleration_cmd
 * @return Value of member aeb_acceleration_cmd
 */
float control_msgs::msg::ChassisCommand::aeb_acceleration_cmd() const
{
    return m_aeb_acceleration_cmd;
}

/*!
 * @brief This function returns a reference to member aeb_acceleration_cmd
 * @return Reference to member aeb_acceleration_cmd
 */
float& control_msgs::msg::ChassisCommand::aeb_acceleration_cmd()
{
    return m_aeb_acceleration_cmd;
}

/*!
 * @brief This function sets a value in member brake_pedal_cmd_enable
 * @param _brake_pedal_cmd_enable New value for member brake_pedal_cmd_enable
 */
void control_msgs::msg::ChassisCommand::brake_pedal_cmd_enable(
        bool _brake_pedal_cmd_enable)
{
    m_brake_pedal_cmd_enable = _brake_pedal_cmd_enable;
}

/*!
 * @brief This function returns the value of member brake_pedal_cmd_enable
 * @return Value of member brake_pedal_cmd_enable
 */
bool control_msgs::msg::ChassisCommand::brake_pedal_cmd_enable() const
{
    return m_brake_pedal_cmd_enable;
}

/*!
 * @brief This function returns a reference to member brake_pedal_cmd_enable
 * @return Reference to member brake_pedal_cmd_enable
 */
bool& control_msgs::msg::ChassisCommand::brake_pedal_cmd_enable()
{
    return m_brake_pedal_cmd_enable;
}

/*!
 * @brief This function sets a value in member accelration_pedal_cmd
 * @param _accelration_pedal_cmd New value for member accelration_pedal_cmd
 */
void control_msgs::msg::ChassisCommand::accelration_pedal_cmd(
        uint8_t _accelration_pedal_cmd)
{
    m_accelration_pedal_cmd = _accelration_pedal_cmd;
}

/*!
 * @brief This function returns the value of member accelration_pedal_cmd
 * @return Value of member accelration_pedal_cmd
 */
uint8_t control_msgs::msg::ChassisCommand::accelration_pedal_cmd() const
{
    return m_accelration_pedal_cmd;
}

/*!
 * @brief This function returns a reference to member accelration_pedal_cmd
 * @return Reference to member accelration_pedal_cmd
 */
uint8_t& control_msgs::msg::ChassisCommand::accelration_pedal_cmd()
{
    return m_accelration_pedal_cmd;
}

/*!
 * @brief This function sets a value in member accelration_pedal_cmd_enble
 * @param _accelration_pedal_cmd_enble New value for member accelration_pedal_cmd_enble
 */
void control_msgs::msg::ChassisCommand::accelration_pedal_cmd_enble(
        bool _accelration_pedal_cmd_enble)
{
    m_accelration_pedal_cmd_enble = _accelration_pedal_cmd_enble;
}

/*!
 * @brief This function returns the value of member accelration_pedal_cmd_enble
 * @return Value of member accelration_pedal_cmd_enble
 */
bool control_msgs::msg::ChassisCommand::accelration_pedal_cmd_enble() const
{
    return m_accelration_pedal_cmd_enble;
}

/*!
 * @brief This function returns a reference to member accelration_pedal_cmd_enble
 * @return Reference to member accelration_pedal_cmd_enble
 */
bool& control_msgs::msg::ChassisCommand::accelration_pedal_cmd_enble()
{
    return m_accelration_pedal_cmd_enble;
}


size_t control_msgs::msg::ChassisCommand::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;

















    return current_align;
}

bool control_msgs::msg::ChassisCommand::isKeyDefined()
{
    return false;
}

void control_msgs::msg::ChassisCommand::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
                  
}


