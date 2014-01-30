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

namespace qpid {
namespace cmsimpl {

QpidBytesMessage::QpidBytesMessage()
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

}

bool QpidBytesMessage::operator==(const QpidBytesMessage& other)
{

}

void QpidBytesMessage::writeUTF(const std::string& value)
{

}

std::string QpidBytesMessage::readUTF()
{

}

void QpidBytesMessage::writeString(const std::string& value)
{

}

std::string QpidBytesMessage::readString()
{

}

void QpidBytesMessage::writeLong(long long int value)
{

}

long long int QpidBytesMessage::readLong()
{

}

void QpidBytesMessage::writeInt(int value)
{

}

int QpidBytesMessage::readInt()
{

}

void QpidBytesMessage::writeUnsignedShort(short unsigned int value)
{

}

short unsigned int QpidBytesMessage::readUnsignedShort()
{

}

void QpidBytesMessage::writeShort(short int value)
{

}

short int QpidBytesMessage::readShort()
{

}

void QpidBytesMessage::writeDouble(double value)
{

}

double QpidBytesMessage::readDouble()
{

}

void QpidBytesMessage::writeFloat(float value)
{

}

float QpidBytesMessage::readFloat()
{

}

void QpidBytesMessage::writeChar(char value)
{

}

char QpidBytesMessage::readChar()
{

}

void QpidBytesMessage::writeBytes(const unsigned char* value, int offset, int length)
{

}

int QpidBytesMessage::readBytes(unsigned char* buffer, int length)
{

}

void QpidBytesMessage::writeBytes(const std::vector< unsigned int, std::allocator< void > >& value)
{

}

int QpidBytesMessage::readBytes(std::vector< unsigned int, std::allocator< void > >& value)
{

}

void QpidBytesMessage::writeByte(unsigned char value)
{

}

unsigned char QpidBytesMessage::readByte()
{

}

void QpidBytesMessage::writeBoolean(bool value)
{

}

bool QpidBytesMessage::readBoolean()
{

}

void QpidBytesMessage::reset()
{

}

int QpidBytesMessage::getBodyLength()
{

}

unsigned char* QpidBytesMessage::getBodyBytes()
{

}

void QpidBytesMessage::setBodyBytes(const unsigned char* buffer, int numBytes)
{

}

void QpidBytesMessage::setCMSType(const std::string& type)
{

}

std::string QpidBytesMessage::getCMSType()
{

}

void QpidBytesMessage::setCMSTimestamp(long long int timeStamp)
{

}

long long int QpidBytesMessage::getCMSTimestamp()
{

}

void QpidBytesMessage::setCMSReplyTo(const cms::Destination* destination)
{

}

const cms::Destination* QpidBytesMessage::getCMSReplyTo()
{

}

void QpidBytesMessage::setCMSRedelivered(bool redelivered)
{

}

bool QpidBytesMessage::getCMSRedelivered()
{

}

void QpidBytesMessage::setCMSPriority(int priority)
{

}

int QpidBytesMessage::getCMSPriority()
{

}

void QpidBytesMessage::setCMSMessageID(const std::string& id)
{

}

std::string QpidBytesMessage::getCMSMessageID()
{

}

void QpidBytesMessage::setCMSExpiration(long long int expireTime)
{

}

long long int QpidBytesMessage::getCMSExpiration()
{

}

void QpidBytesMessage::setCMSDestination(const cms::Destination* destination)
{

}

const cms::Destination* QpidBytesMessage::getCMSDestination()
{

}

void QpidBytesMessage::setCMSDeliveryMode(int mode)
{

}

int QpidBytesMessage::getCMSDeliveryMode()
{

}

void QpidBytesMessage::setCMSCorrelationID(const std::string& correlationId)
{

}

std::string QpidBytesMessage::getCMSCorrelationID()
{

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

std::string QpidBytesMessage::getStringProperty(const std::string& name)
{

}

short int QpidBytesMessage::getShortProperty(const std::string& name)
{

}

long long int QpidBytesMessage::getLongProperty(const std::string& name)
{

}

int QpidBytesMessage::getIntProperty(const std::string& name)
{

}

float QpidBytesMessage::getFloatProperty(const std::string& name)
{

}

double QpidBytesMessage::getDoubleProperty(const std::string& name)
{

}

unsigned char QpidBytesMessage::getByteProperty(const std::string& name)
{

}

bool QpidBytesMessage::getBooleanProperty(const std::string& name)
{

}

cms::Message::ValueType QpidBytesMessage::getPropertyValueType(const std::string& name)
{

}

bool QpidBytesMessage::propertyExists(const std::string& name)
{

}

std::vector< std::string > QpidBytesMessage::getPropertyNames()
{

}

void QpidBytesMessage::clearProperties()
{

}

void QpidBytesMessage::clearBody()
{

}

void QpidBytesMessage::acknowledge()
{

}

cms::Message* QpidBytesMessage::clone()
{

}

}
}
