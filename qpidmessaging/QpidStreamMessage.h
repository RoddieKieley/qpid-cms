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

#ifndef QPID_CMSIMPL_QPIDSTREAMMESSAGE_H
#define QPID_CMSIMPL_QPIDSTREAMMESSAGE_H

#include "cms/StreamMessage.h"

#include "QpidMessageBase.h"

#include <qpid/messaging/Session.h>

namespace qpid {
namespace cmsimpl {

class QpidStreamMessage :  public QpidMessageBase<cms::StreamMessage>
{
public:
    QpidStreamMessage(QpidSession& session);
    ~QpidStreamMessage();

    // Hide copying and assignment
private:
    QpidStreamMessage(const QpidStreamMessage& other);
    QpidStreamMessage& operator=(const QpidStreamMessage& other);

private:
    virtual void reset();
    virtual void writeString(const std::string& value);
    virtual std::string readString() const;
    virtual void writeLong(long long int value);
    virtual long long int readLong() const;
    virtual void writeInt(int value);
    virtual int readInt() const;
    virtual void writeUnsignedShort(short unsigned int value);
    virtual short unsigned int readUnsignedShort() const;
    virtual void writeShort(short int value);
    virtual short int readShort() const;
    virtual void writeDouble(double value);
    virtual double readDouble() const;
    virtual void writeFloat(float value);
    virtual float readFloat() const;
    virtual void writeChar(char value);
    virtual char readChar() const;
    virtual void writeBytes(const unsigned char* value, int offset, int length);
    virtual int readBytes(unsigned char* buffer, int length) const;
    virtual void writeBytes(const std::vector< unsigned char >& value);
    virtual int readBytes(std::vector< unsigned char >& value) const;
    virtual void writeByte(unsigned char value);
    virtual unsigned char readByte() const;
    virtual void writeBoolean(bool value);
    virtual bool readBoolean() const;
    virtual cms::Message::ValueType getNextValueType() const;
};
}
}

#endif // QPID_CMSIMPL_QPIDSTREAMMESSAGE_H
