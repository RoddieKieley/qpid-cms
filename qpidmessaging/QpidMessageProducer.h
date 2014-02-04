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

#ifndef QPID_CMSIMP_QPIDMESSAGEPRODUCER_H
#define QPID_CMSIMP_QPIDMESSAGEPRODUCER_H

#include "cms/MessageProducer.h"

namespace cms {

class Destination;

}

namespace qpid {
namespace cmsimpl {

class QpidMessageProducer :  public cms::MessageProducer
{
public:
    QpidMessageProducer();
    QpidMessageProducer(const cms::Destination* destination);
    ~QpidMessageProducer();

    // Hide copying and assignment
private:
    QpidMessageProducer(const QpidMessageProducer& other);
    QpidMessageProducer& operator=(const QpidMessageProducer& other);

private:
    virtual cms::MessageTransformer* getMessageTransformer() const;
    virtual void setMessageTransformer(cms::MessageTransformer* transformer);
    virtual long long int getTimeToLive() const;
    virtual void setTimeToLive(long long int time);
    virtual int getPriority() const;
    virtual void setPriority(int priority);
    virtual bool getDisableMessageTimeStamp() const;
    virtual void setDisableMessageTimeStamp(bool value);
    virtual bool getDisableMessageID() const;
    virtual void setDisableMessageID(bool value);
    virtual int getDeliveryMode() const;
    virtual void setDeliveryMode(int mode);
    virtual void send(const cms::Destination* destination, cms::Message* message, int deliveryMode, int priority, long long int timeToLive, cms::AsyncCallback* onComplete);
    virtual void send(const cms::Destination* destination, cms::Message* message, int deliveryMode, int priority, long long int timeToLive);
    virtual void send(const cms::Destination* destination, cms::Message* message, cms::AsyncCallback* onComplete);
    virtual void send(const cms::Destination* destination, cms::Message* message);
    virtual void send(cms::Message* message, int deliveryMode, int priority, long long int timeToLive, cms::AsyncCallback* onComplete);
    virtual void send(cms::Message* message, int deliveryMode, int priority, long long int timeToLive);
    virtual void send(cms::Message* message, cms::AsyncCallback* onComplete);
    virtual void send(cms::Message* message);
    virtual void close();
};
}
}

#endif // QPID_CMSIMP_QPIDMESSAGEPRODUCER_H
