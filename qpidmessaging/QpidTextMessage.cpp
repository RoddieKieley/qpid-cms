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

#include "QpidTextMessage.h"

#include "QpidDestination.h"
#include "QpidExceptions.h"

#include "cms/CMSException.h"

namespace qpid {
namespace cmsimpl {

QpidTextMessage::QpidTextMessage()
{
}

QpidTextMessage::QpidTextMessage(const std::string& text) :
    message_(text)
{
    message_.setContentType("text/plain");
}

QpidTextMessage::~QpidTextMessage()
{
}

void QpidTextMessage::setText(const std::string& msg)
{
    message_.setContent(msg);
}

void QpidTextMessage::setText(const char* msg)
{
    message_.setContent(msg);
}

std::string QpidTextMessage::getText() const
{
    return message_.getContent();
}

void QpidTextMessage::setCMSType(const std::string& type)
{
    throw NotImplementedYet();
}

std::string QpidTextMessage::getCMSType() const
{
    throw NotImplementedYet();
}

void QpidTextMessage::setCMSTimestamp(long long int timeStamp)
{
    throw NotImplementedYet();
}

long long int QpidTextMessage::getCMSTimestamp() const
{
    throw NotImplementedYet();
}

void QpidTextMessage::setCMSReplyTo(const cms::Destination* destination)
{
    const QpidDestination* qd = dynamic_cast<const QpidDestination*>(destination);
    message_.setReplyTo(qd->getAddress());
}

const cms::Destination* QpidTextMessage::getCMSReplyTo() const
{
    throw NotImplementedYet();
}

void QpidTextMessage::setCMSRedelivered(bool redelivered)
{
    message_.setRedelivered(redelivered);
}

bool QpidTextMessage::getCMSRedelivered() const
{
    return message_.getRedelivered();
}

void QpidTextMessage::setCMSPriority(int priority)
{
    message_.setPriority(priority);
}

int QpidTextMessage::getCMSPriority() const
{
    return message_.getPriority();
}

void QpidTextMessage::setCMSMessageID(const std::string& id)
{
    message_.setMessageId(id);
}

std::string QpidTextMessage::getCMSMessageID() const
{
    return message_.getMessageId();
}

void QpidTextMessage::setCMSExpiration(long long int expireTime)
{
    message_.setTtl(qpid::messaging::Duration(expireTime));
}

long long int QpidTextMessage::getCMSExpiration() const
{
    return message_.getTtl().getMilliseconds();
}

void QpidTextMessage::setCMSDestination(const cms::Destination* destination)
{
}

const cms::Destination* QpidTextMessage::getCMSDestination() const
{
    throw NotImplementedYet();
}

void QpidTextMessage::setCMSDeliveryMode(int mode)
{
    message_.setDurable(mode == cms::DeliveryMode::PERSISTENT);
}

int QpidTextMessage::getCMSDeliveryMode() const
{
    return message_.getDurable() ? cms::DeliveryMode::PERSISTENT : cms::DeliveryMode::NON_PERSISTENT;
}

void QpidTextMessage::setCMSCorrelationID(const std::string& correlationId)
{
    message_.setCorrelationId(correlationId);
}

std::string QpidTextMessage::getCMSCorrelationID() const
{
    return message_.getCorrelationId();
}

void QpidTextMessage::setStringProperty(const std::string& name, const std::string& value)
{
    message_.setProperty(name, value);
}

void QpidTextMessage::setShortProperty(const std::string& name, short int value)
{
    message_.setProperty(name, value);
}

void QpidTextMessage::setLongProperty(const std::string& name, long long int value)
{
    message_.setProperty(name, int64_t(value));
}

void QpidTextMessage::setIntProperty(const std::string& name, int value)
{
    message_.setProperty(name, value);
}

void QpidTextMessage::setFloatProperty(const std::string& name, float value)
{
    message_.setProperty(name, value);
}

void QpidTextMessage::setDoubleProperty(const std::string& name, double value)
{
    message_.setProperty(name, value);
}

void QpidTextMessage::setByteProperty(const std::string& name, unsigned char value)
{
    message_.setProperty(name, value);
}

void QpidTextMessage::setBooleanProperty(const std::string& name, bool value)
{
    message_.setProperty(name, value);
}

std::string QpidTextMessage::getStringProperty(const std::string& name) const
{
    qpid::types::Variant::Map props = message_.getProperties();
    qpid::types::Variant::Map::const_iterator i=props.find(name);
    if ( i==props.end() ) throw cms::CMSException();
    return i->second.getString();
}

short int QpidTextMessage::getShortProperty(const std::string& name) const
{
    throw NotImplementedYet();
}

long long int QpidTextMessage::getLongProperty(const std::string& name) const
{
    throw NotImplementedYet();
}

int QpidTextMessage::getIntProperty(const std::string& name) const
{
    throw NotImplementedYet();
}

float QpidTextMessage::getFloatProperty(const std::string& name) const
{
    throw NotImplementedYet();
}

double QpidTextMessage::getDoubleProperty(const std::string& name) const
{
    throw NotImplementedYet();
}

unsigned char QpidTextMessage::getByteProperty(const std::string& name) const
{
    throw NotImplementedYet();
}

bool QpidTextMessage::getBooleanProperty(const std::string& name) const
{
    throw NotImplementedYet();
}

cms::Message::ValueType QpidTextMessage::getPropertyValueType(const std::string& name) const
{
    throw NotImplementedYet();
}

bool QpidTextMessage::propertyExists(const std::string& name) const
{
    throw NotImplementedYet();
}

std::vector< std::string > QpidTextMessage::getPropertyNames() const
{
    throw NotImplementedYet();
}

void QpidTextMessage::clearProperties()
{

}

void QpidTextMessage::clearBody()
{
    message_.setContent("");
}

void QpidTextMessage::acknowledge() const
{

}

cms::Message* QpidTextMessage::clone() const
{
    throw NotImplementedYet();
}

}
}
