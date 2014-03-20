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

#include "QpidMessageConsumer.h"

#include "QpidDestination.h"
#include "QpidExceptions.h"
#include "QpidMessage.h"
#include "QpidSession.h"

namespace qpid {
namespace cmsimpl {

QpidMessageConsumer::QpidMessageConsumer(QpidSession& session, const cms::Destination* destination) :
  session_(session),
  receiver_(session.session_.createReceiver(dynamic_cast<const QpidDestination*>(destination)->getAddress())),
  availableListener_(nullptr),
  listener_(nullptr)
{

}

QpidMessageConsumer::~QpidMessageConsumer()
{

}

void QpidMessageConsumer::autoAcknowledge(messaging::Message& m)
{
    if ( session_.acknowledgeMode_==cms::Session::AUTO_ACKNOWLEDGE ) {
        session_.session_.acknowledge(m, true);
    } else if ( session_.acknowledgeMode_==cms::Session::DUPS_OK_ACKNOWLEDGE ) {
        session_.session_.acknowledge(m);
    }
}

void QpidMessageConsumer::serviceMessages()
{
    // If this is called the session thinks that we have messages available
    if (availableListener_) availableListener_->onMessageAvailable(this);

    // Try to get message without waiting (there shold be one unless the onMessageAvailable() call snaffled it
    if (listener_) {
        qpid::messaging::Message qm;
        if (receiver_.get(qm, qpid::messaging::Duration::IMMEDIATE)) {
            QpidMessage* m = QpidMessage::create(session_, qm);
            listener_->onMessage(m);
            if (!m->acked_) {
              // The client didn't acknowledge, we might need to now
              if (session_.acknowledgeMode_==cms::Session::INDIVIDUAL_ACKNOWLEDGE) {
                  // The client didn't acknowledge and the mode is individual ack so release for redelivery
                  session_.session_.release(qm);
              } else {
                  // Do whatever automatic ack might be necessary
                  autoAcknowledge(qm);
              }
            }
        }
    }
}

cms::MessageAvailableListener* QpidMessageConsumer::getMessageAvailableListener() const
{
    return availableListener_;
}

void QpidMessageConsumer::setMessageAvailableListener(cms::MessageAvailableListener* listener)
{
    availableListener_ = listener;
    session_.addConsumerListener(receiver_.getName(), this);
    start();
}

cms::MessageTransformer* QpidMessageConsumer::getMessageTransformer() const
{
    throw NotImplementedYet();
}

void QpidMessageConsumer::setMessageTransformer(cms::MessageTransformer* transformer)
{

}

std::string QpidMessageConsumer::getMessageSelector() const
{
    throw NotImplementedYet();
}

cms::MessageListener* QpidMessageConsumer::getMessageListener() const
{
    return listener_;
}

void QpidMessageConsumer::setMessageListener(cms::MessageListener* listener)
{
    listener_ = listener;
    session_.addConsumerListener(receiver_.getName(), this);
    start();
}


cms::Message* QpidMessageConsumer::receiveQpidMessage(messaging::Duration timeout)
{
    qpid::messaging::Message message;
    if (receiver_.fetch(message, timeout)) {
        autoAcknowledge(message);
        return QpidMessage::create(session_, message);
    } else {
        return nullptr;
    }
}

cms::Message* QpidMessageConsumer::receiveNoWait()
{
    return receiveQpidMessage(qpid::messaging::Duration::IMMEDIATE);
}

cms::Message* QpidMessageConsumer::receive(int millisecs)
{
    return receiveQpidMessage(qpid::messaging::Duration(millisecs));
}

cms::Message* QpidMessageConsumer::receive()
{
    return receiveQpidMessage(qpid::messaging::Duration::FOREVER);
}

void QpidMessageConsumer::close()
{
    stop();
    session_.delConsumerListener(receiver_.getName());
    receiver_.close();
}

void QpidMessageConsumer::start()
{
    receiver_.setCapacity(10);
}

void QpidMessageConsumer::stop()
{
    receiver_.setCapacity(0);
}

}
}
