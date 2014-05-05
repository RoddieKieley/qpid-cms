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

#ifndef QPID_CMSIMPL_QPIDSESSION_H
#define QPID_CMSIMPL_QPIDSESSION_H

#include "cms/Session.h"

#include <qpid/messaging/Session.h>

#include <condition_variable>
#include <map>
#include <mutex>
#include <thread>

namespace qpid {
namespace cmsimpl {

class QpidConnection;
class QpidMessageConsumer;

class QpidSession :  public cms::Session
{
    friend class QpidConnection;
    friend class QpidMessage;
    friend class QpidMessageConsumer;
    friend class QpidMessageProducer;
    friend class QpidSessionWorker;

    QpidConnection& connection_;
    cms::MessageTransformer* messageTransformer_;
    cms::Session::AcknowledgeMode acknowledgeMode_;
    qpid::messaging::Session session_;
    std::condition_variable cv_;
    std::mutex lock_;
    std::map<std::string, QpidMessageConsumer*> consumers_;
    std::thread sessionThread_;
    enum {INIT, STOPPED, STARTED, CLOSING} state_;

public:
    QpidSession(qpid::cmsimpl::QpidConnection& connection, cms::Session::AcknowledgeMode acknowledgeMode);
    ~QpidSession();

    // Hide copying and assignment
private:
    QpidSession(const QpidSession& other);
    QpidSession& operator=(const QpidSession& other);


private:
    void threadWorker();
    void addConsumerListener(const std::string& name, QpidMessageConsumer* consumer);
    void delConsumerListener(const std::string& name);

    // Implement interfaces
    virtual cms::MessageTransformer* getMessageTransformer() const;
    virtual void setMessageTransformer(cms::MessageTransformer* transformer);
    virtual void unsubscribe(const std::string& name);
    virtual bool isTransacted() const;
    virtual cms::Session::AcknowledgeMode getAcknowledgeMode() const;
    virtual cms::MapMessage* createMapMessage();
    virtual cms::TextMessage* createTextMessage(const std::string& text);
    virtual cms::TextMessage* createTextMessage();
    virtual cms::StreamMessage* createStreamMessage();
    virtual cms::BytesMessage* createBytesMessage(const unsigned char* bytes, int bytesSize);
    virtual cms::BytesMessage* createBytesMessage();
    virtual cms::Message* createMessage();
    virtual cms::TemporaryTopic* createTemporaryTopic();
    virtual cms::TemporaryQueue* createTemporaryQueue();
    virtual cms::Topic* createTopic(const std::string& topicName);
    virtual cms::Queue* createQueue(const std::string& queueName);
    virtual cms::QueueBrowser* createBrowser(const cms::Queue* queue, const std::string& selector);
    virtual cms::QueueBrowser* createBrowser(const cms::Queue* queue);
    virtual cms::MessageProducer* createProducer(const cms::Destination* destination);
    virtual cms::MessageConsumer* createDurableConsumer(const cms::Topic* destination, const std::string& name, const std::string& selector, bool noLocal);
    virtual cms::MessageConsumer* createConsumer(const cms::Destination* destination, const std::string& selector, bool noLocal);
    virtual cms::MessageConsumer* createConsumer(const cms::Destination* destination, const std::string& selector);
    virtual cms::MessageConsumer* createConsumer(const cms::Destination* destination);
    virtual void recover();
    virtual void rollback();
    virtual void commit();
    virtual void close();
    virtual void start();
    virtual void stop();
};
}
}

#endif // QPID_CMSIMPL_QPIDSESSION_H
