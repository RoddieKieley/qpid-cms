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

#include "QpidTopic.h"

#include "QpidExceptions.h"

namespace qpid {
namespace cmsimpl {

QpidTopic::QpidTopic(const std::string& topicName) :
    QpidDestination(topicName),
    topicName_(topicName)
{
}

QpidTopic::~QpidTopic()
{
}

std::string QpidTopic::getTopicName() const
{
    return topicName_;
}

const cms::CMSProperties& QpidTopic::getCMSProperties() const
{
    throw NotImplementedYet();
}

bool QpidTopic::equals(const cms::Destination& other) const
{
    throw NotImplementedYet();
}

void QpidTopic::copy(const cms::Destination& source)
{
    throw NotImplementedYet();
}

cms::Destination* QpidTopic::clone() const
{
    throw NotImplementedYet();
}

cms::Destination::DestinationType QpidTopic::getDestinationType() const
{
    return cms::Destination::TOPIC;
}

}
}
