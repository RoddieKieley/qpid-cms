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

#include "QpidMessageBase.h"

namespace qpid {
namespace cmsimpl {

class QpidMapMessage :  public  QpidMessageBase<cms::MapMessage>
{
public:
    QpidMapMessage();
    ~QpidMapMessage();

    //Hide copying and assigment
private:
    QpidMapMessage(const QpidMapMessage& other);
    QpidMapMessage& operator=(const QpidMapMessage& other);

private:
    virtual void setString(const std::string& name, const std::string& value);
    virtual std::string getString(const std::string& name) const;
    virtual void setShort(const std::string& name, short int value);
    virtual short int getShort(const std::string& name) const;
    virtual void setLong(const std::string& name, long long int value);
    virtual long long int getLong(const std::string& name) const;
    virtual void setInt(const std::string& name, int value);
    virtual int getInt(const std::string& name) const;
    virtual void setFloat(const std::string& name, float value);
    virtual float getFloat(const std::string& name) const;
    virtual void setDouble(const std::string& name, double value);
    virtual double getDouble(const std::string& name) const;
    virtual void setChar(const std::string& name, char value);
    virtual char getChar(const std::string& name) const;
    virtual void setBytes(const std::string& name, const std::vector< unsigned char >& value);
    virtual std::vector< unsigned char > getBytes(const std::string& name) const;
    virtual void setByte(const std::string& name, unsigned char value);
    virtual unsigned char getByte(const std::string& name) const;
    virtual void setBoolean(const std::string& name, bool value);
    virtual bool getBoolean(const std::string& name) const;
    virtual cms::Message::ValueType getValueType(const std::string& key) const;
    virtual bool itemExists(const std::string& name) const;
    virtual std::vector< std::string > getMapNames() const;
    virtual bool isEmpty() const;
};
}
}

#endif // QPID_CMSIMPL_QPIDMAPMESSAGE_H
