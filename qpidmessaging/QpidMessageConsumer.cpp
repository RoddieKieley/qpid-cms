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

#include "QpidExceptions.h"

namespace qpid {
namespace cmsimpl {

QpidMessageConsumer::QpidMessageConsumer()
{

}

QpidMessageConsumer::QpidMessageConsumer(const cms::Destination* destination)
{

}

QpidMessageConsumer::QpidMessageConsumer(const QpidMessageConsumer& other)
{

}

QpidMessageConsumer::~QpidMessageConsumer()
{

}

QpidMessageConsumer& QpidMessageConsumer::operator=(const QpidMessageConsumer& other)
{
    throw NotImplementedYet();
}

bool QpidMessageConsumer::operator==(const QpidMessageConsumer& other)
{
    throw NotImplementedYet();
}

cms::MessageAvailableListener* QpidMessageConsumer::getMessageAvailableListener() const
{
    throw NotImplementedYet();
}

void QpidMessageConsumer::setMessageAvailableListener(cms::MessageAvailableListener* listener)
{

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
    throw NotImplementedYet();
}

void QpidMessageConsumer::setMessageListener(cms::MessageListener* listener)
{

}

cms::Message* QpidMessageConsumer::receiveNoWait()
{
    throw NotImplementedYet();
}

cms::Message* QpidMessageConsumer::receive(int millisecs)
{
    throw NotImplementedYet();
}

cms::Message* QpidMessageConsumer::receive()
{
    throw NotImplementedYet();
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
