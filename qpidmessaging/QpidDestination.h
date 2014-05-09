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

#ifndef QPID_CMSIMPL_QPIDDESTINATION_H
#define QPID_CMSIMPL_QPIDDESTINATION_H

#include <qpidmessaging/QpidProps.h>
#include <qpid/messaging/Address.h>

namespace cms {
class Destination;
}

namespace qpid {
namespace cmsimpl {

class QpidDestination
{
    qpid::messaging::Address destination_;
    QpidProps properties_;

public:
    QpidDestination(const std::string& address, const std::string& type);
    QpidDestination(const QpidDestination& destination);
    ~QpidDestination();

    static cms::Destination* createDestination(const qpid::messaging::Address& address);

    QpidDestination& operator=(const QpidDestination& source);

    // Implementations that are common to all destinations
    const cms::CMSProperties& getCMSProperties() const;
    bool equals(const cms::Destination& other) const;

    qpid::messaging::Address getAddress() const;

    static const std::string TOPIC;
    static const std::string QUEUE;
};

}
}

#endif // QPID_CMSIMPL_QPIDDESTINATION_H
