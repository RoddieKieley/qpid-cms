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

#include "QpidStreamMessage.h"

#include "QpidExceptions.h"

namespace qpid {
namespace cmsimpl {

QpidStreamMessage::QpidStreamMessage()
{

}

QpidStreamMessage::QpidStreamMessage(const QpidStreamMessage& other)
{

}

QpidStreamMessage::~QpidStreamMessage()
{

}

QpidStreamMessage& QpidStreamMessage::operator=(const QpidStreamMessage& other)
{
    throw NotImplementedYet();
}

bool QpidStreamMessage::operator==(const QpidStreamMessage& other)
{
    throw NotImplementedYet();
}

void QpidStreamMessage::reset()
{

}

void QpidStreamMessage::writeString(const std::string& value)
{

}

std::string QpidStreamMessage::readString() const
{
    throw NotImplementedYet();
}

void QpidStreamMessage::writeLong(long long int value)
{

}

long long int QpidStreamMessage::readLong() const
{
    throw NotImplementedYet();
}

void QpidStreamMessage::writeInt(int value)
{

}

int QpidStreamMessage::readInt() const
{
    throw NotImplementedYet();
}

void QpidStreamMessage::writeUnsignedShort(short unsigned int value)
{

}

short unsigned int QpidStreamMessage::readUnsignedShort() const
{
    throw NotImplementedYet();
}

void QpidStreamMessage::writeShort(short int value)
{

}

short int QpidStreamMessage::readShort() const
{
    throw NotImplementedYet();
}

void QpidStreamMessage::writeDouble(double value)
{

}

double QpidStreamMessage::readDouble() const
{
    throw NotImplementedYet();
}

void QpidStreamMessage::writeFloat(float value)
{

}

float QpidStreamMessage::readFloat() const
{
    throw NotImplementedYet();
}

void QpidStreamMessage::writeChar(char value)
{

}

char QpidStreamMessage::readChar() const
{
    throw NotImplementedYet();
}

void QpidStreamMessage::writeBytes(const unsigned char* value, int offset, int length)
{

}

int QpidStreamMessage::readBytes(unsigned char* buffer, int length) const
{
    throw NotImplementedYet();
}

void QpidStreamMessage::writeBytes(const std::vector< unsigned char >& value)
{

}

int QpidStreamMessage::readBytes(std::vector< unsigned char >& value) const
{
    throw NotImplementedYet();
}

void QpidStreamMessage::writeByte(unsigned char value)
{

}

unsigned char QpidStreamMessage::readByte() const
{
    throw NotImplementedYet();
}

void QpidStreamMessage::writeBoolean(bool value)
{

}

bool QpidStreamMessage::readBoolean() const
{
    throw NotImplementedYet();
}

cms::Message::ValueType QpidStreamMessage::getNextValueType() const
{
    throw NotImplementedYet();
}

void QpidStreamMessage::setCMSType(const std::string& type)
{

}

std::string QpidStreamMessage::getCMSType() const
{
    throw NotImplementedYet();
}

void QpidStreamMessage::setCMSTimestamp(long long int timeStamp)
{

}

long long int QpidStreamMessage::getCMSTimestamp() const
{
    throw NotImplementedYet();
}

void QpidStreamMessage::setCMSReplyTo(const cms::Destination* destination)
{

}

const cms::Destination* QpidStreamMessage::getCMSReplyTo() const
{
    throw NotImplementedYet();
}

void QpidStreamMessage::setCMSRedelivered(bool redelivered)
{

}

bool QpidStreamMessage::getCMSRedelivered() const
{
    throw NotImplementedYet();
}

void QpidStreamMessage::setCMSPriority(int priority)
{

}

int QpidStreamMessage::getCMSPriority() const
{
    throw NotImplementedYet();
}

void QpidStreamMessage::setCMSMessageID(const std::string& id)
{

}

std::string QpidStreamMessage::getCMSMessageID() const
{
    throw NotImplementedYet();
}

void QpidStreamMessage::setCMSExpiration(long long int expireTime)
{

}

long long int QpidStreamMessage::getCMSExpiration() const
{
    throw NotImplementedYet();
}

void QpidStreamMessage::setCMSDestination(const cms::Destination* destination)
{

}

const cms::Destination* QpidStreamMessage::getCMSDestination() const
{
    throw NotImplementedYet();
}

void QpidStreamMessage::setCMSDeliveryMode(int mode)
{

}

int QpidStreamMessage::getCMSDeliveryMode() const
{
    throw NotImplementedYet();
}

void QpidStreamMessage::setCMSCorrelationID(const std::string& correlationId)
{

}

std::string QpidStreamMessage::getCMSCorrelationID() const
{
    throw NotImplementedYet();
}

void QpidStreamMessage::setStringProperty(const std::string& name, const std::string& value)
{

}

void QpidStreamMessage::setShortProperty(const std::string& name, short int value)
{

}

void QpidStreamMessage::setLongProperty(const std::string& name, long long int value)
{

}

void QpidStreamMessage::setIntProperty(const std::string& name, int value)
{

}

void QpidStreamMessage::setFloatProperty(const std::string& name, float value)
{

}

void QpidStreamMessage::setDoubleProperty(const std::string& name, double value)
{

}

void QpidStreamMessage::setByteProperty(const std::string& name, unsigned char value)
{

}

void QpidStreamMessage::setBooleanProperty(const std::string& name, bool value)
{

}

std::string QpidStreamMessage::getStringProperty(const std::string& name) const
{
    throw NotImplementedYet();
}

short int QpidStreamMessage::getShortProperty(const std::string& name) const
{
    throw NotImplementedYet();
}

long long int QpidStreamMessage::getLongProperty(const std::string& name) const
{
    throw NotImplementedYet();
}

int QpidStreamMessage::getIntProperty(const std::string& name) const
{
    throw NotImplementedYet();
}

float QpidStreamMessage::getFloatProperty(const std::string& name) const
{
    throw NotImplementedYet();
}

double QpidStreamMessage::getDoubleProperty(const std::string& name) const
{
    throw NotImplementedYet();
}

unsigned char QpidStreamMessage::getByteProperty(const std::string& name) const
{
    throw NotImplementedYet();
}

bool QpidStreamMessage::getBooleanProperty(const std::string& name) const
{
    throw NotImplementedYet();
}

cms::Message::ValueType QpidStreamMessage::getPropertyValueType(const std::string& name) const
{
    throw NotImplementedYet();
}

bool QpidStreamMessage::propertyExists(const std::string& name) const
{
    throw NotImplementedYet();
}

std::vector< std::string > QpidStreamMessage::getPropertyNames() const
{
    throw NotImplementedYet();
}

void QpidStreamMessage::clearProperties()
{

}

void QpidStreamMessage::clearBody()
{

}

void QpidStreamMessage::acknowledge() const
{

}

cms::Message* QpidStreamMessage::clone() const
{
    throw NotImplementedYet();
}

}
}
