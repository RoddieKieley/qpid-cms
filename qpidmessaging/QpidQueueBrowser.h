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

#ifndef QPID_CMSIMPL_QPIDQUEUEBROWSER_H
#define QPID_CMSIMPL_QPIDQUEUEBROWSER_H

#include "cms/QueueBrowser.h"

namespace qpid {
namespace cmsimpl {

class QpidQueueBrowser :  cms::QueueBrowser
{
public:
    QpidQueueBrowser();
    QpidQueueBrowser(const QpidQueueBrowser& other);
    ~QpidQueueBrowser();
    QpidQueueBrowser& operator=(const QpidQueueBrowser& other);
    bool operator==(const QpidQueueBrowser& other);

private:
    virtual cms::MessageEnumeration* getEnumeration();
    virtual std::string getMessageSelector();
    virtual const cms::Queue* getQueue();
    virtual void close();
};
}
}

#endif // QPID_CMSIMPL_QPIDQUEUEBROWSER_H
