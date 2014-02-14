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

#include "QpidMessageProducer.h"

#include "QpidDestination.h"
#include "QpidExceptions.h"
#include "QpidMessage.h"

#include <qpid/messaging/Session.h>
#include <qpid/messaging/Message.h>

namespace qpid{
namespace cmsimpl {

QpidMessageProducer::QpidMessageProducer(qpid::messaging::Session& session, const cms::Destination* destination) :
    sender_(session.createSender(dynamic_cast<const QpidDestination*>(destination)->getAddress())),
    ttlDefault_(0),
    priorityDefault_(4),
    durableDefault_(true),
    generateMessageID_(true),
    generateTimestamp_(true)
{
}

QpidMessageProducer::~QpidMessageProducer()
{
}

cms::MessageTransformer* QpidMessageProducer::getMessageTransformer() const
{
    throw NotImplementedYet();
}

void QpidMessageProducer::setMessageTransformer(cms::MessageTransformer* transformer)
{
    throw NotImplementedYet();
}

long long int QpidMessageProducer::getTimeToLive() const
{
    return ttlDefault_.getMilliseconds();
}

void QpidMessageProducer::setTimeToLive(long long int time)
{
    ttlDefault_ = qpid::messaging::Duration(time);
}

int QpidMessageProducer::getPriority() const
{
    return priorityDefault_;
}

void QpidMessageProducer::setPriority(int priority)
{
    priorityDefault_ = priority;
}

bool QpidMessageProducer::getDisableMessageTimeStamp() const
{
    return !generateTimestamp_;
}

void QpidMessageProducer::setDisableMessageTimeStamp(bool value)
{
    generateTimestamp_ = false;
}

bool QpidMessageProducer::getDisableMessageID() const
{
    return !generateMessageID_;
}

void QpidMessageProducer::setDisableMessageID(bool value)
{
    generateMessageID_ = false;
}

int QpidMessageProducer::getDeliveryMode() const
{
    return durableDefault_ ? cms::DeliveryMode::PERSISTENT : cms::DeliveryMode::NON_PERSISTENT;
}

void QpidMessageProducer::setDeliveryMode(int mode)
{
    durableDefault_ = ( mode==cms::DeliveryMode::PERSISTENT );
}

void QpidMessageProducer::send(const cms::Destination* destination, cms::Message* message, int deliveryMode, int priority, long long int timeToLive, cms::AsyncCallback* onComplete)
{
    throw NotImplementedYet();
}

void QpidMessageProducer::send(const cms::Destination* destination, cms::Message* message, int deliveryMode, int priority, long long int timeToLive)
{
    throw NotImplementedYet();
}

void QpidMessageProducer::send(const cms::Destination* destination, cms::Message* message, cms::AsyncCallback* onComplete)
{
    throw NotImplementedYet();
}

void QpidMessageProducer::send(const cms::Destination* destination, cms::Message* message)
{
    throw NotImplementedYet();
}

void QpidMessageProducer::send(cms::Message* message, int deliveryMode, int priority, long long int timeToLive, cms::AsyncCallback* onComplete)
{
    throw NotImplementedYet();
}

void QpidMessageProducer::send(cms::Message* message, int deliveryMode, int priority, long long int timeToLive)
{

}

void QpidMessageProducer::send(cms::Message* message, cms::AsyncCallback* onComplete)
{
    throw NotImplementedYet();
}

void QpidMessageProducer::send(cms::Message* message)
{
    QpidMessage* qm = dynamic_cast<QpidMessage*>(message);
    if (!qm) throw cms::CMSException("Message not a QpidMessage");
    sender_.send(qm->message_);
}

void QpidMessageProducer::close()
{
    sender_.close();
}

}
}
