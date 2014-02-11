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

QpidStreamMessage::QpidStreamMessage() :
    QpidMessageBase("","")
{

}

QpidStreamMessage::~QpidStreamMessage()
{

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

}
}
