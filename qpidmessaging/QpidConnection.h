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

#include <qpid/messaging/Connection.h>

#include <vector>

namespace qpid {
namespace cmsimpl {

class QpidSession;

class QpidConnection :  public cms::Connection
{
    friend class QpidSession;

    std::string uri_;
    std::string username_;
    std::string password_;
    std::string clientId_;
    cms::ExceptionListener* exceptionListener_;
    cms::MessageTransformer* messageTransformer_;
    enum {STOPPED, STARTED} state_;
    bool useAMQP10_;

    qpid::messaging::Connection connection_;
    std::vector<QpidSession*> sessions_;

    std::string connectionURL();
    std::string connectionOptions();

public:
    QpidConnection(const std::string& uri);
    QpidConnection(const std::string& uri, const std::string& username, const std::string& password);
    QpidConnection(const std::string& uri, const std::string& username, const std::string& password, const std::string& clientId);
    ~QpidConnection();

    // Hide copy constructor and assignment
private:
    QpidConnection(const QpidConnection& other);
    QpidConnection& operator=(const QpidConnection& other);

    // Interface implementations
private:
    virtual cms::MessageTransformer* getMessageTransformer() const;
    virtual void setMessageTransformer(cms::MessageTransformer* transformer);
    virtual void setExceptionListener(cms::ExceptionListener* listener);
    virtual cms::ExceptionListener* getExceptionListener() const;
    virtual void setClientID(const std::string& clientID);
    virtual std::string getClientID() const;
    virtual cms::Session* createSession(cms::Session::AcknowledgeMode ackMode);
    virtual cms::Session* createSession();
    virtual const cms::ConnectionMetaData* getMetaData() const;
    virtual void close();
    virtual void start();
    virtual void stop();
};
}
}

#endif // QPID_CMSIMPL_QPIDCONNECTION_H
