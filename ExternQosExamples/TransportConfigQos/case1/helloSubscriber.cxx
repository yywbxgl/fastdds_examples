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
#include <fastdds/dds/domain/DomainParticipant.hpp>
#include <fastdds/dds/subscriber/DataReader.hpp>
#include <fastdds/dds/subscriber/SampleInfo.hpp>
#include <fastdds/dds/subscriber/Subscriber.hpp>
#include <fastdds/dds/subscriber/qos/DataReaderQos.hpp>
#include <fastdds/dds/core/LoanableSequence.hpp>
#include <fastdds/rtps/attributes/RTPSParticipantAttributes.h>
#include <fastdds/rtps/transport/shared_mem/SharedMemTransportDescriptor.h>
#include <fastdds/rtps/transport/UDPv4TransportDescriptor.h>

#include "helloSubscriber.h"
#include "helloPubSubTypes.h"

using namespace eprosima::fastdds::dds;
using namespace eprosima::fastdds::rtps;
using namespace eprosima::fastrtps::rtps;

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
    // CREATE THE PARTICIPANT
    DomainParticipantQos pqos;
    pqos.name("Participant_sub");
    // pqos.wire_protocol().builtin.discovery_config.discoveryProtocol = 
    //     eprosima::fastrtps::rtps::DiscoveryProtocol_t::SIMPLE;
    // StatusMask par_mask = StatusMask::none();
    // participant_ = DomainParticipantFactory::get_instance()->create_participant(0, pqos, &listener_participant_, par_mask);
    
     // Explicit configuration of SharedMem transport
    // pqos.transport().use_builtin_transports = false;
    pqos.transport().use_builtin_transports = true;


    // auto udp_descriptor =std::make_shared<eprosima::fastdds::rtps::UDPv4TransportDescriptor>();
    // udp_descriptor->maxMessageSize = 9126;
    // udp_descriptor->sendBufferSize = 9126;
    // udp_descriptor->receiveBufferSize = 9126;
    // pqos.transport().user_transports.push_back(udp_descriptor);

    // auto sm_transport = std::make_shared<SharedMemTransportDescriptor>();
    // sm_transport->segment_size(2 * 1024 * 1024);
    // pqos.transport().user_transports.push_back(sm_transport);
    
    participant_ = DomainParticipantFactory::get_instance()->create_participant(0, pqos);
    if (participant_ == nullptr)
    {
        return false;
    }

    //REGISTER THE TYPE
    type_.register_type(participant_);

    //CREATE THE SUBSCRIBER
    SubscriberQos sqos ;
    // sqos.entity_factory().autoenable_created_entities = false;
    subscriber_ = participant_->create_subscriber(sqos, nullptr);
    if (subscriber_ == nullptr){
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
    DataReaderQos rqos;
    rqos.reliability().kind = RELIABLE_RELIABILITY_QOS;
    rqos.durability().kind = TRANSIENT_LOCAL_DURABILITY_QOS;
    rqos.history().kind = KEEP_LAST_HISTORY_QOS;
    rqos.history().depth = 30;
    rqos.resource_limits().max_samples = 50;
    rqos.resource_limits().allocated_samples = 20;
    // rqos.resource_limits().max_instances   = 1;
    // rqos.resource_limits().max_samples_per_instance = 50;
    // rqos.data_sharing().off();


    reader_ = subscriber_->create_datareader(topic_, rqos, &listener_);
    if (reader_ == nullptr)
    {
        return false;
    }
    listener_participant_.reader_ = reader_;


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


static int count = 0;

void helloSubscriber::SubListener::on_sample_rejected(
    eprosima::fastdds::dds::DataReader* reader, 
    const eprosima::fastdds::dds::SampleRejectedStatus& status)
{
    std::cout << "on_sample_rejected"   << std::endl;
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
                auto diff = ms - st.time_stamp();
                std::cout << "Sample received, index=" << st.index()  << ", time_stamp=" <<  st.time_stamp()
                     << ", now_ms=" << ms <<  ", delay_ms=" << diff << std::endl; 
            }
        }
        reader->return_loan(data_seq, info_seq);
    }
}

void helloSubscriber::run()
{
    std::cout << "Waiting for Data, press Enter to stop the DataReader. " << std::endl;
    std::cin.ignore();
    std::cout << "Shutting down the Subscriber." << std::endl;
}



/* Custom Callback on_participant_discovery */
void  helloSubscriber::CustomDomainParticipantListener::on_participant_discovery(
    DomainParticipant* participant,
    eprosima::fastrtps::rtps::ParticipantDiscoveryInfo&& info) 
{
    (void)participant;
    switch (info.status){
        case eprosima::fastrtps::rtps::ParticipantDiscoveryInfo::DISCOVERED_PARTICIPANT:
            /* Process the case when a new DomainParticipant was found in the domain */
            std::cout << "New DomainParticipant '" << info.info.m_participantName <<
                "' with ID '" << info.info.m_guid.entityId << "' and GuidPrefix '" <<
                info.info.m_guid.guidPrefix << "' discovered." << std::endl;
            break;
        case eprosima::fastrtps::rtps::ParticipantDiscoveryInfo::CHANGED_QOS_PARTICIPANT:
            /* Process the case when a DomainParticipant changed its QOS */
            break;
        case eprosima::fastrtps::rtps::ParticipantDiscoveryInfo::REMOVED_PARTICIPANT:
            /* Process the case when a DomainParticipant was removed from the domain */
            std::cout << "New DomainParticipant '" << info.info.m_participantName <<
                "' with ID '" << info.info.m_guid.entityId << "' and GuidPrefix '" <<
                info.info.m_guid.guidPrefix << "' left the domain." << std::endl;
            break;
    }
}


void helloSubscriber::CustomDomainParticipantListener::on_subscriber_discovery(
    DomainParticipant* participant,
    eprosima::fastrtps::rtps::ReaderDiscoveryInfo&& info) {

    (void)participant;
        switch (info.status){
            case eprosima::fastrtps::rtps::ReaderDiscoveryInfo::DISCOVERED_READER:
                /* Process the case when a new subscriber was found in the domain */
                std::cout << "New DataReader subscribed to topic '" << info.info.topicName() <<
                    "' of type '" << info.info.typeName() << "' discovered";
                break;
            case eprosima::fastrtps::rtps::ReaderDiscoveryInfo::CHANGED_QOS_READER:
                /* Process the case when a subscriber changed its QOS */
                break;
            case eprosima::fastrtps::rtps::ReaderDiscoveryInfo::REMOVED_READER:
                /* Process the case when a subscriber was removed from the domain */
                std::cout << "New DataReader subscribed to topic '" << info.info.topicName() <<
                    "' of type '" << info.info.typeName() << "' left the domain.";
                break;
    }

}

void helloSubscriber::CustomDomainParticipantListener::on_publisher_discovery(
    DomainParticipant* participant,
    eprosima::fastrtps::rtps::WriterDiscoveryInfo&& info) 
{
    (void)participant;
    switch (info.status){
        case eprosima::fastrtps::rtps::WriterDiscoveryInfo::DISCOVERED_WRITER:
            /* Process the case when a new publisher was found in the domain */
            std::cout << "New DataWriter publishing under topic '" << info.info.topicName() <<
                "' of type '" << info.info.typeName() << "' discovered. ";
            std::cout << "  Remote Deadline Qos Duriability is :" << info.info.m_qos.m_durability.kind << std::endl;
  

            break;
        case eprosima::fastrtps::rtps::WriterDiscoveryInfo::CHANGED_QOS_WRITER:
            /* Process the case when a publisher changed its QOS */
            break;
        case eprosima::fastrtps::rtps::WriterDiscoveryInfo::REMOVED_WRITER:
            /* Process the case when a publisher was removed from the domain */
            std::cout << "New DataWriter publishing under topic '" << info.info.topicName() <<
                "' of type '" << info.info.typeName() << "' left the domain.";
            break;
    }

}

void helloSubscriber::CustomDomainParticipantListener::on_type_discovery(
    DomainParticipant* participant,
    const eprosima::fastrtps::rtps::SampleIdentity& request_sample_id,
    const eprosima::fastrtps::string_255& topic,
    const eprosima::fastrtps::types::TypeIdentifier* identifier,
    const eprosima::fastrtps::types::TypeObject* object,
    eprosima::fastrtps::types::DynamicType_ptr dyn_type) {

    (void)participant, (void)request_sample_id, (void)topic, (void)identifier, (void)object, (void)dyn_type;
    std::cout << "New data type of topic '" << topic << "' discovered." << std::endl;
        
}