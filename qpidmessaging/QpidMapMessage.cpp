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

#include "QpidMapMessage.h"

#include "QpidExceptions.h"

namespace qpid {
namespace cmsimpl {

QpidMapMessage::QpidMapMessage()
{

}

QpidMapMessage::~QpidMapMessage()
{

}

void QpidMapMessage::setString(const std::string& name, const std::string& value)
{

}

std::string QpidMapMessage::getString(const std::string& name) const
{
    throw NotImplementedYet();
}

void QpidMapMessage::setShort(const std::string& name, short int value)
{

}

short int QpidMapMessage::getShort(const std::string& name) const
{
    throw NotImplementedYet();
}

void QpidMapMessage::setLong(const std::string& name, long long int value)
{

}

long long int QpidMapMessage::getLong(const std::string& name) const
{
    throw NotImplementedYet();
}

void QpidMapMessage::setInt(const std::string& name, int value)
{

}

int QpidMapMessage::getInt(const std::string& name) const
{
    throw NotImplementedYet();
}

void QpidMapMessage::setFloat(const std::string& name, float value)
{

}

float QpidMapMessage::getFloat(const std::string& name) const
{
    throw NotImplementedYet();
}

void QpidMapMessage::setDouble(const std::string& name, double value)
{

}

double QpidMapMessage::getDouble(const std::string& name) const
{
    throw NotImplementedYet();
}

void QpidMapMessage::setChar(const std::string& name, char value)
{

}

char QpidMapMessage::getChar(const std::string& name) const
{
    throw NotImplementedYet();
}

void QpidMapMessage::setBytes(const std::string& name, const std::vector< unsigned char >& value)
{

}

std::vector< unsigned char > QpidMapMessage::getBytes(const std::string& name) const
{
    throw NotImplementedYet();
}

void QpidMapMessage::setByte(const std::string& name, unsigned char value)
{

}

unsigned char QpidMapMessage::getByte(const std::string& name) const
{
    throw NotImplementedYet();
}

void QpidMapMessage::setBoolean(const std::string& name, bool value)
{

}

bool QpidMapMessage::getBoolean(const std::string& name) const
{
    throw NotImplementedYet();
}

cms::Message::ValueType QpidMapMessage::getValueType(const std::string& key) const
{
    throw NotImplementedYet();
}

bool QpidMapMessage::itemExists(const std::string& name) const
{
    throw NotImplementedYet();
}

std::vector< std::string > QpidMapMessage::getMapNames() const
{
    throw NotImplementedYet();
}

bool QpidMapMessage::isEmpty() const
{
    throw NotImplementedYet();
}

void QpidMapMessage::setCMSType(const std::string& type)
{

}

std::string QpidMapMessage::getCMSType() const
{
    throw NotImplementedYet();
}

void QpidMapMessage::setCMSTimestamp(long long int timeStamp)
{

}

long long int QpidMapMessage::getCMSTimestamp() const
{
    throw NotImplementedYet();
}

void QpidMapMessage::setCMSReplyTo(const cms::Destination* destination)
{

}

const cms::Destination* QpidMapMessage::getCMSReplyTo() const
{
    throw NotImplementedYet();
}

void QpidMapMessage::setCMSRedelivered(bool redelivered)
{

}

bool QpidMapMessage::getCMSRedelivered() const
{
    throw NotImplementedYet();
}

void QpidMapMessage::setCMSPriority(int priority)
{

}

int QpidMapMessage::getCMSPriority() const
{
    throw NotImplementedYet();
}

void QpidMapMessage::setCMSMessageID(const std::string& id)
{

}

std::string QpidMapMessage::getCMSMessageID() const
{
    throw NotImplementedYet();
}

void QpidMapMessage::setCMSExpiration(long long int expireTime)
{

}

long long int QpidMapMessage::getCMSExpiration() const
{
    throw NotImplementedYet();
}

void QpidMapMessage::setCMSDestination(const cms::Destination* destination)
{

}

const cms::Destination* QpidMapMessage::getCMSDestination() const
{
    throw NotImplementedYet();
}

void QpidMapMessage::setCMSDeliveryMode(int mode)
{

}

int QpidMapMessage::getCMSDeliveryMode() const
{
    throw NotImplementedYet();
}

void QpidMapMessage::setCMSCorrelationID(const std::string& correlationId)
{

}

std::string QpidMapMessage::getCMSCorrelationID() const
{
    throw NotImplementedYet();
}

void QpidMapMessage::setStringProperty(const std::string& name, const std::string& value)
{

}

void QpidMapMessage::setShortProperty(const std::string& name, short int value)
{

}

void QpidMapMessage::setLongProperty(const std::string& name, long long int value)
{

}

void QpidMapMessage::setIntProperty(const std::string& name, int value)
{

}

void QpidMapMessage::setFloatProperty(const std::string& name, float value)
{

}

void QpidMapMessage::setDoubleProperty(const std::string& name, double value)
{

}

void QpidMapMessage::setByteProperty(const std::string& name, unsigned char value)
{

}

void QpidMapMessage::setBooleanProperty(const std::string& name, bool value)
{

}

std::string QpidMapMessage::getStringProperty(const std::string& name) const
{
    throw NotImplementedYet();
}

short int QpidMapMessage::getShortProperty(const std::string& name) const
{
    throw NotImplementedYet();
}

long long int QpidMapMessage::getLongProperty(const std::string& name) const
{
    throw NotImplementedYet();
}

int QpidMapMessage::getIntProperty(const std::string& name) const
{
    throw NotImplementedYet();
}

float QpidMapMessage::getFloatProperty(const std::string& name) const
{
    throw NotImplementedYet();
}

double QpidMapMessage::getDoubleProperty(const std::string& name) const
{
    throw NotImplementedYet();
}

unsigned char QpidMapMessage::getByteProperty(const std::string& name) const
{
    throw NotImplementedYet();
}

bool QpidMapMessage::getBooleanProperty(const std::string& name) const
{
    throw NotImplementedYet();
}

cms::Message::ValueType QpidMapMessage::getPropertyValueType(const std::string& name) const
{
    throw NotImplementedYet();
}

bool QpidMapMessage::propertyExists(const std::string& name) const
{
    throw NotImplementedYet();
}

std::vector< std::string > QpidMapMessage::getPropertyNames() const
{
    throw NotImplementedYet();
}

void QpidMapMessage::clearProperties()
{

}

void QpidMapMessage::clearBody()
{

}

void QpidMapMessage::acknowledge() const
{

}

cms::Message* QpidMapMessage::clone() const
{
    throw NotImplementedYet();
}

}
}
