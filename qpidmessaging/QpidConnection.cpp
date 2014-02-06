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

#include "QpidConnection.h"

#include "QpidExceptions.h"
#include "QpidSession.h"

namespace qpid {
namespace cmsimpl {

std::string QpidConnection::connectionURL()
{
    return uri_;
}

std::string QpidConnection::connectionOptions()
{
    std::string options("{");
    bool needComma(false);
    if ( !username_.empty() ) {
        options += "username:";
        options += username_;
        needComma = true;
    }
    if ( !password_.empty() ) {
        if (needComma) options += ",";
        options += "password:";
        options += password_;
        needComma = true;
    }
    options += "}";
    return options;
}

QpidConnection::QpidConnection(const std::string& uri) :
    uri_(uri),
    connection_(connectionURL(), connectionOptions())
{
    connection_.open();
}

QpidConnection::QpidConnection(const std::string& uri, const std::string& username, const std::string& password) :
    uri_(uri),
    username_(username),
    password_(password),
    connection_(connectionURL(), connectionOptions())
{
    connection_.open();
}

QpidConnection::QpidConnection(const std::string& uri, const std::string& username, const std::string& password, const std::string& clientId) :
    uri_(uri),
    username_(username),
    password_(password),
    clientId_(clientId),
    connection_(connectionURL(), connectionOptions())
{
    connection_.open();
}

QpidConnection::~QpidConnection()
{
}

cms::MessageTransformer* QpidConnection::getMessageTransformer() const
{
    throw NotImplementedYet();
}

void QpidConnection::setMessageTransformer(cms::MessageTransformer* transformer)
{
    throw NotImplementedYet();
}

void QpidConnection::setExceptionListener(cms::ExceptionListener* listener)
{
    throw NotImplementedYet();
}

cms::ExceptionListener* QpidConnection::getExceptionListener() const
{
    throw NotImplementedYet();
}

void QpidConnection::setClientID(const std::string& clientID)
{
    clientId_ = clientID;
}

std::string QpidConnection::getClientID() const
{
    return clientId_;
}

cms::Session* QpidConnection::createSession(cms::Session::AcknowledgeMode ackMode)
{
    return new QpidSession(ackMode, connection_);
}

cms::Session* QpidConnection::createSession()
{
    return new QpidSession(cms::Session::AUTO_ACKNOWLEDGE, connection_);
}

const cms::ConnectionMetaData* QpidConnection::getMetaData() const
{
    throw NotImplementedYet();
}

void QpidConnection::close()
{
    connection_.close();
}

void QpidConnection::start()
{

}

void QpidConnection::stop()
{

}

}
}
