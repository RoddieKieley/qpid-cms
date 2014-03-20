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
    brokerURI_(brokerURI),
    exceptionListener_(nullptr),
    messageTransformer_(nullptr)
{
}

QpidConnectionFactory::~QpidConnectionFactory()
{
}

cms::MessageTransformer* QpidConnectionFactory::getMessageTransformer() const
{
    return messageTransformer_;
}

void QpidConnectionFactory::setMessageTransformer(cms::MessageTransformer* transformer)
{
    messageTransformer_ = transformer;
}

cms::ExceptionListener* QpidConnectionFactory::getExceptionListener() const
{
    return exceptionListener_;
}

void QpidConnectionFactory::setExceptionListener(cms::ExceptionListener* listener)
{
    exceptionListener_ = listener;
}

cms::Connection* QpidConnectionFactory::createConnection(const std::string& username, const std::string& password, const std::string& clientId)
{
    cms::Connection* c = new QpidConnection(brokerURI_, username, password, clientId);
    c->setExceptionListener(exceptionListener_);
    c->setMessageTransformer(messageTransformer_);
    return c;
}

cms::Connection* QpidConnectionFactory::createConnection(const std::string& username, const std::string& password)
{
    cms::Connection* c = new QpidConnection(brokerURI_, username, password);
    c->setExceptionListener(exceptionListener_);
    c->setMessageTransformer(messageTransformer_);
    return c;
}

cms::Connection* QpidConnectionFactory::createConnection()
{
    cms::Connection* c = new QpidConnection(brokerURI_);
    c->setExceptionListener(exceptionListener_);
    c->setMessageTransformer(messageTransformer_);
    return c;
}

}
}
