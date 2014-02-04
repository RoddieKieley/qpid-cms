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

#include "QpidExceptions.h"

namespace qpid{
namespace cmsimpl {

QpidMessageProducer::QpidMessageProducer()
{

}

QpidMessageProducer::QpidMessageProducer(const cms::Destination* destination)
{

}

QpidMessageProducer::QpidMessageProducer(const QpidMessageProducer& other)
{

}

QpidMessageProducer::~QpidMessageProducer()
{

}

QpidMessageProducer& QpidMessageProducer::operator=(const QpidMessageProducer& other)
{
    throw NotImplementedYet();
}

bool QpidMessageProducer::operator==(const QpidMessageProducer& other)
{
    throw NotImplementedYet();
}

cms::MessageTransformer* QpidMessageProducer::getMessageTransformer() const
{
    throw NotImplementedYet();
}

void QpidMessageProducer::setMessageTransformer(cms::MessageTransformer* transformer)
{

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
