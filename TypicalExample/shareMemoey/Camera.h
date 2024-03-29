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
 * @file Camera.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _FAST_DDS_GENERATED_JOYSON_SENSOR_CAMERA_CAMERA_H_
#define _FAST_DDS_GENERATED_JOYSON_SENSOR_CAMERA_CAMERA_H_


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
#if defined(Camera_SOURCE)
#define Camera_DllAPI __declspec( dllexport )
#else
#define Camera_DllAPI __declspec( dllimport )
#endif // Camera_SOURCE
#else
#define Camera_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define Camera_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


namespace joyson {
    namespace sensor {
        namespace camera {
            /*!
             * @brief This class represents the structure TimeStamp defined by the user in the IDL file.
             * @ingroup CAMERA
             */
            class TimeStamp
            {
            public:

                /*!
                 * @brief Default constructor.
                 */
                eProsima_user_DllExport TimeStamp();

                /*!
                 * @brief Default destructor.
                 */
                eProsima_user_DllExport ~TimeStamp();

                /*!
                 * @brief Copy constructor.
                 * @param x Reference to the object joyson::sensor::camera::TimeStamp that will be copied.
                 */
                eProsima_user_DllExport TimeStamp(
                        const TimeStamp& x);

                /*!
                 * @brief Move constructor.
                 * @param x Reference to the object joyson::sensor::camera::TimeStamp that will be copied.
                 */
                eProsima_user_DllExport TimeStamp(
                        TimeStamp&& x) noexcept;

                /*!
                 * @brief Copy assignment.
                 * @param x Reference to the object joyson::sensor::camera::TimeStamp that will be copied.
                 */
                eProsima_user_DllExport TimeStamp& operator =(
                        const TimeStamp& x);

                /*!
                 * @brief Move assignment.
                 * @param x Reference to the object joyson::sensor::camera::TimeStamp that will be copied.
                 */
                eProsima_user_DllExport TimeStamp& operator =(
                        TimeStamp&& x) noexcept;

                /*!
                 * @brief Comparison operator.
                 * @param x joyson::sensor::camera::TimeStamp object to compare.
                 */
                eProsima_user_DllExport bool operator ==(
                        const TimeStamp& x) const;

                /*!
                 * @brief Comparison operator.
                 * @param x joyson::sensor::camera::TimeStamp object to compare.
                 */
                eProsima_user_DllExport bool operator !=(
                        const TimeStamp& x) const;

                /*!
                 * @brief This function sets a value in member Second
                 * @param _Second New value for member Second
                 */
                eProsima_user_DllExport void Second(
                        uint64_t _Second);

                /*!
                 * @brief This function returns the value of member Second
                 * @return Value of member Second
                 */
                eProsima_user_DllExport uint64_t Second() const;

                /*!
                 * @brief This function returns a reference to member Second
                 * @return Reference to member Second
                 */
                eProsima_user_DllExport uint64_t& Second();

                /*!
                 * @brief This function sets a value in member Millisecond
                 * @param _Millisecond New value for member Millisecond
                 */
                eProsima_user_DllExport void Millisecond(
                        uint64_t _Millisecond);

                /*!
                 * @brief This function returns the value of member Millisecond
                 * @return Value of member Millisecond
                 */
                eProsima_user_DllExport uint64_t Millisecond() const;

                /*!
                 * @brief This function returns a reference to member Millisecond
                 * @return Reference to member Millisecond
                 */
                eProsima_user_DllExport uint64_t& Millisecond();

                /*!
                 * @brief This function sets a value in member Nanoseconds
                 * @param _Nanoseconds New value for member Nanoseconds
                 */
                eProsima_user_DllExport void Nanoseconds(
                        uint64_t _Nanoseconds);

                /*!
                 * @brief This function returns the value of member Nanoseconds
                 * @return Value of member Nanoseconds
                 */
                eProsima_user_DllExport uint64_t Nanoseconds() const;

                /*!
                 * @brief This function returns a reference to member Nanoseconds
                 * @return Reference to member Nanoseconds
                 */
                eProsima_user_DllExport uint64_t& Nanoseconds();


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
                        const joyson::sensor::camera::TimeStamp& data,
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

                uint64_t m_Second;
                uint64_t m_Millisecond;
                uint64_t m_Nanoseconds;
            };
            /*!
             * @brief This class represents the structure ChannelFrame defined by the user in the IDL file.
             * @ingroup CAMERA
             */
            class ChannelFrame
            {
            public:

                /*!
                 * @brief Default constructor.
                 */
                eProsima_user_DllExport ChannelFrame();

                /*!
                 * @brief Default destructor.
                 */
                eProsima_user_DllExport ~ChannelFrame();

                /*!
                 * @brief Copy constructor.
                 * @param x Reference to the object joyson::sensor::camera::ChannelFrame that will be copied.
                 */
                eProsima_user_DllExport ChannelFrame(
                        const ChannelFrame& x);

                /*!
                 * @brief Move constructor.
                 * @param x Reference to the object joyson::sensor::camera::ChannelFrame that will be copied.
                 */
                eProsima_user_DllExport ChannelFrame(
                        ChannelFrame&& x) noexcept;

                /*!
                 * @brief Copy assignment.
                 * @param x Reference to the object joyson::sensor::camera::ChannelFrame that will be copied.
                 */
                eProsima_user_DllExport ChannelFrame& operator =(
                        const ChannelFrame& x);

                /*!
                 * @brief Move assignment.
                 * @param x Reference to the object joyson::sensor::camera::ChannelFrame that will be copied.
                 */
                eProsima_user_DllExport ChannelFrame& operator =(
                        ChannelFrame&& x) noexcept;

                /*!
                 * @brief Comparison operator.
                 * @param x joyson::sensor::camera::ChannelFrame object to compare.
                 */
                eProsima_user_DllExport bool operator ==(
                        const ChannelFrame& x) const;

                /*!
                 * @brief Comparison operator.
                 * @param x joyson::sensor::camera::ChannelFrame object to compare.
                 */
                eProsima_user_DllExport bool operator !=(
                        const ChannelFrame& x) const;

                /*!
                 * @brief This function copies the value in member TriggerTimeStamp
                 * @param _TriggerTimeStamp New value to be copied in member TriggerTimeStamp
                 */
                eProsima_user_DllExport void TriggerTimeStamp(
                        const joyson::sensor::camera::TimeStamp& _TriggerTimeStamp);

                /*!
                 * @brief This function moves the value in member TriggerTimeStamp
                 * @param _TriggerTimeStamp New value to be moved in member TriggerTimeStamp
                 */
                eProsima_user_DllExport void TriggerTimeStamp(
                        joyson::sensor::camera::TimeStamp&& _TriggerTimeStamp);

                /*!
                 * @brief This function returns a constant reference to member TriggerTimeStamp
                 * @return Constant reference to member TriggerTimeStamp
                 */
                eProsima_user_DllExport const joyson::sensor::camera::TimeStamp& TriggerTimeStamp() const;

                /*!
                 * @brief This function returns a reference to member TriggerTimeStamp
                 * @return Reference to member TriggerTimeStamp
                 */
                eProsima_user_DllExport joyson::sensor::camera::TimeStamp& TriggerTimeStamp();
                /*!
                 * @brief This function copies the value in member ChnTimeStamp
                 * @param _ChnTimeStamp New value to be copied in member ChnTimeStamp
                 */
                eProsima_user_DllExport void ChnTimeStamp(
                        const joyson::sensor::camera::TimeStamp& _ChnTimeStamp);

                /*!
                 * @brief This function moves the value in member ChnTimeStamp
                 * @param _ChnTimeStamp New value to be moved in member ChnTimeStamp
                 */
                eProsima_user_DllExport void ChnTimeStamp(
                        joyson::sensor::camera::TimeStamp&& _ChnTimeStamp);

                /*!
                 * @brief This function returns a constant reference to member ChnTimeStamp
                 * @return Constant reference to member ChnTimeStamp
                 */
                eProsima_user_DllExport const joyson::sensor::camera::TimeStamp& ChnTimeStamp() const;

                /*!
                 * @brief This function returns a reference to member ChnTimeStamp
                 * @return Reference to member ChnTimeStamp
                 */
                eProsima_user_DllExport joyson::sensor::camera::TimeStamp& ChnTimeStamp();
                /*!
                 * @brief This function sets a value in member Vaild
                 * @param _Vaild New value for member Vaild
                 */
                eProsima_user_DllExport void Vaild(
                        bool _Vaild);

                /*!
                 * @brief This function returns the value of member Vaild
                 * @return Value of member Vaild
                 */
                eProsima_user_DllExport bool Vaild() const;

                /*!
                 * @brief This function returns a reference to member Vaild
                 * @return Reference to member Vaild
                 */
                eProsima_user_DllExport bool& Vaild();

                /*!
                 * @brief This function sets a value in member CameraID
                 * @param _CameraID New value for member CameraID
                 */
                eProsima_user_DllExport void CameraID(
                        uint8_t _CameraID);

                /*!
                 * @brief This function returns the value of member CameraID
                 * @return Value of member CameraID
                 */
                eProsima_user_DllExport uint8_t CameraID() const;

                /*!
                 * @brief This function returns a reference to member CameraID
                 * @return Reference to member CameraID
                 */
                eProsima_user_DllExport uint8_t& CameraID();

                /*!
                 * @brief This function sets a value in member ColorSpace
                 * @param _ColorSpace New value for member ColorSpace
                 */
                eProsima_user_DllExport void ColorSpace(
                        uint16_t _ColorSpace);

                /*!
                 * @brief This function returns the value of member ColorSpace
                 * @return Value of member ColorSpace
                 */
                eProsima_user_DllExport uint16_t ColorSpace() const;

                /*!
                 * @brief This function returns a reference to member ColorSpace
                 * @return Reference to member ColorSpace
                 */
                eProsima_user_DllExport uint16_t& ColorSpace();

                /*!
                 * @brief This function sets a value in member Width
                 * @param _Width New value for member Width
                 */
                eProsima_user_DllExport void Width(
                        uint16_t _Width);

                /*!
                 * @brief This function returns the value of member Width
                 * @return Value of member Width
                 */
                eProsima_user_DllExport uint16_t Width() const;

                /*!
                 * @brief This function returns a reference to member Width
                 * @return Reference to member Width
                 */
                eProsima_user_DllExport uint16_t& Width();

                /*!
                 * @brief This function sets a value in member Height
                 * @param _Height New value for member Height
                 */
                eProsima_user_DllExport void Height(
                        uint16_t _Height);

                /*!
                 * @brief This function returns the value of member Height
                 * @return Value of member Height
                 */
                eProsima_user_DllExport uint16_t Height() const;

                /*!
                 * @brief This function returns a reference to member Height
                 * @return Reference to member Height
                 */
                eProsima_user_DllExport uint16_t& Height();

                /*!
                 * @brief This function sets a value in member Size
                 * @param _Size New value for member Size
                 */
                eProsima_user_DllExport void Size(
                        uint64_t _Size);

                /*!
                 * @brief This function returns the value of member Size
                 * @return Value of member Size
                 */
                eProsima_user_DllExport uint64_t Size() const;

                /*!
                 * @brief This function returns a reference to member Size
                 * @return Reference to member Size
                 */
                eProsima_user_DllExport uint64_t& Size();

                /*!
                 * @brief This function sets a value in member Format
                 * @param _Format New value for member Format
                 */
                eProsima_user_DllExport void Format(
                        uint64_t _Format);

                /*!
                 * @brief This function returns the value of member Format
                 * @return Value of member Format
                 */
                eProsima_user_DllExport uint64_t Format() const;

                /*!
                 * @brief This function returns a reference to member Format
                 * @return Reference to member Format
                 */
                eProsima_user_DllExport uint64_t& Format();

                /*!
                 * @brief This function sets a value in member Offset
                 * @param _Offset New value for member Offset
                 */
                eProsima_user_DllExport void Offset(
                        uint64_t _Offset);

                /*!
                 * @brief This function returns the value of member Offset
                 * @return Value of member Offset
                 */
                eProsima_user_DllExport uint64_t Offset() const;

                /*!
                 * @brief This function returns a reference to member Offset
                 * @return Reference to member Offset
                 */
                eProsima_user_DllExport uint64_t& Offset();

                /*!
                 * @brief This function copies the value in member Bits
                 * @param _Bits New value to be copied in member Bits
                 */
                eProsima_user_DllExport void Bits(
                        const std::array<uint8_t, 1920*1080*2+4096>& _Bits);

                /*!
                 * @brief This function moves the value in member Bits
                 * @param _Bits New value to be moved in member Bits
                 */
                eProsima_user_DllExport void Bits(
                        std::array<uint8_t, 1920*1080*2+4096>&& _Bits);

                /*!
                 * @brief This function returns a constant reference to member Bits
                 * @return Constant reference to member Bits
                 */
                eProsima_user_DllExport const std::array<uint8_t, 1920*1080*2+4096>& Bits() const;

                /*!
                 * @brief This function returns a reference to member Bits
                 * @return Reference to member Bits
                 */
                eProsima_user_DllExport std::array<uint8_t, 1920*1080*2+4096>& Bits();

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
                        const joyson::sensor::camera::ChannelFrame& data,
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

                joyson::sensor::camera::TimeStamp m_TriggerTimeStamp;
                joyson::sensor::camera::TimeStamp m_ChnTimeStamp;
                bool m_Vaild;
                uint8_t m_CameraID;
                uint16_t m_ColorSpace;
                uint16_t m_Width;
                uint16_t m_Height;
                uint64_t m_Size;
                uint64_t m_Format;
                uint64_t m_Offset;
                std::array<uint8_t, 1920*1080*2+4096> m_Bits;
            };
            /*!
             * @brief This class represents the structure GroupFrame defined by the user in the IDL file.
             * @ingroup CAMERA
             */
            class GroupFrame
            {
            public:

                /*!
                 * @brief Default constructor.
                 */
                eProsima_user_DllExport GroupFrame();

                /*!
                 * @brief Default destructor.
                 */
                eProsima_user_DllExport ~GroupFrame();

                /*!
                 * @brief Copy constructor.
                 * @param x Reference to the object joyson::sensor::camera::GroupFrame that will be copied.
                 */
                eProsima_user_DllExport GroupFrame(
                        const GroupFrame& x);

                /*!
                 * @brief Move constructor.
                 * @param x Reference to the object joyson::sensor::camera::GroupFrame that will be copied.
                 */
                eProsima_user_DllExport GroupFrame(
                        GroupFrame&& x) noexcept;

                /*!
                 * @brief Copy assignment.
                 * @param x Reference to the object joyson::sensor::camera::GroupFrame that will be copied.
                 */
                eProsima_user_DllExport GroupFrame& operator =(
                        const GroupFrame& x);

                /*!
                 * @brief Move assignment.
                 * @param x Reference to the object joyson::sensor::camera::GroupFrame that will be copied.
                 */
                eProsima_user_DllExport GroupFrame& operator =(
                        GroupFrame&& x) noexcept;

                /*!
                 * @brief Comparison operator.
                 * @param x joyson::sensor::camera::GroupFrame object to compare.
                 */
                eProsima_user_DllExport bool operator ==(
                        const GroupFrame& x) const;

                /*!
                 * @brief Comparison operator.
                 * @param x joyson::sensor::camera::GroupFrame object to compare.
                 */
                eProsima_user_DllExport bool operator !=(
                        const GroupFrame& x) const;

                /*!
                 * @brief This function copies the value in member GroupTimeStamp
                 * @param _GroupTimeStamp New value to be copied in member GroupTimeStamp
                 */
                eProsima_user_DllExport void GroupTimeStamp(
                        const joyson::sensor::camera::TimeStamp& _GroupTimeStamp);

                /*!
                 * @brief This function moves the value in member GroupTimeStamp
                 * @param _GroupTimeStamp New value to be moved in member GroupTimeStamp
                 */
                eProsima_user_DllExport void GroupTimeStamp(
                        joyson::sensor::camera::TimeStamp&& _GroupTimeStamp);

                /*!
                 * @brief This function returns a constant reference to member GroupTimeStamp
                 * @return Constant reference to member GroupTimeStamp
                 */
                eProsima_user_DllExport const joyson::sensor::camera::TimeStamp& GroupTimeStamp() const;

                /*!
                 * @brief This function returns a reference to member GroupTimeStamp
                 * @return Reference to member GroupTimeStamp
                 */
                eProsima_user_DllExport joyson::sensor::camera::TimeStamp& GroupTimeStamp();
                /*!
                 * @brief This function sets a value in member FrameIdx
                 * @param _FrameIdx New value for member FrameIdx
                 */
                eProsima_user_DllExport void FrameIdx(
                        uint64_t _FrameIdx);

                /*!
                 * @brief This function returns the value of member FrameIdx
                 * @return Value of member FrameIdx
                 */
                eProsima_user_DllExport uint64_t FrameIdx() const;

                /*!
                 * @brief This function returns a reference to member FrameIdx
                 * @return Reference to member FrameIdx
                 */
                eProsima_user_DllExport uint64_t& FrameIdx();

                /*!
                 * @brief This function copies the value in member FrameVector
                 * @param _FrameVector New value to be copied in member FrameVector
                 */
                eProsima_user_DllExport void FrameVector(
                        const std::array<joyson::sensor::camera::ChannelFrame, 8>& _FrameVector);

                /*!
                 * @brief This function moves the value in member FrameVector
                 * @param _FrameVector New value to be moved in member FrameVector
                 */
                eProsima_user_DllExport void FrameVector(
                        std::array<joyson::sensor::camera::ChannelFrame, 8>&& _FrameVector);

                /*!
                 * @brief This function returns a constant reference to member FrameVector
                 * @return Constant reference to member FrameVector
                 */
                eProsima_user_DllExport const std::array<joyson::sensor::camera::ChannelFrame, 8>& FrameVector() const;

                /*!
                 * @brief This function returns a reference to member FrameVector
                 * @return Reference to member FrameVector
                 */
                eProsima_user_DllExport std::array<joyson::sensor::camera::ChannelFrame, 8>& FrameVector();

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
                        const joyson::sensor::camera::GroupFrame& data,
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

                joyson::sensor::camera::TimeStamp m_GroupTimeStamp;
                uint64_t m_FrameIdx;
                std::array<joyson::sensor::camera::ChannelFrame, 8> m_FrameVector;
            };
        } // namespace camera
    } // namespace sensor
} // namespace joyson

#endif // _FAST_DDS_GENERATED_JOYSON_SENSOR_CAMERA_CAMERA_H_