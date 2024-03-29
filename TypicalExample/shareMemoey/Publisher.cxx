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
 * @file HelloWorldPublisher.cpp
 * This file contains the implementation of the publisher functions.
 *
 * This file was generated by the tool fastcdrgen.
 */

#include <fastdds/dds/domain/DomainParticipantFactory.hpp>
#include <fastdds/dds/publisher/Publisher.hpp>
#include <fastdds/dds/publisher/qos/PublisherQos.hpp>
#include <fastdds/dds/publisher/DataWriter.hpp>
#include <fastdds/dds/publisher/qos/DataWriterQos.hpp>
#include <fastrtps/xmlparser/XMLProfileManager.h>
#include <fastrtps/types/DynamicDataFactory.h>

#include <thread>
#include <chrono>

#include "Publisher.h"
#include "CameraPubSubTypes.h"
#include "mytimer.h"

using namespace eprosima::fastdds::dds;

HelloWorldPublisher::HelloWorldPublisher()
    : participant_(nullptr)
    , publisher_(nullptr)
    , topic_(nullptr)
    , writer_(nullptr)
    , type_(new joyson::sensor::camera::GroupFramePubSubType())
{
}

HelloWorldPublisher::~HelloWorldPublisher()
{
    if (writer_ != nullptr)
    {
        publisher_->delete_datawriter(writer_);
    }
    if (publisher_ != nullptr)
    {
        participant_->delete_publisher(publisher_);
    }
    if (topic_ != nullptr)
    {
        participant_->delete_topic(topic_);
    }
    DomainParticipantFactory::get_instance()->delete_participant(participant_);
}

bool HelloWorldPublisher::init()
{
    
    // load xml file
    if (ReturnCode_t::RETCODE_OK !=
        DomainParticipantFactory::get_instance()->load_XML_profiles_file("../Publisher.xml"))
    {
        return false;
    }

    //CREATE THE PARTICIPANT
    participant_ = DomainParticipantFactory::get_instance()->create_participant_with_profile("participant_profile");
    if (participant_ == nullptr)
    {
        return false;
    }

    //REGISTER THE TYPE
    type_.register_type(participant_);

    //CREATE THE PUBLISHER
    publisher_ = participant_->create_publisher(PUBLISHER_QOS_DEFAULT);
    if (publisher_ == nullptr)
    {
        return false;
    }

    //CREATE THE TOPIC
    eprosima::fastrtps::TopicAttributes tp_attr;
    eprosima::fastrtps::xmlparser::XMLProfileManager::fillTopicAttributes("topic_hello_profile", tp_attr);
    topic_ = participant_->create_topic_with_profile(
        tp_attr.getTopicName().to_string(),
        tp_attr.getTopicDataType().to_string(),
        "topic_hello_profile");
    if (topic_ == nullptr)
    {
        return false;
    }


    // CREATE THE WRITER
    writer_ = publisher_->create_datawriter_with_profile(topic_, "datawriter_profile", &listener_);
    if (writer_ == nullptr)
    {
        return false;
    }

    std::cout << "HelloWorld DataWriter created." << std::endl;
    return true;
}

void HelloWorldPublisher::PubListener::on_publication_matched(
        eprosima::fastdds::dds::DataWriter*,
        const eprosima::fastdds::dds::PublicationMatchedStatus& info)
{
    if (info.current_count_change == 1)
    {
        matched = info.total_count;
        std::cout << "DataWriter matched." << std::endl;
    }
    else if (info.current_count_change == -1)
    {
        matched = info.total_count;
        std::cout << "DataWriter unmatched." << std::endl;
    }
    else
    {
        std::cout << info.current_count_change
                  << " is not a valid value for PublicationMatchedStatus current count change" << std::endl;
    }
}

void HelloWorldPublisher::run()
{
    int msgsent = 0;
    joyson::sensor::camera::GroupFrame* m_Hello = new  joyson::sensor::camera::GroupFrame();

    while(1) 
    {
        // zero copy
        void* sample = nullptr;
        if (ReturnCode_t::RETCODE_OK == writer_->loan_sample(sample)) 
        {
            myTimer t;
            ++msgsent;

            joyson::sensor::camera::GroupFrame* m_Hello =  static_cast<joyson::sensor::camera::GroupFrame*>(sample);
            m_Hello->FrameIdx(msgsent);
            auto now = std::chrono::system_clock::now();
            auto now_ns = std::chrono::duration_cast<std::chrono::nanoseconds>(now.time_since_epoch()).count();
            m_Hello->GroupTimeStamp().Nanoseconds(now_ns);
            m_Hello->FrameVector()[0].Height(1920);
            m_Hello->FrameVector()[0].Width(1080);
            m_Hello->FrameVector()[0].Bits()[100] = 22;

            // write data
            writer_->write(sample);
            std::cout << "Sending sample, index=" << m_Hello->FrameIdx() 
                << ", write cost " << t.count_ms() << "ms" << std::endl;
        }


        // // no zeor copy
        // ++msgsent;
        // m_Hello->FrameIdx(msgsent);
        // m_Hello->FrameVector()[0].Width(1080);
        // m_Hello->FrameVector()[0].Height(1080);
        // m_Hello->FrameVector()[0].Bits()[100] = 22;
        // auto now = std::chrono::system_clock::now();
        // auto now_ns = std::chrono::duration_cast<std::chrono::nanoseconds>(now.time_since_epoch()).count();
        // m_Hello->GroupTimeStamp().Nanoseconds(now_ns);
        // myTimer t;
        // writer_->write(m_Hello);
        // std::cout << "Sending sample, index=" << m_Hello->FrameIdx() 
        //     << ", write cost " << t.count_ms() << "ms" << std::endl;

        std::this_thread::sleep_for(std::chrono::milliseconds(40));
    }
}
