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

#ifndef QPID_CMSIMPL_QPIDBYTESMESSAGE_H
#define QPID_CMSIMPL_QPIDBYTESMESSAGE_H

#include "cms/BytesMessage.h"

#include "QpidMessageBase.h"

#include <qpid/messaging/Session.h>

namespace qpid {
namespace cmsimpl {

class QpidBytesMessage :  public QpidMessageBase<cms::BytesMessage>
{
public:
    QpidBytesMessage(QpidSession& session);
    QpidBytesMessage(QpidSession& session, const qpid::messaging::Message& qmessage);
    QpidBytesMessage(QpidSession& session, const unsigned char* bytes, int bytesSize);
    ~QpidBytesMessage();

    // Hide copy constructor and assignment
private:
    QpidBytesMessage(const QpidBytesMessage& other);
    QpidBytesMessage& operator=(const QpidBytesMessage& other);

private:
    virtual void writeUTF(const std::string& value);
    virtual std::string readUTF() const;
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
    virtual void reset();
    virtual int getBodyLength() const;
    virtual unsigned char* getBodyBytes() const;
    virtual void setBodyBytes(const unsigned char* buffer, int numBytes);
};
}
}

#endif // QPID_CMSIMPL_QPIDBYTESMESSAGE_H
