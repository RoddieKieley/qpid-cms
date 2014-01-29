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

#ifndef QPID_CMSIMPL_QPIDCONNECTION_H
#define QPID_CMSIMPL_QPIDCONNECTION_H

#include "cms/Connection.h"

namespace qpid {
namespace cmsimpl {

class QpidConnection :  cms::Connection
{
public:
    QpidConnection();
    QpidConnection(const QpidConnection& other);
    ~QpidConnection();
    QpidConnection& operator=(const QpidConnection& other);
    bool operator==(const QpidConnection& other);

private:
    virtual cms::MessageTransformer* getMessageTransformer();
    virtual void setMessageTransformer(cms::MessageTransformer* transformer);
    virtual void setExceptionListener(cms::ExceptionListener* listener);
    virtual cms::ExceptionListener* getExceptionListener();
    virtual void setClientID(const std::string& clientID);
    virtual std::string getClientID();
    virtual cms::Session* createSession(cms::Session::AcknowledgeMode ackMode);
    virtual cms::Session* createSession();
    virtual const cms::ConnectionMetaData* getMetaData();
    virtual void close();
    virtual void start();
    virtual void stop();
};
}
}

#endif // QPID_CMSIMPL_QPIDCONNECTION_H
