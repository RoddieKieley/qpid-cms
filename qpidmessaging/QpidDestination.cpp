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

#include "QpidDestination.h"

#include <cms/Destination.h>

namespace qpid {
namespace cmsimpl {

QpidDestination::QpidDestination(const std::string& address, const std::string& type) :
    destination_(address, "", qpid::types::Variant::Map(), type)
{
}

QpidDestination::QpidDestination(const QpidDestination& destination) :
    destination_(destination.destination_)
{
}

QpidDestination::~QpidDestination()
{
}

QpidDestination& QpidDestination::operator=(const QpidDestination& source)
{
    destination_ = source.destination_;
    return *this;
}

const cms::CMSProperties& QpidDestination::getCMSProperties() const
{
    return properties_;
}

bool QpidDestination::equals(const cms::Destination& other) const
{
    const QpidDestination* d = dynamic_cast<const QpidDestination*>(&other);
    return d && destination_==d->destination_;
}

messaging::Address QpidDestination::getAddress() const
{
    return destination_;
}

}
}
