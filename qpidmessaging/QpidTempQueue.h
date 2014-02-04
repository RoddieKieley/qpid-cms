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

#ifndef QPID_CMSIMPL_QPIDTEMPQUEUE_H
#define QPID_CMSIMPL_QPIDTEMPQUEUE_H

#include "cms/TemporaryQueue.h"

namespace qpid {
namespace cmsimpl {

class QpidTempQueue :  public cms::TemporaryQueue
{
public:
    QpidTempQueue();
    ~QpidTempQueue();

    // Hide copying ans assignment
private:
    QpidTempQueue(const QpidTempQueue& other);
    QpidTempQueue& operator=(const QpidTempQueue& other);

private:
    virtual void destroy();
    virtual std::string getQueueName() const;
    virtual const cms::CMSProperties& getCMSProperties() const;
    virtual bool equals(const cms::Destination& other) const;
    virtual void copy(const cms::Destination& source);
    virtual cms::Destination* clone() const;
    virtual cms::Destination::DestinationType getDestinationType() const;
};
}
}

#endif // QPID_CMSIMPL_QPIDTEMPQUEUE_H
