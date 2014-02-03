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

#include "QpidTempTopic.h"

#include "QpidExceptions.h"

namespace qpid {
namespace cmsimpl {

QpidTempTopic::QpidTempTopic()
{

}

QpidTempTopic::QpidTempTopic(const QpidTempTopic& other)
{

}

QpidTempTopic::~QpidTempTopic()
{

}

QpidTempTopic& QpidTempTopic::operator=(const QpidTempTopic& other)
{
    throw NotImplementedYet();
}

bool QpidTempTopic::operator==(const QpidTempTopic& other)
{
    throw NotImplementedYet();
}

void QpidTempTopic::destroy()
{

}

std::string QpidTempTopic::getTopicName()
{
    throw NotImplementedYet();
}

const cms::CMSProperties& QpidTempTopic::getCMSProperties()
{
    throw NotImplementedYet();
}

bool QpidTempTopic::equals(const cms::Destination& other)
{
    throw NotImplementedYet();
}

void QpidTempTopic::copy(const cms::Destination& source)
{

}

cms::Destination* QpidTempTopic::clone()
{
    throw NotImplementedYet();
}

cms::Destination::DestinationType QpidTempTopic::getDestinationType()
{
    throw NotImplementedYet();
}

}
}
