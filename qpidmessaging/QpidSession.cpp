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

#include "qpidmessaging/QpidSession.h"

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

}

bool QpidSession::operator==(const QpidSession& other)
{

}

cms::MessageTransformer* QpidSession::getMessageTransformer()
{

}

void QpidSession::setMessageTransformer(cms::MessageTransformer* transformer)
{

}

void QpidSession::unsubscribe(const std::string& name)
{

}

bool QpidSession::isTransacted()
{

}

cms::Session::AcknowledgeMode QpidSession::getAcknowledgeMode()
{

}

cms::MapMessage* QpidSession::createMapMessage()
{

}

cms::TextMessage* QpidSession::createTextMessage(const std::string& text)
{

}

cms::TextMessage* QpidSession::createTextMessage()
{

}

cms::StreamMessage* QpidSession::createStreamMessage()
{

}

cms::BytesMessage* QpidSession::createBytesMessage(const unsigned char* bytes, int bytesSize)
{

}

cms::BytesMessage* QpidSession::createBytesMessage()
{

}

cms::Message* QpidSession::createMessage()
{

}

cms::TemporaryTopic* QpidSession::createTemporaryTopic()
{

}

cms::TemporaryQueue* QpidSession::createTemporaryQueue()
{

}

cms::Topic* QpidSession::createTopic(const std::string& topicName)
{

}

cms::Queue* QpidSession::createQueue(const std::string& queueName)
{

}

cms::QueueBrowser* QpidSession::createBrowser(const cms::Queue* queue, const std::string& selector)
{

}

cms::QueueBrowser* QpidSession::createBrowser(const cms::Queue* queue)
{

}

cms::MessageProducer* QpidSession::createProducer(const cms::Destination* destination)
{

}

cms::MessageConsumer* QpidSession::createDurableConsumer(const cms::Topic* destination, const std::string& name, const std::string& selector, bool noLocal)
{

}

cms::MessageConsumer* QpidSession::createConsumer(const cms::Destination* destination, const std::string& selector, bool noLocal)
{

}

cms::MessageConsumer* QpidSession::createConsumer(const cms::Destination* destination, const std::string& selector)
{

}

cms::MessageConsumer* QpidSession::createConsumer(const cms::Destination* destination)
{

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
