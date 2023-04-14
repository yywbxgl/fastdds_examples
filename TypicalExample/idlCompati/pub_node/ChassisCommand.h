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
 * @file ChassisCommand.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _FAST_DDS_GENERATED_CONTROL_MSGS_MSG_CHASSISCOMMAND_H_
#define _FAST_DDS_GENERATED_CONTROL_MSGS_MSG_CHASSISCOMMAND_H_


#include <fastrtps/utils/fixed_size_string.hpp>

#include <stdint.h>
#include <array>
#include <string>
#include <vector>
#include <map>
#include <bitset>

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define eProsima_user_DllExport
#endif  // _WIN32

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(ChassisCommand_SOURCE)
#define ChassisCommand_DllAPI __declspec( dllexport )
#else
#define ChassisCommand_DllAPI __declspec( dllimport )
#endif // ChassisCommand_SOURCE
#else
#define ChassisCommand_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define ChassisCommand_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


namespace control_msgs {
    namespace msg {
        /*!
         * @brief This class represents the structure ChassisCommand defined by the user in the IDL file.
         * @ingroup CHASSISCOMMAND
         */
        class ChassisCommand
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport ChassisCommand();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~ChassisCommand();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object control_msgs::msg::ChassisCommand that will be copied.
             */
            eProsima_user_DllExport ChassisCommand(
                    const ChassisCommand& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object control_msgs::msg::ChassisCommand that will be copied.
             */
            eProsima_user_DllExport ChassisCommand(
                    ChassisCommand&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object control_msgs::msg::ChassisCommand that will be copied.
             */
            eProsima_user_DllExport ChassisCommand& operator =(
                    const ChassisCommand& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object control_msgs::msg::ChassisCommand that will be copied.
             */
            eProsima_user_DllExport ChassisCommand& operator =(
                    ChassisCommand&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x control_msgs::msg::ChassisCommand object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const ChassisCommand& x) const;

            /*!
             * @brief Comparison operator.
             * @param x control_msgs::msg::ChassisCommand object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const ChassisCommand& x) const;

            /*!
             * @brief This function sets a value in member ads_function
             * @param _ads_function New value for member ads_function
             */
            eProsima_user_DllExport void ads_function(
                    uint32_t _ads_function);

            /*!
             * @brief This function returns the value of member ads_function
             * @return Value of member ads_function
             */
            eProsima_user_DllExport uint32_t ads_function() const;

            /*!
             * @brief This function returns a reference to member ads_function
             * @return Reference to member ads_function
             */
            eProsima_user_DllExport uint32_t& ads_function();

            /*!
             * @brief This function sets a value in member steer_angle_cmd
             * @param _steer_angle_cmd New value for member steer_angle_cmd
             */
            eProsima_user_DllExport void steer_angle_cmd(
                    float _steer_angle_cmd);

            /*!
             * @brief This function returns the value of member steer_angle_cmd
             * @return Value of member steer_angle_cmd
             */
            eProsima_user_DllExport float steer_angle_cmd() const;

            /*!
             * @brief This function returns a reference to member steer_angle_cmd
             * @return Reference to member steer_angle_cmd
             */
            eProsima_user_DllExport float& steer_angle_cmd();

            /*!
             * @brief This function sets a value in member steer_wheel_torque_cmd
             * @param _steer_wheel_torque_cmd New value for member steer_wheel_torque_cmd
             */
            eProsima_user_DllExport void steer_wheel_torque_cmd(
                    float _steer_wheel_torque_cmd);

            /*!
             * @brief This function returns the value of member steer_wheel_torque_cmd
             * @return Value of member steer_wheel_torque_cmd
             */
            eProsima_user_DllExport float steer_wheel_torque_cmd() const;

            /*!
             * @brief This function returns a reference to member steer_wheel_torque_cmd
             * @return Reference to member steer_wheel_torque_cmd
             */
            eProsima_user_DllExport float& steer_wheel_torque_cmd();

            /*!
             * @brief This function sets a value in member steer_vibration_cmd
             * @param _steer_vibration_cmd New value for member steer_vibration_cmd
             */
            eProsima_user_DllExport void steer_vibration_cmd(
                    int8_t _steer_vibration_cmd);

            /*!
             * @brief This function returns the value of member steer_vibration_cmd
             * @return Value of member steer_vibration_cmd
             */
            eProsima_user_DllExport int8_t steer_vibration_cmd() const;

            /*!
             * @brief This function returns a reference to member steer_vibration_cmd
             * @return Reference to member steer_vibration_cmd
             */
            eProsima_user_DllExport int8_t& steer_vibration_cmd();

            /*!
             * @brief This function sets a value in member long_acceleration_cmd
             * @param _long_acceleration_cmd New value for member long_acceleration_cmd
             */
            eProsima_user_DllExport void long_acceleration_cmd(
                    float _long_acceleration_cmd);

            /*!
             * @brief This function returns the value of member long_acceleration_cmd
             * @return Value of member long_acceleration_cmd
             */
            eProsima_user_DllExport float long_acceleration_cmd() const;

            /*!
             * @brief This function returns a reference to member long_acceleration_cmd
             * @return Reference to member long_acceleration_cmd
             */
            eProsima_user_DllExport float& long_acceleration_cmd();

            /*!
             * @brief This function sets a value in member long_accelerationjerk_max
             * @param _long_accelerationjerk_max New value for member long_accelerationjerk_max
             */
            eProsima_user_DllExport void long_accelerationjerk_max(
                    float _long_accelerationjerk_max);

            /*!
             * @brief This function returns the value of member long_accelerationjerk_max
             * @return Value of member long_accelerationjerk_max
             */
            eProsima_user_DllExport float long_accelerationjerk_max() const;

            /*!
             * @brief This function returns a reference to member long_accelerationjerk_max
             * @return Reference to member long_accelerationjerk_max
             */
            eProsima_user_DllExport float& long_accelerationjerk_max();

            /*!
             * @brief This function sets a value in member long_accelerationjerk_min
             * @param _long_accelerationjerk_min New value for member long_accelerationjerk_min
             */
            eProsima_user_DllExport void long_accelerationjerk_min(
                    float _long_accelerationjerk_min);

            /*!
             * @brief This function returns the value of member long_accelerationjerk_min
             * @return Value of member long_accelerationjerk_min
             */
            eProsima_user_DllExport float long_accelerationjerk_min() const;

            /*!
             * @brief This function returns a reference to member long_accelerationjerk_min
             * @return Reference to member long_accelerationjerk_min
             */
            eProsima_user_DllExport float& long_accelerationjerk_min();

            /*!
             * @brief This function sets a value in member gear_cmd
             * @param _gear_cmd New value for member gear_cmd
             */
            eProsima_user_DllExport void gear_cmd(
                    int8_t _gear_cmd);

            /*!
             * @brief This function returns the value of member gear_cmd
             * @return Value of member gear_cmd
             */
            eProsima_user_DllExport int8_t gear_cmd() const;

            /*!
             * @brief This function returns a reference to member gear_cmd
             * @return Reference to member gear_cmd
             */
            eProsima_user_DllExport int8_t& gear_cmd();

            /*!
             * @brief This function sets a value in member aeb_acceleration_cmd
             * @param _aeb_acceleration_cmd New value for member aeb_acceleration_cmd
             */
            eProsima_user_DllExport void aeb_acceleration_cmd(
                    float _aeb_acceleration_cmd);

            /*!
             * @brief This function returns the value of member aeb_acceleration_cmd
             * @return Value of member aeb_acceleration_cmd
             */
            eProsima_user_DllExport float aeb_acceleration_cmd() const;

            /*!
             * @brief This function returns a reference to member aeb_acceleration_cmd
             * @return Reference to member aeb_acceleration_cmd
             */
            eProsima_user_DllExport float& aeb_acceleration_cmd();

            /*!
             * @brief This function sets a value in member aeb_acceleration_enable
             * @param _aeb_acceleration_enable New value for member aeb_acceleration_enable
             */
            eProsima_user_DllExport void aeb_acceleration_enable(
                    bool _aeb_acceleration_enable);

            /*!
             * @brief This function returns the value of member aeb_acceleration_enable
             * @return Value of member aeb_acceleration_enable
             */
            eProsima_user_DllExport bool aeb_acceleration_enable() const;

            /*!
             * @brief This function returns a reference to member aeb_acceleration_enable
             * @return Reference to member aeb_acceleration_enable
             */
            eProsima_user_DllExport bool& aeb_acceleration_enable();

            /*!
             * @brief This function sets a value in member brake_pedal_cmd
             * @param _brake_pedal_cmd New value for member brake_pedal_cmd
             */
            eProsima_user_DllExport void brake_pedal_cmd(
                    uint8_t _brake_pedal_cmd);

            /*!
             * @brief This function returns the value of member brake_pedal_cmd
             * @return Value of member brake_pedal_cmd
             */
            eProsima_user_DllExport uint8_t brake_pedal_cmd() const;

            /*!
             * @brief This function returns a reference to member brake_pedal_cmd
             * @return Reference to member brake_pedal_cmd
             */
            eProsima_user_DllExport uint8_t& brake_pedal_cmd();

            /*!
             * @brief This function sets a value in member test_add0
             * @param _test_add0 New value for member test_add0
             */
            eProsima_user_DllExport void test_add0(
                    float _test_add0);

            /*!
             * @brief This function returns the value of member test_add0
             * @return Value of member test_add0
             */
            eProsima_user_DllExport float test_add0() const;

            /*!
             * @brief This function returns a reference to member test_add0
             * @return Reference to member test_add0
             */
            eProsima_user_DllExport float& test_add0();

            /*!
             * @brief This function sets a value in member brake_pedal_cmd_enable
             * @param _brake_pedal_cmd_enable New value for member brake_pedal_cmd_enable
             */
            eProsima_user_DllExport void brake_pedal_cmd_enable(
                    bool _brake_pedal_cmd_enable);

            /*!
             * @brief This function returns the value of member brake_pedal_cmd_enable
             * @return Value of member brake_pedal_cmd_enable
             */
            eProsima_user_DllExport bool brake_pedal_cmd_enable() const;

            /*!
             * @brief This function returns a reference to member brake_pedal_cmd_enable
             * @return Reference to member brake_pedal_cmd_enable
             */
            eProsima_user_DllExport bool& brake_pedal_cmd_enable();

            /*!
             * @brief This function sets a value in member accelration_pedal_cmd
             * @param _accelration_pedal_cmd New value for member accelration_pedal_cmd
             */
            eProsima_user_DllExport void accelration_pedal_cmd(
                    uint8_t _accelration_pedal_cmd);

            /*!
             * @brief This function returns the value of member accelration_pedal_cmd
             * @return Value of member accelration_pedal_cmd
             */
            eProsima_user_DllExport uint8_t accelration_pedal_cmd() const;

            /*!
             * @brief This function returns a reference to member accelration_pedal_cmd
             * @return Reference to member accelration_pedal_cmd
             */
            eProsima_user_DllExport uint8_t& accelration_pedal_cmd();

            /*!
             * @brief This function sets a value in member accelration_pedal_cmd_enble
             * @param _accelration_pedal_cmd_enble New value for member accelration_pedal_cmd_enble
             */
            eProsima_user_DllExport void accelration_pedal_cmd_enble(
                    bool _accelration_pedal_cmd_enble);

            /*!
             * @brief This function returns the value of member accelration_pedal_cmd_enble
             * @return Value of member accelration_pedal_cmd_enble
             */
            eProsima_user_DllExport bool accelration_pedal_cmd_enble() const;

            /*!
             * @brief This function returns a reference to member accelration_pedal_cmd_enble
             * @return Reference to member accelration_pedal_cmd_enble
             */
            eProsima_user_DllExport bool& accelration_pedal_cmd_enble();

            /*!
             * @brief This function sets a value in member test_add1
             * @param _test_add1 New value for member test_add1
             */
            eProsima_user_DllExport void test_add1(
                    bool _test_add1);

            /*!
             * @brief This function returns the value of member test_add1
             * @return Value of member test_add1
             */
            eProsima_user_DllExport bool test_add1() const;

            /*!
             * @brief This function returns a reference to member test_add1
             * @return Reference to member test_add1
             */
            eProsima_user_DllExport bool& test_add1();

            /*!
             * @brief This function sets a value in member test_add2
             * @param _test_add2 New value for member test_add2
             */
            eProsima_user_DllExport void test_add2(
                    float _test_add2);

            /*!
             * @brief This function returns the value of member test_add2
             * @return Value of member test_add2
             */
            eProsima_user_DllExport float test_add2() const;

            /*!
             * @brief This function returns a reference to member test_add2
             * @return Reference to member test_add2
             */
            eProsima_user_DllExport float& test_add2();

            /*!
             * @brief This function sets a value in member test_add3
             * @param _test_add3 New value for member test_add3
             */
            eProsima_user_DllExport void test_add3(
                    int32_t _test_add3);

            /*!
             * @brief This function returns the value of member test_add3
             * @return Value of member test_add3
             */
            eProsima_user_DllExport int32_t test_add3() const;

            /*!
             * @brief This function returns a reference to member test_add3
             * @return Reference to member test_add3
             */
            eProsima_user_DllExport int32_t& test_add3();


            /*!
             * @brief This function returns the maximum serialized size of an object
             * depending on the buffer alignment.
             * @param current_alignment Buffer alignment.
             * @return Maximum serialized size.
             */
            eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
                    size_t current_alignment = 0);

            /*!
             * @brief This function returns the serialized size of a data depending on the buffer alignment.
             * @param data Data which is calculated its serialized size.
             * @param current_alignment Buffer alignment.
             * @return Serialized size.
             */
            eProsima_user_DllExport static size_t getCdrSerializedSize(
                    const control_msgs::msg::ChassisCommand& data,
                    size_t current_alignment = 0);


            /*!
             * @brief This function serializes an object using CDR serialization.
             * @param cdr CDR serialization object.
             */
            eProsima_user_DllExport void serialize(
                    eprosima::fastcdr::Cdr& cdr) const;

            /*!
             * @brief This function deserializes an object using CDR serialization.
             * @param cdr CDR serialization object.
             */
            eProsima_user_DllExport void deserialize(
                    eprosima::fastcdr::Cdr& cdr);



            /*!
             * @brief This function returns the maximum serialized size of the Key of an object
             * depending on the buffer alignment.
             * @param current_alignment Buffer alignment.
             * @return Maximum serialized size.
             */
            eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(
                    size_t current_alignment = 0);

            /*!
             * @brief This function tells you if the Key has been defined for this type
             */
            eProsima_user_DllExport static bool isKeyDefined();

            /*!
             * @brief This function serializes the key members of an object using CDR serialization.
             * @param cdr CDR serialization object.
             */
            eProsima_user_DllExport void serializeKey(
                    eprosima::fastcdr::Cdr& cdr) const;

        private:

            uint32_t m_ads_function;
            float m_steer_angle_cmd;
            float m_steer_wheel_torque_cmd;
            int8_t m_steer_vibration_cmd;
            float m_long_acceleration_cmd;
            float m_long_accelerationjerk_max;
            float m_long_accelerationjerk_min;
            int8_t m_gear_cmd;
            float m_aeb_acceleration_cmd;
            bool m_aeb_acceleration_enable;
            uint8_t m_brake_pedal_cmd;
            float m_test_add0;
            bool m_brake_pedal_cmd_enable;
            uint8_t m_accelration_pedal_cmd;
            bool m_accelration_pedal_cmd_enble;
            bool m_test_add1;
            float m_test_add2;
            int32_t m_test_add3;
        };
    } // namespace msg
} // namespace control_msgs

#endif // _FAST_DDS_GENERATED_CONTROL_MSGS_MSG_CHASSISCOMMAND_H_