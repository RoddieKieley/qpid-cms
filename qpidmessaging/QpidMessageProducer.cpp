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

#include <qpid/messaging/Session.h>

namespace qpid{
namespace cmsimpl {

QpidMessageProducer::QpidMessageProducer(qpid::messaging::Session& session, const cms::Destination* destination) :
    sender_(session.createSender(dynamic_cast<const QpidDestination*>(destination)->getAddress()))
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
    throw NotImplementedYet();
}

void QpidMessageProducer::setTimeToLive(long long int time)
{

}

int QpidMessageProducer::getPriority() const
{
    throw NotImplementedYet();
}

void QpidMessageProducer::setPriority(int priority)
{

}

bool QpidMessageProducer::getDisableMessageTimeStamp() const
{
    throw NotImplementedYet();
}

void QpidMessageProducer::setDisableMessageTimeStamp(bool value)
{

}

bool QpidMessageProducer::getDisableMessageID() const
{
    throw NotImplementedYet();
}

void QpidMessageProducer::setDisableMessageID(bool value)
{

}

int QpidMessageProducer::getDeliveryMode() const
{
    throw NotImplementedYet();
}

void QpidMessageProducer::setDeliveryMode(int mode)
{

}

void QpidMessageProducer::send(const cms::Destination* destination, cms::Message* message, int deliveryMode, int priority, long long int timeToLive, cms::AsyncCallback* onComplete)
{

}

void QpidMessageProducer::send(const cms::Destination* destination, cms::Message* message, int deliveryMode, int priority, long long int timeToLive)
{

}

void QpidMessageProducer::send(const cms::Destination* destination, cms::Message* message, cms::AsyncCallback* onComplete)
{

}

void QpidMessageProducer::send(const cms::Destination* destination, cms::Message* message)
{

}

void QpidMessageProducer::send(cms::Message* message, int deliveryMode, int priority, long long int timeToLive, cms::AsyncCallback* onComplete)
{

}

void QpidMessageProducer::send(cms::Message* message, int deliveryMode, int priority, long long int timeToLive)
{

}

void QpidMessageProducer::send(cms::Message* message, cms::AsyncCallback* onComplete)
{

}

void QpidMessageProducer::send(cms::Message* message)
{

}

void QpidMessageProducer::close()
{

}

}
}
