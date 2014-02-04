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

#include "QpidBytesMessage.h"

#include "QpidExceptions.h"

namespace qpid {
namespace cmsimpl {

QpidBytesMessage::QpidBytesMessage()
{

}

QpidBytesMessage::QpidBytesMessage(const unsigned char* bytes, int bytesSize)
{

}

QpidBytesMessage::QpidBytesMessage(const QpidBytesMessage& other)
{

}

QpidBytesMessage::~QpidBytesMessage()
{

}

QpidBytesMessage& QpidBytesMessage::operator=(const QpidBytesMessage& other)
{
    throw NotImplementedYet();
}

bool QpidBytesMessage::operator==(const QpidBytesMessage& other)
{
    throw NotImplementedYet();
}

void QpidBytesMessage::writeUTF(const std::string& value)
{

}

std::string QpidBytesMessage::readUTF() const
{
    throw NotImplementedYet();
}

void QpidBytesMessage::writeString(const std::string& value)
{

}

std::string QpidBytesMessage::readString() const
{
    throw NotImplementedYet();
}

void QpidBytesMessage::writeLong(long long int value)
{

}

long long int QpidBytesMessage::readLong() const
{
    throw NotImplementedYet();
}

void QpidBytesMessage::writeInt(int value)
{

}

int QpidBytesMessage::readInt() const
{
    throw NotImplementedYet();
}

void QpidBytesMessage::writeUnsignedShort(short unsigned int value)
{

}

short unsigned int QpidBytesMessage::readUnsignedShort() const
{
    throw NotImplementedYet();
}

void QpidBytesMessage::writeShort(short int value)
{

}

short int QpidBytesMessage::readShort() const
{
    throw NotImplementedYet();
}

void QpidBytesMessage::writeDouble(double value)
{

}

double QpidBytesMessage::readDouble() const
{
    throw NotImplementedYet();
}

void QpidBytesMessage::writeFloat(float value)
{

}

float QpidBytesMessage::readFloat() const
{
    throw NotImplementedYet();
}

void QpidBytesMessage::writeChar(char value)
{

}

char QpidBytesMessage::readChar() const
{
    throw NotImplementedYet();
}

void QpidBytesMessage::writeBytes(const unsigned char* value, int offset, int length)
{

}

int QpidBytesMessage::readBytes(unsigned char* buffer, int length) const
{
    throw NotImplementedYet();
}

void QpidBytesMessage::writeBytes(const std::vector< unsigned char >& value)
{

}

int QpidBytesMessage::readBytes(std::vector< unsigned char >& value) const
{
    throw NotImplementedYet();
}

void QpidBytesMessage::writeByte(unsigned char value)
{

}

unsigned char QpidBytesMessage::readByte() const
{
    throw NotImplementedYet();
}

void QpidBytesMessage::writeBoolean(bool value)
{

}

bool QpidBytesMessage::readBoolean() const
{
    throw NotImplementedYet();
}

void QpidBytesMessage::reset()
{

}

int QpidBytesMessage::getBodyLength() const
{
    throw NotImplementedYet();
}

unsigned char* QpidBytesMessage::getBodyBytes() const
{
    throw NotImplementedYet();
}

void QpidBytesMessage::setBodyBytes(const unsigned char* buffer, int numBytes)
{

}

void QpidBytesMessage::setCMSType(const std::string& type)
{

}

std::string QpidBytesMessage::getCMSType() const
{
    throw NotImplementedYet();
}

void QpidBytesMessage::setCMSTimestamp(long long int timeStamp)
{

}

long long int QpidBytesMessage::getCMSTimestamp() const
{
    throw NotImplementedYet();
}

void QpidBytesMessage::setCMSReplyTo(const cms::Destination* destination)
{

}

const cms::Destination* QpidBytesMessage::getCMSReplyTo() const
{
    throw NotImplementedYet();
}

void QpidBytesMessage::setCMSRedelivered(bool redelivered)
{

}

bool QpidBytesMessage::getCMSRedelivered() const
{
    throw NotImplementedYet();
}

void QpidBytesMessage::setCMSPriority(int priority)
{

}

int QpidBytesMessage::getCMSPriority() const
{
    throw NotImplementedYet();
}

void QpidBytesMessage::setCMSMessageID(const std::string& id)
{

}

std::string QpidBytesMessage::getCMSMessageID() const
{
    throw NotImplementedYet();
}

void QpidBytesMessage::setCMSExpiration(long long int expireTime)
{

}

long long int QpidBytesMessage::getCMSExpiration() const
{
    throw NotImplementedYet();
}

void QpidBytesMessage::setCMSDestination(const cms::Destination* destination)
{

}

const cms::Destination* QpidBytesMessage::getCMSDestination() const
{
    throw NotImplementedYet();
}

void QpidBytesMessage::setCMSDeliveryMode(int mode)
{

}

int QpidBytesMessage::getCMSDeliveryMode() const
{
    throw NotImplementedYet();
}

void QpidBytesMessage::setCMSCorrelationID(const std::string& correlationId)
{

}

std::string QpidBytesMessage::getCMSCorrelationID() const
{
    throw NotImplementedYet();
}

void QpidBytesMessage::setStringProperty(const std::string& name, const std::string& value)
{

}

void QpidBytesMessage::setShortProperty(const std::string& name, short int value)
{

}

void QpidBytesMessage::setLongProperty(const std::string& name, long long int value)
{

}

void QpidBytesMessage::setIntProperty(const std::string& name, int value)
{

}

void QpidBytesMessage::setFloatProperty(const std::string& name, float value)
{

}

void QpidBytesMessage::setDoubleProperty(const std::string& name, double value)
{

}

void QpidBytesMessage::setByteProperty(const std::string& name, unsigned char value)
{

}

void QpidBytesMessage::setBooleanProperty(const std::string& name, bool value)
{

}

std::string QpidBytesMessage::getStringProperty(const std::string& name) const
{
    throw NotImplementedYet();
}

short int QpidBytesMessage::getShortProperty(const std::string& name) const
{
    throw NotImplementedYet();
}

long long int QpidBytesMessage::getLongProperty(const std::string& name) const
{
    throw NotImplementedYet();
}

int QpidBytesMessage::getIntProperty(const std::string& name) const
{
    throw NotImplementedYet();
}

float QpidBytesMessage::getFloatProperty(const std::string& name) const
{
    throw NotImplementedYet();
}

double QpidBytesMessage::getDoubleProperty(const std::string& name) const
{
    throw NotImplementedYet();
}

unsigned char QpidBytesMessage::getByteProperty(const std::string& name) const
{
    throw NotImplementedYet();
}

bool QpidBytesMessage::getBooleanProperty(const std::string& name) const
{
    throw NotImplementedYet();
}

cms::Message::ValueType QpidBytesMessage::getPropertyValueType(const std::string& name) const
{
    throw NotImplementedYet();
}

bool QpidBytesMessage::propertyExists(const std::string& name) const
{
    throw NotImplementedYet();
}

std::vector< std::string > QpidBytesMessage::getPropertyNames() const
{
    throw NotImplementedYet();
}

void QpidBytesMessage::clearProperties()
{

}

void QpidBytesMessage::clearBody()
{

}

void QpidBytesMessage::acknowledge() const
{

}

cms::BytesMessage* QpidBytesMessage::clone() const
{
    throw NotImplementedYet();
}

}
}
