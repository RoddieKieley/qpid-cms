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

QpidTextMessage::QpidTextMessage() :
    QpidMessage("", "text/plain")
{
}

QpidTextMessage::QpidTextMessage(const std::string& text) :
    QpidMessage(text, "text/plain")
{
}

QpidTextMessage::~QpidTextMessage()
{
}

void QpidTextMessage::setText(const std::string& msg)
{
    setContent(msg);
}

void QpidTextMessage::setText(const char* msg)
{
    std::string s(msg);
    setContent(s);
}

std::string QpidTextMessage::getText() const
{
    return getContent();
}

void QpidTextMessage::setCMSType(const std::string& type)
{
    QpidMessage::setCMSType(type);
}

std::string QpidTextMessage::getCMSType() const
{
    return QpidMessage::getCMSType();
}

void QpidTextMessage::setCMSTimestamp(long long int timeStamp)
{
    QpidMessage::setCMSTimestamp(timeStamp);
}

long long int QpidTextMessage::getCMSTimestamp() const
{
    return QpidMessage::getCMSTimestamp();
}

void QpidTextMessage::setCMSReplyTo(const cms::Destination* destination)
{
    QpidMessage::setCMSReplyTo(destination);
}

const cms::Destination* QpidTextMessage::getCMSReplyTo() const
{
    return QpidMessage::getCMSReplyTo();
}

void QpidTextMessage::setCMSRedelivered(bool redelivered)
{
    QpidMessage::setCMSRedelivered(redelivered);
}

bool QpidTextMessage::getCMSRedelivered() const
{
    return QpidMessage::getCMSRedelivered();
}

void QpidTextMessage::setCMSPriority(int priority)
{
    QpidMessage::setCMSPriority(priority);
}

int QpidTextMessage::getCMSPriority() const
{
    return QpidMessage::getCMSPriority();
}

void QpidTextMessage::setCMSMessageID(const std::string& id)
{
    QpidMessage::setCMSMessageID(id);
}

std::string QpidTextMessage::getCMSMessageID() const
{
    return QpidMessage::getCMSMessageID();
}

void QpidTextMessage::setCMSExpiration(long long int expiration)
{
    QpidMessage::setCMSExpiration(expiration);
}

long long int QpidTextMessage::getCMSExpiration() const
{
    return QpidMessage::getCMSExpiration();
}

void QpidTextMessage::setCMSDestination(const cms::Destination* destination)
{
    QpidMessage::setCMSDestination(destination);
}

const cms::Destination* QpidTextMessage::getCMSDestination() const
{
    return QpidMessage::getCMSDestination();
}

void QpidTextMessage::setCMSDeliveryMode(int mode)
{
    QpidMessage::setCMSDeliveryMode(mode);
}

int QpidTextMessage::getCMSDeliveryMode() const
{
    return QpidMessage::getCMSDeliveryMode();
}

void QpidTextMessage::setCMSCorrelationID(const std::string& correlationId)
{
    QpidMessage::setCMSCorrelationID(correlationId);
}

std::string QpidTextMessage::getCMSCorrelationID() const
{
    return QpidMessage::getCMSCorrelationID();
}

void QpidTextMessage::setStringProperty(const std::string& name, const std::string& value)
{
    QpidMessage::setStringProperty(name, value);
}

void QpidTextMessage::setShortProperty(const std::string& name, short int value)
{
    QpidMessage::setShortProperty(name, value);
}

void QpidTextMessage::setLongProperty(const std::string& name, long long int value)
{
    QpidMessage::setLongProperty(name, value);
}

void QpidTextMessage::setIntProperty(const std::string& name, int value)
{
    QpidMessage::setIntProperty(name, value);
}

void QpidTextMessage::setFloatProperty(const std::string& name, float value)
{
    QpidMessage::setFloatProperty(name, value);
}

void QpidTextMessage::setDoubleProperty(const std::string& name, double value)
{
    QpidMessage::setDoubleProperty(name, value);
}

void QpidTextMessage::setByteProperty(const std::string& name, unsigned char value)
{
    QpidMessage::setByteProperty(name, value);
}

void QpidTextMessage::setBooleanProperty(const std::string& name, bool value)
{
    QpidMessage::setBooleanProperty(name, value);
}

std::string QpidTextMessage::getStringProperty(const std::string& name) const
{
    return QpidMessage::getStringProperty(name);
}

short int QpidTextMessage::getShortProperty(const std::string& name) const
{
    return QpidMessage::getShortProperty(name);
}

long long int QpidTextMessage::getLongProperty(const std::string& name) const
{
    return QpidMessage::getLongProperty(name);
}

int QpidTextMessage::getIntProperty(const std::string& name) const
{
    return QpidMessage::getIntProperty(name);
}

float QpidTextMessage::getFloatProperty(const std::string& name) const
{
    return QpidMessage::getFloatProperty(name);
}

double QpidTextMessage::getDoubleProperty(const std::string& name) const
{
    return QpidMessage::getDoubleProperty(name);
}

unsigned char QpidTextMessage::getByteProperty(const std::string& name) const
{
    return QpidMessage::getByteProperty(name);
}

bool QpidTextMessage::getBooleanProperty(const std::string& name) const
{
    return QpidMessage::getBooleanProperty(name);
}

cms::Message::ValueType QpidTextMessage::getPropertyValueType(const std::string& name) const
{
    return QpidMessage::getPropertyValueType(name);
}

bool QpidTextMessage::propertyExists(const std::string& name) const
{
    return QpidMessage::propertyExists(name);
}

std::vector< std::string > QpidTextMessage::getPropertyNames() const
{
    return QpidMessage::getPropertyNames();
}

void QpidTextMessage::clearProperties()
{
    QpidMessage::clearProperties();
}

void QpidTextMessage::clearBody()
{
    QpidMessage::clearBody();
}

void QpidTextMessage::acknowledge() const
{
    QpidMessage::acknowledge();
}

cms::Message* QpidTextMessage::clone() const
{
    throw NotImplementedYet();
}

}
}
