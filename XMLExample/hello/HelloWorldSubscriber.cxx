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


#include "HelloWorldSubscriber.h"
#include "HelloWorldPubSubTypes.h"

using namespace eprosima::fastdds::dds;

HelloWorldSubscriber::HelloWorldSubscriber()
    : participant_(nullptr)
    , subscriber_(nullptr)
    , topic_(nullptr)
    , reader_(nullptr)
    , type_(new HelloWorldPubSubType())
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
    //CREATE THE PARTICIPANT

    if (ReturnCode_t::RETCODE_OK !=
        DomainParticipantFactory::get_instance()->load_XML_profiles_file("../HelloWorldSubscriber.xml"))
    {
        return false;
    }

    participant_ = DomainParticipantFactory::get_instance()->create_participant_with_profile("participant_profile");
    if (participant_ == nullptr)
    {
        return false;
    }

    //REGISTER THE TYPE
    type_.register_type(participant_);

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
    HelloWorld st;
    SampleInfo info;

    if (reader->take_next_sample(&st, &info) == ReturnCode_t::RETCODE_OK)
    {
        if (info.valid_data)
        {
            // Print your structure data here.
            ++samples;
            std::cout << "Sample received, index=" << st.index() << std::endl;
        }
    }
}

void HelloWorldSubscriber::run()
{
    std::cout << "Waiting for Data, press Enter to stop the DataReader. " << std::endl;
    std::cin.ignore();
    std::cout << "Shutting down the Subscriber." << std::endl;
}
