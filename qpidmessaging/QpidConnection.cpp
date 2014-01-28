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

#include "qpidmessaging/QpidConnection.h"

namespace qpid {
namespace cmsimpl {

QpidConnection::QpidConnection()
{

}

QpidConnection::QpidConnection(const QpidConnection& other)
{

}

QpidConnection::~QpidConnection()
{

}

QpidConnection& QpidConnection::operator=(const QpidConnection& other)
{

}

bool QpidConnection::operator==(const QpidConnection& other)
{

}

cms::MessageTransformer* QpidConnection::getMessageTransformer()
{

}

void QpidConnection::setMessageTransformer(cms::MessageTransformer* transformer)
{

}

void QpidConnection::setExceptionListener(cms::ExceptionListener* listener)
{

}

cms::ExceptionListener* QpidConnection::getExceptionListener()
{

}

void QpidConnection::setClientID(const std::string& clientID)
{

}

std::string QpidConnection::getClientID()
{

}

cms::Session* QpidConnection::createSession(cms::Session::AcknowledgeMode ackMode)
{

}

cms::Session* QpidConnection::createSession()
{

}

const cms::ConnectionMetaData* QpidConnection::getMetaData()
{

}

void QpidConnection::close()
{

}

void QpidConnection::start()
{

}

void QpidConnection::stop()
{

}

}
}
