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

namespace qpid {
namespace cmsimpl {

class QpidBytesMessage :  cms::BytesMessage
{
public:
    QpidBytesMessage();
    QpidBytesMessage(const QpidBytesMessage& other);
    ~QpidBytesMessage();
    QpidBytesMessage& operator=(const QpidBytesMessage& other);
    bool operator==(const QpidBytesMessage& other);

private:
    virtual void writeUTF(const std::string& value);
    virtual std::string readUTF();
    virtual void writeString(const std::string& value);
    virtual std::string readString();
    virtual void writeLong(long long int value);
    virtual long long int readLong();
    virtual void writeInt(int value);
    virtual int readInt();
    virtual void writeUnsignedShort(short unsigned int value);
    virtual short unsigned int readUnsignedShort();
    virtual void writeShort(short int value);
    virtual short int readShort();
    virtual void writeDouble(double value);
    virtual double readDouble();
    virtual void writeFloat(float value);
    virtual float readFloat();
    virtual void writeChar(char value);
    virtual char readChar();
    virtual void writeBytes(const unsigned char* value, int offset, int length);
    virtual int readBytes(unsigned char* buffer, int length);
    virtual void writeBytes(const std::vector< unsigned int, std::allocator< void > >& value);
    virtual int readBytes(std::vector< unsigned int, std::allocator< void > >& value);
    virtual void writeByte(unsigned char value);
    virtual unsigned char readByte();
    virtual void writeBoolean(bool value);
    virtual bool readBoolean();
    virtual void reset();
    virtual int getBodyLength();
    virtual unsigned char* getBodyBytes();
    virtual void setBodyBytes(const unsigned char* buffer, int numBytes);
    virtual void setCMSType(const std::string& type);
    virtual std::string getCMSType();
    virtual void setCMSTimestamp(long long int timeStamp);
    virtual long long int getCMSTimestamp();
    virtual void setCMSReplyTo(const cms::Destination* destination);
    virtual const cms::Destination* getCMSReplyTo();
    virtual void setCMSRedelivered(bool redelivered);
    virtual bool getCMSRedelivered();
    virtual void setCMSPriority(int priority);
    virtual int getCMSPriority();
    virtual void setCMSMessageID(const std::string& id);
    virtual std::string getCMSMessageID();
    virtual void setCMSExpiration(long long int expireTime);
    virtual long long int getCMSExpiration();
    virtual void setCMSDestination(const cms::Destination* destination);
    virtual const cms::Destination* getCMSDestination();
    virtual void setCMSDeliveryMode(int mode);
    virtual int getCMSDeliveryMode();
    virtual void setCMSCorrelationID(const std::string& correlationId);
    virtual std::string getCMSCorrelationID();
    virtual void setStringProperty(const std::string& name, const std::string& value);
    virtual void setShortProperty(const std::string& name, short int value);
    virtual void setLongProperty(const std::string& name, long long int value);
    virtual void setIntProperty(const std::string& name, int value);
    virtual void setFloatProperty(const std::string& name, float value);
    virtual void setDoubleProperty(const std::string& name, double value);
    virtual void setByteProperty(const std::string& name, unsigned char value);
    virtual void setBooleanProperty(const std::string& name, bool value);
    virtual std::string getStringProperty(const std::string& name);
    virtual short int getShortProperty(const std::string& name);
    virtual long long int getLongProperty(const std::string& name);
    virtual int getIntProperty(const std::string& name);
    virtual float getFloatProperty(const std::string& name);
    virtual double getDoubleProperty(const std::string& name);
    virtual unsigned char getByteProperty(const std::string& name);
    virtual bool getBooleanProperty(const std::string& name);
    virtual cms::Message::ValueType getPropertyValueType(const std::string& name);
    virtual bool propertyExists(const std::string& name);
    virtual std::vector< std::string > getPropertyNames();
    virtual void clearProperties();
    virtual void clearBody();
    virtual void acknowledge();
    virtual cms::Message* clone();
};
}
}

#endif // QPID_CMSIMPL_QPIDBYTESMESSAGE_H
