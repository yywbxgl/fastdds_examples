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
 * @file helloPublisher.cpp
 * This file contains the implementation of the publisher functions.
 *
 * This file was generated by the tool fastcdrgen.
 */


#include "helloPublisher.h"
#include "helloPubSubTypes.h"

#include <fastdds/dds/domain/DomainParticipantFactory.hpp>
#include <fastdds/dds/publisher/Publisher.hpp>
#include <fastdds/dds/publisher/qos/PublisherQos.hpp>
#include <fastdds/dds/publisher/DataWriter.hpp>
#include <fastdds/dds/publisher/qos/DataWriterQos.hpp>

#include <thread>
#include <chrono>

using namespace eprosima::fastdds::dds;

helloPublisher::helloPublisher()
    : participant_(nullptr)
    , publisher_(nullptr)
    , topic_(nullptr)
    , writer_(nullptr)
    , type_(new HelloMsgPubSubType())
{
}

helloPublisher::~helloPublisher()
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

bool helloPublisher::init()
{
    /* Initialize data_ here */

    //CREATE THE PARTICIPANT
    // DomainParticipantFactoryQos factory_qos;
    // factory_qos.entity_factory().autoenable_created_entities = false;
    // DomainParticipantFactory::get_instance()->set_qos(factory_qos);

    DomainParticipantQos pqos;
    pqos.name("Participant_pub");
    // Configure persistence service plugin for DomainParticipant
    // pqos.properties().properties().emplace_back("dds.persistence.plugin", "builtin.SQLITE3");
    // pqos.properties().properties().emplace_back("dds.persistence.sqlite3.filename", "persistence_sun.db");
        
    participant_ = DomainParticipantFactory::get_instance()->create_participant(0, pqos);
    if (participant_ == nullptr)
    {
        return false;
    }

    //REGISTER THE TYPE
    type_.register_type(participant_);

    //CREATE THE PUBLISHER
    PublisherQos pub_qos;
    publisher_ = participant_->create_publisher(pub_qos, nullptr);
    if (publisher_ == nullptr)
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


    DataWriterQos wqos;
    wqos.reliability().kind = RELIABLE_RELIABILITY_QOS;
    // wqos.deadline().period = 1212 * 1e-3;
    wqos.durability().kind = TRANSIENT_LOCAL_DURABILITY_QOS;
    // wqos.properties().properties().emplace_back("dds.persistence.guid",
    //     "77.72.69.74.65.72.5f.70.65.72.73.5f|67.75.69.64");
    wqos.history().kind = KEEP_LAST_HISTORY_QOS;
    wqos.history().depth = 100;
    wqos.resource_limits().max_samples   = 5000;
    wqos.resource_limits().max_instances   = 10;
    wqos.resource_limits().max_samples_per_instance = 400;

    writer_ = publisher_->create_datawriter(topic_, wqos, &listener_);
    // std::cout << "--- writer giud =" << writer_->guid();
    if (writer_ == nullptr)
    {
        return false;
    }

    std::cout << "HelloMsg DataWriter created." << std::endl;
    return true;
}

void helloPublisher::PubListener::on_publication_matched(
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


void helloPublisher::PubListener::on_offered_deadline_missed(
        DataWriter* writer,
        const OfferedDeadlineMissedStatus& status)
{
    (void)writer;
    std::cout << "Deadline missed: total_count="  << status.total_count 
        << ", total_count_change=" <<  status.total_count_change  << std::endl;
    // std::cout << "Deadline missed for last_instance_handle: " << status.last_instance_handle << std::endl;
}

void helloPublisher::PubListener::on_offered_incompatible_qos(
    eprosima::fastdds::dds::DataWriter* writer,
    const eprosima::fastdds::dds::OfferedIncompatibleQosStatus& status) 
{
    (void)writer;
    std::cout << "on_offered_incompatible_qos: last_policy_id="  << status.last_policy_id  << std::endl;
}


void helloPublisher::run()
{
    std::cout << "HelloMsg DataWriter waiting for DataReaders." << std::endl;

    // while (listener_.matched == 0)
    // {
    //     std::this_thread::sleep_for(std::chrono::milliseconds(250)); // Sleep 250 ms
    // }

    // Publication code

    HelloMsg st;

    /* Initialize your structure here */

    int msgsent = 0;
    while(1) {

        // write data
        msgsent ++;
     
        auto now = std::chrono::system_clock::now();
        auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(now.time_since_epoch()).count();
        std::cout << "Sending sample, index=" << st.index()  << ", time_stamp=" << ms <<  std::endl; 

        st.index(msgsent);
        st.time_stamp(ms);
        writer_->write(&st);

        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }

}
