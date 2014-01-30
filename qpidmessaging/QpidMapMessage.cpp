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

namespace qpid {
namespace cmsimpl {

QpidMapMessage::QpidMapMessage()
{

}

QpidMapMessage::QpidMapMessage(const QpidMapMessage& other)
{

}

QpidMapMessage::~QpidMapMessage()
{

}

QpidMapMessage& QpidMapMessage::operator=(const QpidMapMessage& other)
{

}

bool QpidMapMessage::operator==(const QpidMapMessage& other)
{

}

void QpidMapMessage::setString(const std::string& name, const std::string& value)
{

}

std::string QpidMapMessage::getString(const std::string& name)
{

}

void QpidMapMessage::setShort(const std::string& name, short int value)
{

}

short int QpidMapMessage::getShort(const std::string& name)
{

}

void QpidMapMessage::setLong(const std::string& name, long long int value)
{

}

long long int QpidMapMessage::getLong(const std::string& name)
{

}

void QpidMapMessage::setInt(const std::string& name, int value)
{

}

int QpidMapMessage::getInt(const std::string& name)
{

}

void QpidMapMessage::setFloat(const std::string& name, float value)
{

}

float QpidMapMessage::getFloat(const std::string& name)
{

}

void QpidMapMessage::setDouble(const std::string& name, double value)
{

}

double QpidMapMessage::getDouble(const std::string& name)
{

}

void QpidMapMessage::setChar(const std::string& name, char value)
{

}

char QpidMapMessage::getChar(const std::string& name)
{

}

void QpidMapMessage::setBytes(const std::string& name, const std::vector< unsigned int >& value)
{

}

std::vector< unsigned int > QpidMapMessage::getBytes(const std::string& name)
{

}

void QpidMapMessage::setByte(const std::string& name, unsigned char value)
{

}

unsigned char QpidMapMessage::getByte(const std::string& name)
{

}

void QpidMapMessage::setBoolean(const std::string& name, bool value)
{

}

bool QpidMapMessage::getBoolean(const std::string& name)
{

}

cms::Message::ValueType QpidMapMessage::getValueType(const std::string& key)
{

}

bool QpidMapMessage::itemExists(const std::string& name)
{

}

std::vector< std::string > QpidMapMessage::getMapNames()
{

}

bool QpidMapMessage::isEmpty()
{

}

void QpidMapMessage::setCMSType(const std::string& type)
{

}

std::string QpidMapMessage::getCMSType()
{

}

void QpidMapMessage::setCMSTimestamp(long long int timeStamp)
{

}

long long int QpidMapMessage::getCMSTimestamp()
{

}

void QpidMapMessage::setCMSReplyTo(const cms::Destination* destination)
{

}

const cms::Destination* QpidMapMessage::getCMSReplyTo()
{

}

void QpidMapMessage::setCMSRedelivered(bool redelivered)
{

}

bool QpidMapMessage::getCMSRedelivered()
{

}

void QpidMapMessage::setCMSPriority(int priority)
{

}

int QpidMapMessage::getCMSPriority()
{

}

void QpidMapMessage::setCMSMessageID(const std::string& id)
{

}

std::string QpidMapMessage::getCMSMessageID()
{

}

void QpidMapMessage::setCMSExpiration(long long int expireTime)
{

}

long long int QpidMapMessage::getCMSExpiration()
{

}

void QpidMapMessage::setCMSDestination(const cms::Destination* destination)
{

}

const cms::Destination* QpidMapMessage::getCMSDestination()
{

}

void QpidMapMessage::setCMSDeliveryMode(int mode)
{

}

int QpidMapMessage::getCMSDeliveryMode()
{

}

void QpidMapMessage::setCMSCorrelationID(const std::string& correlationId)
{

}

std::string QpidMapMessage::getCMSCorrelationID()
{

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

std::string QpidMapMessage::getStringProperty(const std::string& name)
{

}

short int QpidMapMessage::getShortProperty(const std::string& name)
{

}

long long int QpidMapMessage::getLongProperty(const std::string& name)
{

}

int QpidMapMessage::getIntProperty(const std::string& name)
{

}

float QpidMapMessage::getFloatProperty(const std::string& name)
{

}

double QpidMapMessage::getDoubleProperty(const std::string& name)
{

}

unsigned char QpidMapMessage::getByteProperty(const std::string& name)
{

}

bool QpidMapMessage::getBooleanProperty(const std::string& name)
{

}

cms::Message::ValueType QpidMapMessage::getPropertyValueType(const std::string& name)
{

}

bool QpidMapMessage::propertyExists(const std::string& name)
{

}

std::vector< std::string > QpidMapMessage::getPropertyNames()
{

}

void QpidMapMessage::clearProperties()
{

}

void QpidMapMessage::clearBody()
{

}

void QpidMapMessage::acknowledge()
{

}

cms::Message* QpidMapMessage::clone()
{

}

}
}
