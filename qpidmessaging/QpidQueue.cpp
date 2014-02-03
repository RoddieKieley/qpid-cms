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

#include "QpidQueue.h"

#include "QpidExceptions.h"

namespace qpid {
namespace cmsimpl {

QpidQueue::QpidQueue()
{

}

QpidQueue::QpidQueue(const QpidQueue& other)
{

}

QpidQueue::~QpidQueue()
{

}

QpidQueue& QpidQueue::operator=(const QpidQueue& other)
{
    throw NotImplementedYet();
}

bool QpidQueue::operator==(const QpidQueue& other)
{
    throw NotImplementedYet();
}

std::string QpidQueue::getQueueName()
{
    throw NotImplementedYet();
}

const cms::CMSProperties& QpidQueue::getCMSProperties()
{
    throw NotImplementedYet();
}

bool QpidQueue::equals(const cms::Destination& other)
{
    throw NotImplementedYet();
}

void QpidQueue::copy(const cms::Destination& source)
{

}

cms::Destination* QpidQueue::clone()
{
    throw NotImplementedYet();
}

cms::Destination::DestinationType QpidQueue::getDestinationType()
{
    throw NotImplementedYet();
}

}
}