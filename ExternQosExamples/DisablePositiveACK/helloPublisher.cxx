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
#include <fastdds/rtps/transport/shared_mem/SharedMemTransportDescriptor.h>
#include <fastdds/rtps/transport/UDPv4TransportDescriptor.h>

#include <thread>
#include <chrono>

using namespace eprosima::fastdds::dds;
using namespace eprosima::fastdds::rtps;
using namespace eprosima::fastrtps::rtps;

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

bool helloPublisher::init(int flag)
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
    
    // Explicit configuration of SharedMem transport
    // pqos.transport().use_builtin_transports = false;
    pqos.transport().use_builtin_transports = true;


    // auto udp_descriptor =std::make_shared<eprosima::fastdds::rtps::UDPv4TransportDescriptor>();
    // udp_descriptor->maxMessageSize = 9126;
    // udp_descriptor->sendBufferSize = 9126;
    // udp_descriptor->receiveBufferSize = 9126;
    // pqos.transport().user_transports.push_back(udp_descriptor);

    // auto shm_transport = std::make_shared<SharedMemTransportDescriptor>();
    // shm_transport->segment_size(2 * 1024 * 1024);
    // pqos.transport().user_transports.push_back(shm_transport);

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
    wqos.durability().kind = TRANSIENT_LOCAL_DURABILITY_QOS;
    wqos.history().kind = KEEP_LAST_HISTORY_QOS;
    wqos.history().depth = 30;
    wqos.resource_limits().max_samples   = 50;
    wqos.resource_limits().allocated_samples   = 20;
    // wqos.resource_limits().max_instances   = 1;
    // wqos.resource_limits().max_samples_per_instance = 100;
    // wqos.publish_mode().kind = ASYNCHRONOUS_PUBLISH_MODE;
    // wqos.reliable_writer_qos().times.heartbeatPeriod.seconds = 2;
    // wqos.reliable_writer_qos().times.heartbeatPeriod.nanosec = 200 * 1000 * 1000;
    if (flag == 0) {
        wqos.reliable_writer_qos().disable_positive_acks.enabled = true;
    } else {
        wqos.reliable_writer_qos().disable_positive_acks.enabled = false;
        wqos.reliable_writer_qos().disable_positive_acks.duration = 100 * 1e-3; 
    }



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

void helloPublisher::PubListener::on_liveliness_lost(
        eprosima::fastdds::dds::DataWriter* writer,
        const eprosima::fastdds::dds::LivelinessLostStatus& status) 
{
    (void)writer;
     std::cout << "on_liveliness_lost: " <<  std::endl;

}


void helloPublisher::run()
{
    std::cout << "HelloMsg DataWriter waiting for DataReaders." << std::endl;

    // while (listener_.matched == 0)
    // {
    //     std::this_thread::sleep_for(std::chrono::milliseconds(250)); // Sleep 250 ms
    // }


    HelloMsg st;

    /* Initialize your structure here */

    int msgsent = 0;
    while(1) {

        // write data
        msgsent ++;
     
        size_t data_size = st.data().size();
        std::string s = "Index=" + std::to_string(msgsent);
        strcpy(&st.data()[data_size - s.length() - 1], s.c_str());

        auto now = std::chrono::system_clock::now();
        auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(now.time_since_epoch()).count();

        st.index(msgsent);
        st.time_stamp(ms);

        bool ret = writer_->write(&st);
        if (ret) 
        {
            std::cout << "Sending sample, index=" << st.index()  << ", time_stamp=" << ms <<  std::endl; 
        } else {
            std::cout << "writer faild! resend data." << std::endl;
            msgsent --;
        }

        std::this_thread::sleep_for(std::chrono::milliseconds(20));
    }

}
