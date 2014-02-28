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

QpidBytesMessage::QpidBytesMessage(QpidSession& session) :
    QpidMessageBase(session, "","binary")
{

}

QpidBytesMessage::QpidBytesMessage(QpidSession& session, const unsigned char* bytes, int bytesSize) :
    QpidMessageBase(session, std::string((const char*)(bytes), bytesSize), "binary")
{

}

QpidBytesMessage::~QpidBytesMessage()
{

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

}
}
