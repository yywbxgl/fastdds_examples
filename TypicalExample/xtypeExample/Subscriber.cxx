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
 * @file HelloWorldSubscriber.cpp
 * This file contains the implementation of the subscriber functions.
 *
 * This file was generated by the tool fastcdrgen.
 */

#include <fastdds/dds/domain/DomainParticipantFactory.hpp>
#include <fastdds/dds/subscriber/DataReader.hpp>
#include <fastdds/dds/subscriber/SampleInfo.hpp>
#include <fastdds/dds/subscriber/Subscriber.hpp>
#include <fastdds/dds/subscriber/qos/DataReaderQos.hpp>
#include <fastrtps/xmlparser/XMLProfileManager.h>
#include <fastrtps/types/DynamicDataFactory.h>
#include <fastrtps/types/DynamicTypeMember.h>

#include <chrono>

#include "Subscriber.h"

using namespace eprosima::fastdds::dds;

HelloWorldSubscriber::HelloWorldSubscriber()
    : participant_(nullptr)
    , subscriber_(nullptr)
    , topic_(nullptr)
    , reader_(nullptr)
    , listener_(this)
{
}

HelloWorldSubscriber::~HelloWorldSubscriber()
{
    if (reader_ != nullptr)
    {
        subscriber_->delete_datareader(reader_);
    }
    if (topic_ != nullptr)
    {
        participant_->delete_topic(topic_);
    }
    if (subscriber_ != nullptr)
    {
        participant_->delete_subscriber(subscriber_);
    }
    DomainParticipantFactory::get_instance()->delete_participant(participant_);
}

bool HelloWorldSubscriber::init()
{
    // LOAD XML
    if (ReturnCode_t::RETCODE_OK !=
        DomainParticipantFactory::get_instance()->load_XML_profiles_file("../Subscriber.xml"))
    {
        return false;
    }
    if (ReturnCode_t::RETCODE_OK !=
        DomainParticipantFactory::get_instance()->load_XML_profiles_file("../Camera.xml"))
    {
        return false;
    }

    participant_ = DomainParticipantFactory::get_instance()->create_participant_with_profile("participant_profile");
    if (participant_ == nullptr)
    {
        return false;
    }

    //REGISTER THE TYPE
    dyn_type = eprosima::fastrtps::xmlparser::XMLProfileManager::getDynamicTypeByName("GroupFrame")->build();
    TypeSupport m_type(new eprosima::fastrtps::types::DynamicPubSubType(dyn_type));
    m_type.get()->auto_fill_type_information(false);
    m_type.get()->auto_fill_type_object(false); // m_type.get()->auto_fill_type_object(true); //  bug
    m_type.register_type(participant_);


    //CREATE THE SUBSCRIBER
    subscriber_ = participant_->create_subscriber(SUBSCRIBER_QOS_DEFAULT, nullptr);
    if (subscriber_ == nullptr)
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

    //CREATE THE READER
    reader_ =  subscriber_->create_datareader_with_profile(topic_, "datawreader_profile", &listener_);
    if (reader_ == nullptr)
    {
        return false;
    }

    return true;
}

void HelloWorldSubscriber::SubListener::on_subscription_matched(
        DataReader*,
        const SubscriptionMatchedStatus& info)
{
    if (info.current_count_change == 1)
    {
        matched = info.total_count;
        std::cout << "Subscriber matched." << std::endl;
    }
    else if (info.current_count_change == -1)
    {
        matched = info.total_count;
        std::cout << "Subscriber unmatched." << std::endl;
    }
    else
    {
        std::cout << info.current_count_change
                  << " is not a valid value for SubscriptionMatchedStatus current count change" << std::endl;
    }
}

void HelloWorldSubscriber::SubListener::on_data_available(
        DataReader* reader)
{
    // Take data
    auto m_Hello = eprosima::fastrtps::types::DynamicDataFactory::get_instance()->create_data(subscriber_->dyn_type);
    SampleInfo info;
    if (reader->take_next_sample(m_Hello, &info) == ReturnCode_t::RETCODE_OK)
    {
        if (info.valid_data)
        {
            // Print your structure data here.
            ++samples;
            auto now = std::chrono::system_clock::now();
            auto now_ns = std::chrono::duration_cast<std::chrono::nanoseconds>(now.time_since_epoch()).count();

            eprosima::fastrtps::types::DynamicData* inner = m_Hello->loan_value(m_Hello->get_member_id_by_name("GroupTimeStamp"));
            auto sample_time = inner->get_uint64_value(inner->get_member_id_by_name("Nanoseconds")); 
            auto delay = ((int64_t)now_ns - (int64_t)sample_time)/1000000.0;
            std::cout << "Sample received, index=" << 
                m_Hello->get_uint64_value(m_Hello->get_member_id_by_name("FrameIdx")) << " delay=" << delay << std::endl;
            m_Hello->return_loaned_value(inner);

            // eprosima::fastrtps::types::DynamicData* inner2 = m_Hello->loan_value(2);
            // uint32_t ret = inner2->get_member_id_by_name("Width");
            // std::cout << "ret id " << ret << std::endl;
            // uint16_t weight = inner2->get_uint16_value(inner2->get_member_id_by_name("Width"));
            // uint16_t height = inner2->get_uint16_value(inner2->get_member_id_by_name("Height"));
            // std::cout << "height=" << weight << " weight=" <<height << std::endl;
            // m_Hello->return_loaned_value(inner2);
        }
    }
    eprosima::fastrtps::types::DynamicDataFactory::get_instance()->delete_data(m_Hello);

}

void HelloWorldSubscriber::run()
{
    std::cout << "Waiting for Data, press Enter to stop the DataReader. " << std::endl;
    std::cin.ignore();
    std::cout << "Shutting down the Subscriber." << std::endl;
}
