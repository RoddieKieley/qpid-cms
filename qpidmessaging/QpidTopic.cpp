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

QpidTopic::QpidTopic()
{

}

QpidTopic::QpidTopic(const std::string& topicName)
{

}


QpidTopic::QpidTopic(const QpidTopic& other)
{

}

QpidTopic::~QpidTopic()
{

}

QpidTopic& QpidTopic::operator=(const QpidTopic& other)
{
    throw NotImplementedYet();
}

bool QpidTopic::operator==(const QpidTopic& other)
{
    throw NotImplementedYet();
}

std::string QpidTopic::getTopicName() const
{
    throw NotImplementedYet();
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

}

cms::Destination* QpidTopic::clone() const
{
    throw NotImplementedYet();
}

cms::Destination::DestinationType QpidTopic::getDestinationType() const
{
    throw NotImplementedYet();
}

}
}
