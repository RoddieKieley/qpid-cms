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

#include "QpidMessage.h"

#include "QpidExceptions.h"

namespace qpid {
namespace cmsimpl {

QpidMessage::QpidMessage()
{

}

QpidMessage::QpidMessage(const QpidMessage& other)
{

}

QpidMessage::~QpidMessage()
{

}

QpidMessage& QpidMessage::operator=(const QpidMessage& other)
{
    throw NotImplementedYet();
}

bool QpidMessage::operator==(const QpidMessage& other)
{
    throw NotImplementedYet();
}

void QpidMessage::setCMSType(const std::string& type)
{

}

std::string QpidMessage::getCMSType() const
{
    throw NotImplementedYet();
}

void QpidMessage::setCMSTimestamp(long long int timeStamp)
{

}

long long int QpidMessage::getCMSTimestamp() const
{
    throw NotImplementedYet();
}

void QpidMessage::setCMSReplyTo(const cms::Destination* destination)
{

}

const cms::Destination* QpidMessage::getCMSReplyTo() const
{
    throw NotImplementedYet();
}

void QpidMessage::setCMSRedelivered(bool redelivered)
{

}

bool QpidMessage::getCMSRedelivered() const
{
    throw NotImplementedYet();
}

void QpidMessage::setCMSPriority(int priority)
{

}

int QpidMessage::getCMSPriority() const
{
    throw NotImplementedYet();
}

void QpidMessage::setCMSMessageID(const std::string& id)
{

}

std::string QpidMessage::getCMSMessageID() const
{
    throw NotImplementedYet();
}

void QpidMessage::setCMSExpiration(long long int expireTime)
{

}

long long int QpidMessage::getCMSExpiration() const
{
    throw NotImplementedYet();
}

void QpidMessage::setCMSDestination(const cms::Destination* destination)
{

}

const cms::Destination* QpidMessage::getCMSDestination() const
{
    throw NotImplementedYet();
}

void QpidMessage::setCMSDeliveryMode(int mode)
{

}

int QpidMessage::getCMSDeliveryMode() const
{
    throw NotImplementedYet();
}

void QpidMessage::setCMSCorrelationID(const std::string& correlationId)
{

}

std::string QpidMessage::getCMSCorrelationID() const
{
    throw NotImplementedYet();
}

void QpidMessage::setStringProperty(const std::string& name, const std::string& value)
{

}

void QpidMessage::setShortProperty(const std::string& name, short int value)
{

}

void QpidMessage::setLongProperty(const std::string& name, long long int value)
{

}

void QpidMessage::setIntProperty(const std::string& name, int value)
{

}

void QpidMessage::setFloatProperty(const std::string& name, float value)
{

}

void QpidMessage::setDoubleProperty(const std::string& name, double value)
{

}

void QpidMessage::setByteProperty(const std::string& name, unsigned char value)
{

}

void QpidMessage::setBooleanProperty(const std::string& name, bool value)
{

}

std::string QpidMessage::getStringProperty(const std::string& name) const
{
    throw NotImplementedYet();
}

short int QpidMessage::getShortProperty(const std::string& name) const
{
    throw NotImplementedYet();
}

long long int QpidMessage::getLongProperty(const std::string& name) const
{
    throw NotImplementedYet();
}

int QpidMessage::getIntProperty(const std::string& name) const
{
    throw NotImplementedYet();
}

float QpidMessage::getFloatProperty(const std::string& name) const
{
    throw NotImplementedYet();
}

double QpidMessage::getDoubleProperty(const std::string& name) const
{
    throw NotImplementedYet();
}

unsigned char QpidMessage::getByteProperty(const std::string& name) const
{
    throw NotImplementedYet();
}

bool QpidMessage::getBooleanProperty(const std::string& name) const
{
    throw NotImplementedYet();
}

cms::Message::ValueType QpidMessage::getPropertyValueType(const std::string& name) const
{
    throw NotImplementedYet();
}

bool QpidMessage::propertyExists(const std::string& name) const
{
    throw NotImplementedYet();
}

std::vector< std::string> QpidMessage::getPropertyNames() const
{
    throw NotImplementedYet();
}

void QpidMessage::clearProperties()
{

}

void QpidMessage::clearBody()
{

}

void QpidMessage::acknowledge() const
{

}

cms::Message* QpidMessage::clone() const
{
    throw NotImplementedYet();
}

}
}
