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

}

bool QpidStreamMessage::operator==(const QpidStreamMessage& other)
{

}

void QpidStreamMessage::reset()
{

}

void QpidStreamMessage::writeString(const std::string& value)
{

}

std::string QpidStreamMessage::readString()
{

}

void QpidStreamMessage::writeLong(long long int value)
{

}

long long int QpidStreamMessage::readLong()
{

}

void QpidStreamMessage::writeInt(int value)
{

}

int QpidStreamMessage::readInt()
{

}

void QpidStreamMessage::writeUnsignedShort(short unsigned int value)
{

}

short unsigned int QpidStreamMessage::readUnsignedShort()
{

}

void QpidStreamMessage::writeShort(short int value)
{

}

short int QpidStreamMessage::readShort()
{

}

void QpidStreamMessage::writeDouble(double value)
{

}

double QpidStreamMessage::readDouble()
{

}

void QpidStreamMessage::writeFloat(float value)
{

}

float QpidStreamMessage::readFloat()
{

}

void QpidStreamMessage::writeChar(char value)
{

}

char QpidStreamMessage::readChar()
{

}

void QpidStreamMessage::writeBytes(const unsigned char* value, int offset, int length)
{

}

int QpidStreamMessage::readBytes(unsigned char* buffer, int length)
{

}

void QpidStreamMessage::writeBytes(const std::vector< unsigned int, std::allocator< void > >& value)
{

}

int QpidStreamMessage::readBytes(std::vector< unsigned int, std::allocator< void > >& value)
{

}

void QpidStreamMessage::writeByte(unsigned char value)
{

}

unsigned char QpidStreamMessage::readByte()
{

}

void QpidStreamMessage::writeBoolean(bool value)
{

}

bool QpidStreamMessage::readBoolean()
{

}

cms::Message::ValueType QpidStreamMessage::getNextValueType()
{

}

void QpidStreamMessage::setCMSType(const std::string& type)
{

}

std::string QpidStreamMessage::getCMSType()
{

}

void QpidStreamMessage::setCMSTimestamp(long long int timeStamp)
{

}

long long int QpidStreamMessage::getCMSTimestamp()
{

}

void QpidStreamMessage::setCMSReplyTo(const cms::Destination* destination)
{

}

const cms::Destination* QpidStreamMessage::getCMSReplyTo()
{

}

void QpidStreamMessage::setCMSRedelivered(bool redelivered)
{

}

bool QpidStreamMessage::getCMSRedelivered()
{

}

void QpidStreamMessage::setCMSPriority(int priority)
{

}

int QpidStreamMessage::getCMSPriority()
{

}

void QpidStreamMessage::setCMSMessageID(const std::string& id)
{

}

std::string QpidStreamMessage::getCMSMessageID()
{

}

void QpidStreamMessage::setCMSExpiration(long long int expireTime)
{

}

long long int QpidStreamMessage::getCMSExpiration()
{

}

void QpidStreamMessage::setCMSDestination(const cms::Destination* destination)
{

}

const cms::Destination* QpidStreamMessage::getCMSDestination()
{

}

void QpidStreamMessage::setCMSDeliveryMode(int mode)
{

}

int QpidStreamMessage::getCMSDeliveryMode()
{

}

void QpidStreamMessage::setCMSCorrelationID(const std::string& correlationId)
{

}

std::string QpidStreamMessage::getCMSCorrelationID()
{

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

std::string QpidStreamMessage::getStringProperty(const std::string& name)
{

}

short int QpidStreamMessage::getShortProperty(const std::string& name)
{

}

long long int QpidStreamMessage::getLongProperty(const std::string& name)
{

}

int QpidStreamMessage::getIntProperty(const std::string& name)
{

}

float QpidStreamMessage::getFloatProperty(const std::string& name)
{

}

double QpidStreamMessage::getDoubleProperty(const std::string& name)
{

}

unsigned char QpidStreamMessage::getByteProperty(const std::string& name)
{

}

bool QpidStreamMessage::getBooleanProperty(const std::string& name)
{

}

cms::Message::ValueType QpidStreamMessage::getPropertyValueType(const std::string& name)
{

}

bool QpidStreamMessage::propertyExists(const std::string& name)
{

}

std::vector< std::string > QpidStreamMessage::getPropertyNames()
{

}

void QpidStreamMessage::clearProperties()
{

}

void QpidStreamMessage::clearBody()
{

}

void QpidStreamMessage::acknowledge()
{

}

cms::Message* QpidStreamMessage::clone()
{

}

}
}
