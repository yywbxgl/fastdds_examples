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
 * @file helloSubscriber.cpp
 * This file contains the implementation of the subscriber functions.
 *
 * This file was generated by the tool fastcdrgen.
 */

#include <fastdds/dds/domain/DomainParticipantFactory.hpp>
#include <fastdds/dds/subscriber/DataReader.hpp>
#include <fastdds/dds/subscriber/SampleInfo.hpp>
#include <fastdds/dds/subscriber/Subscriber.hpp>
#include <fastdds/dds/subscriber/qos/DataReaderQos.hpp>
#include <fastdds/dds/core/LoanableSequence.hpp>

#include "helloSubscriber.h"
#include "helloPubSubTypes.h"

using namespace eprosima::fastdds::dds;

helloSubscriber::helloSubscriber()
    : participant_(nullptr)
    , subscriber_(nullptr)
    , topic_(nullptr)
    , reader_(nullptr)
    , type_(new HelloMsgPubSubType())
{
}

helloSubscriber::~helloSubscriber()
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

bool helloSubscriber::init()
{
    //CREATE THE PARTICIPANT
    DomainParticipantFactoryQos factory_qos;
    factory_qos.entity_factory().autoenable_created_entities = false;
    DomainParticipantFactory::get_instance()->set_qos(factory_qos);

    DomainParticipantQos pqos;
    pqos.name("Participant_sub");
        
    participant_ = DomainParticipantFactory::get_instance()->create_participant(0, pqos);
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
    topic_ = participant_->create_topic(
        "helloTopic",
        type_.get_type_name(),
        TOPIC_QOS_DEFAULT);
    if (topic_ == nullptr)
    {
        return false;
    }

    //CREATE THE READER
    DataReaderQos rqos = DATAREADER_QOS_DEFAULT;
    rqos.reliability().kind = RELIABLE_RELIABILITY_QOS;
    // rqos.durability().kind = TRANSIENT_LOCAL_DURABILITY_QOS;



    reader_ = subscriber_->create_datareader(topic_, rqos, &listener_);
    if (reader_ == nullptr)
    {
        return false;
    }

    return true;
}

void helloSubscriber::SubListener::on_subscription_matched(
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

void helloSubscriber::SubListener::on_requested_deadline_missed(
        DataReader* reader,
        const RequestedDeadlineMissedStatus& status)
{
    (void)reader;
    std::cout << "Deadline missed: total_count="  << status.total_count 
        << ", total_count_change=" <<  status.total_count_change  << std::endl;
    // std::cout << "Deadline missed for last_instance_handle: " << status.last_instance_handle << std::endl;
}


void helloSubscriber::SubListener::on_requested_incompatible_qos(
    DataReader* reader,
    const RequestedIncompatibleQosStatus& status) {
    (void)reader;
    std::cout << "on_requested_incompatible_qos: last_policy_id="  << status.last_policy_id  << std::endl;
}

void helloSubscriber::SubListener::on_sample_lost(
    eprosima::fastdds::dds::DataReader* reader, 
    const eprosima::fastdds::dds::SampleLostStatus& status) 
{
    std::cout << "on_sample_lost" << std::endl;
}

void helloSubscriber::SubListener::on_sample_rejected(
    eprosima::fastdds::dds::DataReader* reader, 
    const eprosima::fastdds::dds::SampleRejectedStatus& status)
{
    std::cout << "on_sample_rejected" << std::endl;
}

void helloSubscriber::SubListener::on_liveliness_changed(
    eprosima::fastdds::dds::DataReader* reader, 
const eprosima::fastdds::dds::LivelinessChangedStatus& status) 
{
    std::cout << "on_liveliness_changed" << std::endl;
}

void helloSubscriber::SubListener::on_data_available(
        DataReader* reader)
{

    FASTDDS_CONST_SEQUENCE(HelloMsgSeq, HelloMsg);

    // Take data
    HelloMsgSeq data_seq;
    SampleInfoSeq info_seq;

    while (ReturnCode_t::RETCODE_OK == reader->take(data_seq, info_seq))
    {
        for (LoanableCollection::size_type i = 0; i < info_seq.length(); ++i)
        {
            if (info_seq[i].valid_data)
            {
                // Print your structure data here.
                const HelloMsg& st = data_seq[i];

                auto now = std::chrono::system_clock::now();
                auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(now.time_since_epoch()).count();
                std::cout << "Sample received, index=" << st.index()  << ", time_stamp=" <<  st.time_stamp()
                     << ", now_ms=" << ms <<  std::endl; 
            }
        }
        reader->return_loan(data_seq, info_seq);
    }
}

void helloSubscriber::run()
{
    std::cout << "press Enter to enabel DomainParticipant" << std::endl;
    std::cin.ignore();
    participant_->enable();


    std::cout << "press Enter to disable DomainParticipant" << std::endl;
    std::cin.ignore();
    reader_->close();


    std::cout << "Waiting for Data, press Enter to stop the DataReader. " << std::endl;
    std::cin.ignore();
    std::cout << "Shutting down the Subscriber." << std::endl;
}
