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
#include "QpidConnection.h"
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

#include "cms/CMSException.h"

#include <qpid/Exception.h>
#include <qpid/messaging/Connection.h>
#include <qpid/messaging/Session.h>

namespace qpid {
namespace cmsimpl {

void QpidSession::threadWorker()
{
  do {
    try {
        qpid::messaging::Receiver r;
        if (!session_.nextReceiver(r, qpid::messaging::Duration(100))) continue;
        auto n = r.getName();
        {   std::lock_guard<std::mutex> lk(lock_);
            auto i = consumers_.find(n);
            if (i == consumers_.end() )
                continue;

            i->second->serviceMessages();
        }
    } catch (qpid::ClosedException) {
      // Session was closed - exit thread;
      return;
    } catch (cms::CMSException& e) {
      connection_.exceptionListener_->onException(e);
    } catch (std::exception& e) {
      connection_.exceptionListener_->onException(cms::CMSException(e.what()));
    }
  } while (true);
}

void QpidSession::addConsumerListener(const std::string& name, QpidMessageConsumer* consumer)
{
    std::lock_guard<std::mutex> lk(lock_);
    consumers_[name] = consumer;
}

QpidSession::QpidSession(QpidConnection& connection, cms::Session::AcknowledgeMode acknowledgeMode) :
    connection_(connection),
    acknowledgeMode_(acknowledgeMode),
    session_(acknowledgeMode==SESSION_TRANSACTED
             ? connection.connection_.createTransactionalSession()
             : connection.connection_.createSession())
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
    return acknowledgeMode_==SESSION_TRANSACTED;
}

cms::Session::AcknowledgeMode QpidSession::getAcknowledgeMode() const
{
    return acknowledgeMode_;
}

cms::MapMessage* QpidSession::createMapMessage()
{
    return new QpidMapMessage(*this);
}

cms::TextMessage* QpidSession::createTextMessage(const std::string& text)
{
    return new QpidTextMessage(*this, text);
}

cms::TextMessage* QpidSession::createTextMessage()
{
    return new QpidTextMessage(*this);
}

cms::StreamMessage* QpidSession::createStreamMessage()
{
    return new QpidStreamMessage(*this);
}

cms::BytesMessage* QpidSession::createBytesMessage(const unsigned char* bytes, int bytesSize)
{
    return new QpidBytesMessage(*this, bytes, bytesSize);
}

cms::BytesMessage* QpidSession::createBytesMessage()
{
    return new QpidBytesMessage(*this);
}

cms::Message* QpidSession::createMessage()
{
    return new QpidMessage(*this);
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
    return new QpidMessageProducer(*this, destination);
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
    return new QpidMessageConsumer(*this, destination);
}

void QpidSession::recover()
{

}

void QpidSession::rollback()
{
    if ( isTransacted() ) session_.rollback();
    else throw cms::IllegalStateException();
}

void QpidSession::commit()
{
    if ( isTransacted() ) session_.commit();
    else throw cms::IllegalStateException();
}

void QpidSession::close()
{
    // TODO: close session - stop thread first, then what?
}

void QpidSession::start()
{
    // Start up thread to service session
    sessionThread_ = std::thread(std::bind(&QpidSession::threadWorker, this));
    sessionThread_.detach();
}

void QpidSession::stop()
{
    // TODO: stop thread servicing session
}

}
}
