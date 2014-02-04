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

#ifndef QPID_CMSIMPL_QPIDMESSAGECONSUMER_H
#define QPID_CMSIMPL_QPIDMESSAGECONSUMER_H

#include "cms/MessageConsumer.h"

namespace cms {

class Destination;

}

namespace qpid {
namespace cmsimpl {

class QpidMessageConsumer :  public cms::MessageConsumer
{
public:
    QpidMessageConsumer();
    QpidMessageConsumer(const cms::Destination* destination);

    QpidMessageConsumer(const QpidMessageConsumer& other);
    ~QpidMessageConsumer();
    QpidMessageConsumer& operator=(const QpidMessageConsumer& other);
    bool operator==(const QpidMessageConsumer& other);

private:
    virtual cms::MessageAvailableListener* getMessageAvailableListener() const;
    virtual void setMessageAvailableListener(cms::MessageAvailableListener* listener);
    virtual cms::MessageTransformer* getMessageTransformer() const;
    virtual void setMessageTransformer(cms::MessageTransformer* transformer);
    virtual std::string getMessageSelector() const;
    virtual cms::MessageListener* getMessageListener() const;
    virtual void setMessageListener(cms::MessageListener* listener);
    virtual cms::Message* receiveNoWait();
    virtual cms::Message* receive(int millisecs);
    virtual cms::Message* receive();
    virtual void close();
    virtual void start();
    virtual void stop();
};
}
}

#endif // QPID_CMSIMPL_QPIDMESSAGECONSUMER_H
