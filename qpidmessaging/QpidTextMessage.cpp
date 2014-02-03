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

#include "QpidExceptions.h"

namespace qpid {
namespace cmsimpl {

QpidTextMessage::QpidTextMessage()
{

}

QpidTextMessage::QpidTextMessage(const QpidTextMessage& other)
{

}

QpidTextMessage::~QpidTextMessage()
{

}

QpidTextMessage& QpidTextMessage::operator=(const QpidTextMessage& other)
{
    throw NotImplementedYet();
}

bool QpidTextMessage::operator==(const QpidTextMessage& other)
{
    throw NotImplementedYet();
}

void QpidTextMessage::setText(const std::string& msg)
{

}

void QpidTextMessage::setText(const char* msg)
{

}

std::string QpidTextMessage::getText()
{
    throw NotImplementedYet();
}

void QpidTextMessage::setCMSType(const std::string& type)
{

}

std::string QpidTextMessage::getCMSType()
{
    throw NotImplementedYet();
}

void QpidTextMessage::setCMSTimestamp(long long int timeStamp)
{

}

long long int QpidTextMessage::getCMSTimestamp()
{
    throw NotImplementedYet();
}

void QpidTextMessage::setCMSReplyTo(const cms::Destination* destination)
{

}

const cms::Destination* QpidTextMessage::getCMSReplyTo()
{
    throw NotImplementedYet();
}

void QpidTextMessage::setCMSRedelivered(bool redelivered)
{

}

bool QpidTextMessage::getCMSRedelivered()
{
    throw NotImplementedYet();
}

void QpidTextMessage::setCMSPriority(int priority)
{

}

int QpidTextMessage::getCMSPriority()
{
    throw NotImplementedYet();
}

void QpidTextMessage::setCMSMessageID(const std::string& id)
{

}

std::string QpidTextMessage::getCMSMessageID()
{
    throw NotImplementedYet();
}

void QpidTextMessage::setCMSExpiration(long long int expireTime)
{

}

long long int QpidTextMessage::getCMSExpiration()
{
    throw NotImplementedYet();
}

void QpidTextMessage::setCMSDestination(const cms::Destination* destination)
{

}

const cms::Destination* QpidTextMessage::getCMSDestination()
{
    throw NotImplementedYet();
}

void QpidTextMessage::setCMSDeliveryMode(int mode)
{

}

int QpidTextMessage::getCMSDeliveryMode()
{
    throw NotImplementedYet();
}

void QpidTextMessage::setCMSCorrelationID(const std::string& correlationId)
{

}

std::string QpidTextMessage::getCMSCorrelationID()
{
    throw NotImplementedYet();
}

void QpidTextMessage::setStringProperty(const std::string& name, const std::string& value)
{

}

void QpidTextMessage::setShortProperty(const std::string& name, short int value)
{

}

void QpidTextMessage::setLongProperty(const std::string& name, long long int value)
{

}

void QpidTextMessage::setIntProperty(const std::string& name, int value)
{

}

void QpidTextMessage::setFloatProperty(const std::string& name, float value)
{

}

void QpidTextMessage::setDoubleProperty(const std::string& name, double value)
{

}

void QpidTextMessage::setByteProperty(const std::string& name, unsigned char value)
{

}

void QpidTextMessage::setBooleanProperty(const std::string& name, bool value)
{

}

std::string QpidTextMessage::getStringProperty(const std::string& name)
{
    throw NotImplementedYet();
}

short int QpidTextMessage::getShortProperty(const std::string& name)
{
    throw NotImplementedYet();
}

long long int QpidTextMessage::getLongProperty(const std::string& name)
{
    throw NotImplementedYet();
}

int QpidTextMessage::getIntProperty(const std::string& name)
{
    throw NotImplementedYet();
}

float QpidTextMessage::getFloatProperty(const std::string& name)
{
    throw NotImplementedYet();
}

double QpidTextMessage::getDoubleProperty(const std::string& name)
{
    throw NotImplementedYet();
}

unsigned char QpidTextMessage::getByteProperty(const std::string& name)
{
    throw NotImplementedYet();
}

bool QpidTextMessage::getBooleanProperty(const std::string& name)
{
    throw NotImplementedYet();
}

cms::Message::ValueType QpidTextMessage::getPropertyValueType(const std::string& name)
{
    throw NotImplementedYet();
}

bool QpidTextMessage::propertyExists(const std::string& name)
{
    throw NotImplementedYet();
}

std::vector< std::string > QpidTextMessage::getPropertyNames()
{
    throw NotImplementedYet();
}

void QpidTextMessage::clearProperties()
{

}

void QpidTextMessage::clearBody()
{

}

void QpidTextMessage::acknowledge()
{

}

cms::Message* QpidTextMessage::clone()
{
    throw NotImplementedYet();
}

}
}
