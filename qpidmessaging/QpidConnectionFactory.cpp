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

#include <qpid/messaging/Connection.h>

// Static Connection factory for implementation independence
cms::ConnectionFactory* cms::ConnectionFactory::createCMSConnectionFactory(const std::string& brokerURI) {
    return new qpid::cmsimpl::QpidConnectionFactory( brokerURI );
}

namespace qpid {
namespace cmsimpl {

QpidConnectionFactory::QpidConnectionFactory(const std::string& brokerURI)
{

}

QpidConnectionFactory::QpidConnectionFactory(const QpidConnectionFactory& other)
{

}

QpidConnectionFactory::~QpidConnectionFactory()
{

}

QpidConnectionFactory& QpidConnectionFactory::operator=(const QpidConnectionFactory& other)
{

}

bool QpidConnectionFactory::operator==(const QpidConnectionFactory& other)
{

}

cms::MessageTransformer* QpidConnectionFactory::getMessageTransformer() const
{

}

void QpidConnectionFactory::setMessageTransformer(cms::MessageTransformer* transformer)
{

}

cms::ExceptionListener* QpidConnectionFactory::getExceptionListener() const
{

}

void QpidConnectionFactory::setExceptionListener(cms::ExceptionListener* listener)
{

}

cms::Connection* QpidConnectionFactory::createConnection(const std::string& username, const std::string& password, const std::string& clientId)
{

}

cms::Connection* QpidConnectionFactory::createConnection(const std::string& username, const std::string& password)
{

}

cms::Connection* QpidConnectionFactory::createConnection()
{

}

}
}
