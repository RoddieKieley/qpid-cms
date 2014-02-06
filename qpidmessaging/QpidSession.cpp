/*
 * Copyright 2014 <copyright holder> <email>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#include "QpidSession.h"

#include "QpidMessage.h"
#include "QpidBytesMessage.h"
#include "QpidMapMessage.h"
#include "QpidStreamMessage.h"
#include "QpidTextMessage.h"
#include "QpidTempTopic.h"
#include "QpidTopic.h"
#include "QpidTempQueue.h"
#include "QpidQueue.h"
#include "QpidMessageProducer.h"
#include "QpidMessageConsumer.h"
#include "QpidExceptions.h"

#include <qpid/messaging/Connection.h>

namespace qpid {
namespace cmsimpl {

QpidSession::QpidSession(cms::Session::AcknowledgeMode acknowledgeMode, qpid::messaging::Connection& connection) :
    acknowledgeMode_(acknowledgeMode),
    session_(connection.createSession())
{
}

QpidSession::~QpidSession()
{
}

cms::MessageTransformer* QpidSession::getMessageTransformer() const
{
    throw NotImplementedYet();
}

void QpidSession::setMessageTransformer(cms::MessageTransformer* transformer)
{
    throw NotImplementedYet();
}

void QpidSession::unsubscribe(const std::string& name)
{

}

bool QpidSession::isTransacted() const
{
    throw NotImplementedYet();
}

cms::Session::AcknowledgeMode QpidSession::getAcknowledgeMode() const
{
    return acknowledgeMode_;
}

cms::MapMessage* QpidSession::createMapMessage()
{
    return new QpidMapMessage;
}

cms::TextMessage* QpidSession::createTextMessage(const std::string& text)
{
    return new QpidTextMessage(text);
}

cms::TextMessage* QpidSession::createTextMessage()
{
    return new QpidTextMessage;
}

cms::StreamMessage* QpidSession::createStreamMessage()
{
    return new QpidStreamMessage;
}

cms::BytesMessage* QpidSession::createBytesMessage(const unsigned char* bytes, int bytesSize)
{
    return new QpidBytesMessage(bytes, bytesSize);
}

cms::BytesMessage* QpidSession::createBytesMessage()
{
    return new QpidBytesMessage;
}

cms::Message* QpidSession::createMessage()
{
    return new QpidMessage;
}

cms::TemporaryTopic* QpidSession::createTemporaryTopic()
{
    return new QpidTempTopic;
}

cms::TemporaryQueue* QpidSession::createTemporaryQueue()
{
    return new QpidTempQueue;
}

cms::Topic* QpidSession::createTopic(const std::string& topicName)
{
    return new QpidTopic(topicName);
}

cms::Queue* QpidSession::createQueue(const std::string& queueName)
{
    return new QpidQueue(queueName);
}

cms::QueueBrowser* QpidSession::createBrowser(const cms::Queue* queue, const std::string& selector)
{
    throw NotImplementedYet();
}

cms::QueueBrowser* QpidSession::createBrowser(const cms::Queue* queue)
{
    throw NotImplementedYet();
}

cms::MessageProducer* QpidSession::createProducer(const cms::Destination* destination)
{
    return new QpidMessageProducer(destination);
}

cms::MessageConsumer* QpidSession::createDurableConsumer(const cms::Topic* destination, const std::string& name, const std::string& selector, bool noLocal)
{
    throw NotImplementedYet();
}

cms::MessageConsumer* QpidSession::createConsumer(const cms::Destination* destination, const std::string& selector, bool noLocal)
{
    throw NotImplementedYet();
}

cms::MessageConsumer* QpidSession::createConsumer(const cms::Destination* destination, const std::string& selector)
{
    throw NotImplementedYet();
}

cms::MessageConsumer* QpidSession::createConsumer(const cms::Destination* destination)
{
    return new QpidMessageConsumer(destination);
}

void QpidSession::recover()
{

}

void QpidSession::rollback()
{

}

void QpidSession::commit()
{

}

void QpidSession::close()
{

}

void QpidSession::start()
{

}

void QpidSession::stop()
{

}

}
}
