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

#include "QpidExceptions.h"

namespace qpid {
namespace cmsimpl {

QpidSession::QpidSession()
{

}

QpidSession::QpidSession(const QpidSession& other)
{

}

QpidSession::~QpidSession()
{

}

QpidSession& QpidSession::operator=(const QpidSession& other)
{
    throw NotImplementedYet();
}

bool QpidSession::operator==(const QpidSession& other)
{
    throw NotImplementedYet();
}

cms::MessageTransformer* QpidSession::getMessageTransformer()
{
    throw NotImplementedYet();
}

void QpidSession::setMessageTransformer(cms::MessageTransformer* transformer)
{

}

void QpidSession::unsubscribe(const std::string& name)
{

}

bool QpidSession::isTransacted()
{
    throw NotImplementedYet();
}

cms::Session::AcknowledgeMode QpidSession::getAcknowledgeMode()
{
    throw NotImplementedYet();
}

cms::MapMessage* QpidSession::createMapMessage()
{
    throw NotImplementedYet();
}

cms::TextMessage* QpidSession::createTextMessage(const std::string& text)
{
    throw NotImplementedYet();
}

cms::TextMessage* QpidSession::createTextMessage()
{
    throw NotImplementedYet();
}

cms::StreamMessage* QpidSession::createStreamMessage()
{
    throw NotImplementedYet();
}

cms::BytesMessage* QpidSession::createBytesMessage(const unsigned char* bytes, int bytesSize)
{
    throw NotImplementedYet();
}

cms::BytesMessage* QpidSession::createBytesMessage()
{
    throw NotImplementedYet();
}

cms::Message* QpidSession::createMessage()
{
    throw NotImplementedYet();
}

cms::TemporaryTopic* QpidSession::createTemporaryTopic()
{
    throw NotImplementedYet();
}

cms::TemporaryQueue* QpidSession::createTemporaryQueue()
{
    throw NotImplementedYet();
}

cms::Topic* QpidSession::createTopic(const std::string& topicName)
{
    throw NotImplementedYet();
}

cms::Queue* QpidSession::createQueue(const std::string& queueName)
{
    throw NotImplementedYet();
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
    throw NotImplementedYet();
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
    throw NotImplementedYet();
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
