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

#ifndef QPID_CMSIMPL_QPIDMAPMESSAGE_H
#define QPID_CMSIMPL_QPIDMAPMESSAGE_H

#include "cms/MapMessage.h"

namespace qpid {
namespace cmsimpl {

class QpidMapMessage :  cms::MapMessage
{
public:
    QpidMapMessage();
    QpidMapMessage(const QpidMapMessage& other);
    ~QpidMapMessage();
    QpidMapMessage& operator=(const QpidMapMessage& other);
    bool operator==(const QpidMapMessage& other);

private:
    virtual void setString(const std::string& name, const std::string& value);
    virtual std::string getString(const std::string& name);
    virtual void setShort(const std::string& name, short int value);
    virtual short int getShort(const std::string& name);
    virtual void setLong(const std::string& name, long long int value);
    virtual long long int getLong(const std::string& name);
    virtual void setInt(const std::string& name, int value);
    virtual int getInt(const std::string& name);
    virtual void setFloat(const std::string& name, float value);
    virtual float getFloat(const std::string& name);
    virtual void setDouble(const std::string& name, double value);
    virtual double getDouble(const std::string& name);
    virtual void setChar(const std::string& name, char value);
    virtual char getChar(const std::string& name);
    virtual void setBytes(const std::string& name, const std::vector< unsigned int >& value);
    virtual std::vector< unsigned int > getBytes(const std::string& name);
    virtual void setByte(const std::string& name, unsigned char value);
    virtual unsigned char getByte(const std::string& name);
    virtual void setBoolean(const std::string& name, bool value);
    virtual bool getBoolean(const std::string& name);
    virtual cms::Message::ValueType getValueType(const std::string& key);
    virtual bool itemExists(const std::string& name);
    virtual std::vector< std::string > getMapNames();
    virtual bool isEmpty();
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

#endif // QPID_CMSIMPL_QPIDMAPMESSAGE_H
