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

static bool DefaultUseAMQP10 = true;

std::string QpidConnection::connectionURL()
{
    return uri_;
}

std::string QpidConnection::connectionOptions()
{
    std::string options("{");
    bool needComma(false);
    if ( useAMQP10_ ) {
        options += "protocol:amqp1.0";
        needComma = true;
    }
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
    exceptionListener_(nullptr),
    messageTransformer_(nullptr),
    state_(STOPPED),
    useAMQP10_(DefaultUseAMQP10),
    connection_(connectionURL(), connectionOptions())
{
    connection_.open();
}

QpidConnection::QpidConnection(const std::string& uri, const std::string& username, const std::string& password) :
    uri_(uri),
    username_(username),
    password_(password),
    exceptionListener_(nullptr),
    messageTransformer_(nullptr),
    state_(STOPPED),
    useAMQP10_(DefaultUseAMQP10),
    connection_(connectionURL(), connectionOptions())
{
    connection_.open();
}

QpidConnection::QpidConnection(const std::string& uri, const std::string& username, const std::string& password, const std::string& clientId) :
    uri_(uri),
    username_(username),
    password_(password),
    clientId_(clientId),
    exceptionListener_(nullptr),
    messageTransformer_(nullptr),
    state_(STOPPED),
    useAMQP10_(DefaultUseAMQP10),
    connection_(connectionURL(), connectionOptions())
{
    connection_.open();
}

QpidConnection::~QpidConnection()
{
}

cms::MessageTransformer* QpidConnection::getMessageTransformer() const
{
    return messageTransformer_;
}

void QpidConnection::setMessageTransformer(cms::MessageTransformer* transformer)
{
    messageTransformer_ = transformer;
}

void QpidConnection::setExceptionListener(cms::ExceptionListener* listener)
{
    exceptionListener_ = listener;
}

cms::ExceptionListener* QpidConnection::getExceptionListener() const
{
    return exceptionListener_;
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
    QpidSession* session = new QpidSession(*this, ackMode);
    sessions_.push_back(session);
    if (state_==STARTED) {
        session->start();
    }
    return session;
}

cms::Session* QpidConnection::createSession()
{
    return createSession(cms::Session::AUTO_ACKNOWLEDGE);
}

const cms::ConnectionMetaData* QpidConnection::getMetaData() const
{
    throw NotImplementedYet();
}

void QpidConnection::close()
{
    for (auto&& i = sessions_.cbegin(); i!=sessions_.cend(); ++i) {
        (*i)->close();
    }
    connection_.close();
}

void QpidConnection::start()
{
    for (auto&& i = sessions_.cbegin(); i!=sessions_.cend(); ++i) {
        (*i)->start();
    }
    state_ = STARTED;
}

void QpidConnection::stop()
{
    for (auto&& i = sessions_.cbegin(); i!=sessions_.cend(); ++i) {
        (*i)->stop();
    }
    state_ = STOPPED;
}

}
}
