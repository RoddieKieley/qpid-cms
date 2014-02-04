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

#ifndef QPID_MESSAGING_CMS_CONNECTIONFACTORY_H
#define QPID_MESSAGING_CMS_CONNECTIONFACTORY_H

#include "cms/ConnectionFactory.h"

namespace qpid {
namespace cmsimpl {

class QpidConnectionFactory : public cms::ConnectionFactory
{
    const std::string brokerURI_;

public:
    QpidConnectionFactory(const std::string& brokerURI);
    ~QpidConnectionFactory();

private:
    // Prevent copying, assignment
    QpidConnectionFactory(const QpidConnectionFactory& other);
    QpidConnectionFactory& operator=(const QpidConnectionFactory& other);

private:
    virtual cms::MessageTransformer* getMessageTransformer() const;
    virtual void setMessageTransformer(cms::MessageTransformer* transformer);
    virtual cms::ExceptionListener* getExceptionListener() const;
    virtual void setExceptionListener(cms::ExceptionListener* listener);
    virtual cms::Connection* createConnection(const std::string& username, const std::string& password, const std::string& clientId);
    virtual cms::Connection* createConnection(const std::string& username, const std::string& password);
    virtual cms::Connection* createConnection();
};
}
}

#endif // QPID_MESSAGING_CMS_CONNECTIONFACTORY_H
