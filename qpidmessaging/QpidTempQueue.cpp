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

#include "QpidTempQueue.h"

#include "QpidExceptions.h"

namespace qpid {
namespace cmsimpl {

QpidTempQueue::QpidTempQueue()
{

}

QpidTempQueue::QpidTempQueue(const QpidTempQueue& other)
{

}

QpidTempQueue::~QpidTempQueue()
{

}

QpidTempQueue& QpidTempQueue::operator=(const QpidTempQueue& other)
{
    throw NotImplementedYet();
}

bool QpidTempQueue::operator==(const QpidTempQueue& other)
{
    throw NotImplementedYet();
}

void QpidTempQueue::destroy()
{

}

std::string QpidTempQueue::getQueueName() const
{
    throw NotImplementedYet();
}

const cms::CMSProperties& QpidTempQueue::getCMSProperties() const
{
    throw NotImplementedYet();
}

bool QpidTempQueue::equals(const cms::Destination& other) const
{
    throw NotImplementedYet();
}

void QpidTempQueue::copy(const cms::Destination& source)
{

}

cms::Destination* QpidTempQueue::clone() const
{
    throw NotImplementedYet();
}

cms::Destination::DestinationType QpidTempQueue::getDestinationType() const
{
    throw NotImplementedYet();
}

}
}
