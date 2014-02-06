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

#include "QpidConnectionFactory.h"

#include "QpidConnection.h"
#include "QpidExceptions.h"

#include <qpid/messaging/Connection.h>

// Static Connection factory for implementation independence
cms::ConnectionFactory* cms::ConnectionFactory::createCMSConnectionFactory(const std::string& brokerURI) {
    return new qpid::cmsimpl::QpidConnectionFactory( brokerURI );
}

namespace qpid {
namespace cmsimpl {

QpidConnectionFactory::QpidConnectionFactory(const std::string& brokerURI) :
    brokerURI_(brokerURI)
{
}

QpidConnectionFactory::~QpidConnectionFactory()
{
}

cms::MessageTransformer* QpidConnectionFactory::getMessageTransformer() const
{
    throw NotImplementedYet();
}

void QpidConnectionFactory::setMessageTransformer(cms::MessageTransformer* transformer)
{
    throw NotImplementedYet();
}

cms::ExceptionListener* QpidConnectionFactory::getExceptionListener() const
{
    throw NotImplementedYet();
}

void QpidConnectionFactory::setExceptionListener(cms::ExceptionListener* listener)
{
    throw NotImplementedYet();
}

cms::Connection* QpidConnectionFactory::createConnection(const std::string& username, const std::string& password, const std::string& clientId)
{
    return new QpidConnection(brokerURI_, username, password, clientId);
}

cms::Connection* QpidConnectionFactory::createConnection(const std::string& username, const std::string& password)
{
    return new QpidConnection(brokerURI_, username, password);
}

cms::Connection* QpidConnectionFactory::createConnection()
{
    return new QpidConnection(brokerURI_);
}

}
}
