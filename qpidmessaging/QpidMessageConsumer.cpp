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
  receiver_(session.session_.createReceiver(dynamic_cast<const QpidDestination*>(destination)->getAddress()))
{

}

QpidMessageConsumer::~QpidMessageConsumer()
{

}

cms::MessageAvailableListener* QpidMessageConsumer::getMessageAvailableListener() const
{
    return availableListener_;
}

void QpidMessageConsumer::setMessageAvailableListener(cms::MessageAvailableListener* listener)
{
    availableListener_ = listener;
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
}

namespace {
cms::Message* receiveQpidMessage(QpidSession& session, qpid::messaging::Receiver receiver, qpid::messaging::Duration timeout) {
    qpid::messaging::Message message;
    if (receiver.get(message, timeout)) {
        return QpidMessage::create(session, message);
    } else {
        return nullptr;
    }
}

}

cms::Message* QpidMessageConsumer::receiveNoWait()
{
    return receiveQpidMessage(session_, receiver_, qpid::messaging::Duration::IMMEDIATE);
}

cms::Message* QpidMessageConsumer::receive(int millisecs)
{
    return receiveQpidMessage(session_, receiver_, qpid::messaging::Duration(millisecs));
}

cms::Message* QpidMessageConsumer::receive()
{
    return receiveQpidMessage(session_, receiver_, qpid::messaging::Duration::FOREVER);
}

void QpidMessageConsumer::close()
{

}

void QpidMessageConsumer::start()
{

}

void QpidMessageConsumer::stop()
{

}

}
}
