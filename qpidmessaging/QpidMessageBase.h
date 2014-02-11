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

#ifndef QPID_CMSIMPL_QPIDMESSAGEBASE_H
#define QPID_CMSIMPL_QPIDMESSAGEBASE_H

#include "cms/TextMessage.h"

#include "QpidExceptions.h"
#include "QpidMessage.h"

namespace qpid {
namespace cmsimpl {

template <class T>
class QpidMessageBase :  public T, public QpidMessage
{
public:
    QpidMessageBase(const std::string& text, const std::string& contentType);
    ~QpidMessageBase();

    //Hide copying and assignment
private:
    QpidMessageBase(const QpidMessageBase& other);
    QpidMessageBase& operator=(const QpidMessageBase& other);

private:
    virtual void setCMSType(const std::string& type);
    virtual std::string getCMSType() const;
    virtual void setCMSTimestamp(long long int timeStamp);
    virtual long long int getCMSTimestamp() const;
    virtual void setCMSReplyTo(const cms::Destination* destination);
    virtual const cms::Destination* getCMSReplyTo() const;
    virtual void setCMSRedelivered(bool redelivered);
    virtual bool getCMSRedelivered() const;
    virtual void setCMSPriority(int priority);
    virtual int getCMSPriority() const;
    virtual void setCMSMessageID(const std::string& id);
    virtual std::string getCMSMessageID() const;
    virtual void setCMSExpiration(long long int expireTime);
    virtual long long int getCMSExpiration() const;
    virtual void setCMSDestination(const cms::Destination* destination);
    virtual const cms::Destination* getCMSDestination() const;
    virtual void setCMSDeliveryMode(int mode);
    virtual int getCMSDeliveryMode() const;
    virtual void setCMSCorrelationID(const std::string& correlationId);
    virtual std::string getCMSCorrelationID() const;
    virtual void setStringProperty(const std::string& name, const std::string& value);
    virtual void setShortProperty(const std::string& name, short int value);
    virtual void setLongProperty(const std::string& name, long long int value);
    virtual void setIntProperty(const std::string& name, int value);
    virtual void setFloatProperty(const std::string& name, float value);
    virtual void setDoubleProperty(const std::string& name, double value);
    virtual void setByteProperty(const std::string& name, unsigned char value);
    virtual void setBooleanProperty(const std::string& name, bool value);
    virtual std::string getStringProperty(const std::string& name) const;
    virtual short int getShortProperty(const std::string& name) const;
    virtual long long int getLongProperty(const std::string& name) const;
    virtual int getIntProperty(const std::string& name) const;
    virtual float getFloatProperty(const std::string& name) const;
    virtual double getDoubleProperty(const std::string& name) const;
    virtual unsigned char getByteProperty(const std::string& name) const;
    virtual bool getBooleanProperty(const std::string& name) const;
    virtual cms::Message::ValueType getPropertyValueType(const std::string& name) const;
    virtual bool propertyExists(const std::string& name) const;
    virtual std::vector< std::string > getPropertyNames() const;
    virtual void clearProperties();
    virtual void clearBody();
    virtual void acknowledge() const;
    virtual T* clone() const;
};

template <class T>
QpidMessageBase<T>::QpidMessageBase(const std::string& text, const std::string& contentType) :
    QpidMessage(text, contentType)
{
}

template <class T>
QpidMessageBase<T>::~QpidMessageBase()
{
}

template <class T>
void QpidMessageBase<T>::setCMSType(const std::string& type)
{
    QpidMessage::setCMSType(type);
}

template <class T>
std::string QpidMessageBase<T>::getCMSType() const
{
    return QpidMessage::getCMSType();
}

template <class T>
void QpidMessageBase<T>::setCMSTimestamp(long long int timeStamp)
{
    QpidMessage::setCMSTimestamp(timeStamp);
}

template <class T>
long long int QpidMessageBase<T>::getCMSTimestamp() const
{
    return QpidMessage::getCMSTimestamp();
}

template <class T>
void QpidMessageBase<T>::setCMSReplyTo(const cms::Destination* destination)
{
    QpidMessage::setCMSReplyTo(destination);
}

template <class T>
const cms::Destination* QpidMessageBase<T>::getCMSReplyTo() const
{
    return QpidMessage::getCMSReplyTo();
}

template <class T>
void QpidMessageBase<T>::setCMSRedelivered(bool redelivered)
{
    QpidMessage::setCMSRedelivered(redelivered);
}

template <class T>
bool QpidMessageBase<T>::getCMSRedelivered() const
{
    return QpidMessage::getCMSRedelivered();
}

template <class T>
void QpidMessageBase<T>::setCMSPriority(int priority)
{
    QpidMessage::setCMSPriority(priority);
}

template <class T>
int QpidMessageBase<T>::getCMSPriority() const
{
    return QpidMessage::getCMSPriority();
}

template <class T>
void QpidMessageBase<T>::setCMSMessageID(const std::string& id)
{
    QpidMessage::setCMSMessageID(id);
}

template <class T>
std::string QpidMessageBase<T>::getCMSMessageID() const
{
    return QpidMessage::getCMSMessageID();
}

template <class T>
void QpidMessageBase<T>::setCMSExpiration(long long int expiration)
{
    QpidMessage::setCMSExpiration(expiration);
}

template <class T>
long long int QpidMessageBase<T>::getCMSExpiration() const
{
    return QpidMessage::getCMSExpiration();
}

template <class T>
void QpidMessageBase<T>::setCMSDestination(const cms::Destination* destination)
{
    QpidMessage::setCMSDestination(destination);
}

template <class T>
const cms::Destination* QpidMessageBase<T>::getCMSDestination() const
{
    return QpidMessage::getCMSDestination();
}

template <class T>
void QpidMessageBase<T>::setCMSDeliveryMode(int mode)
{
    QpidMessage::setCMSDeliveryMode(mode);
}

template <class T>
int QpidMessageBase<T>::getCMSDeliveryMode() const
{
    return QpidMessage::getCMSDeliveryMode();
}

template <class T>
void QpidMessageBase<T>::setCMSCorrelationID(const std::string& correlationId)
{
    QpidMessage::setCMSCorrelationID(correlationId);
}

template <class T>
std::string QpidMessageBase<T>::getCMSCorrelationID() const
{
    return QpidMessage::getCMSCorrelationID();
}

template <class T>
void QpidMessageBase<T>::setStringProperty(const std::string& name, const std::string& value)
{
    QpidMessage::setStringProperty(name, value);
}

template <class T>
void QpidMessageBase<T>::setShortProperty(const std::string& name, short int value)
{
    QpidMessage::setShortProperty(name, value);
}

template <class T>
void QpidMessageBase<T>::setLongProperty(const std::string& name, long long int value)
{
    QpidMessage::setLongProperty(name, value);
}

template <class T>
void QpidMessageBase<T>::setIntProperty(const std::string& name, int value)
{
    QpidMessage::setIntProperty(name, value);
}

template <class T>
void QpidMessageBase<T>::setFloatProperty(const std::string& name, float value)
{
    QpidMessage::setFloatProperty(name, value);
}

template <class T>
void QpidMessageBase<T>::setDoubleProperty(const std::string& name, double value)
{
    QpidMessage::setDoubleProperty(name, value);
}

template <class T>
void QpidMessageBase<T>::setByteProperty(const std::string& name, unsigned char value)
{
    QpidMessage::setByteProperty(name, value);
}

template <class T>
void QpidMessageBase<T>::setBooleanProperty(const std::string& name, bool value)
{
    QpidMessage::setBooleanProperty(name, value);
}

template <class T>
std::string QpidMessageBase<T>::getStringProperty(const std::string& name) const
{
    return QpidMessage::getStringProperty(name);
}

template <class T>
short int QpidMessageBase<T>::getShortProperty(const std::string& name) const
{
    return QpidMessage::getShortProperty(name);
}

template <class T>
long long int QpidMessageBase<T>::getLongProperty(const std::string& name) const
{
    return QpidMessage::getLongProperty(name);
}

template <class T>
int QpidMessageBase<T>::getIntProperty(const std::string& name) const
{
    return QpidMessage::getIntProperty(name);
}

template <class T>
float QpidMessageBase<T>::getFloatProperty(const std::string& name) const
{
    return QpidMessage::getFloatProperty(name);
}

template <class T>
double QpidMessageBase<T>::getDoubleProperty(const std::string& name) const
{
    return QpidMessage::getDoubleProperty(name);
}

template <class T>
unsigned char QpidMessageBase<T>::getByteProperty(const std::string& name) const
{
    return QpidMessage::getByteProperty(name);
}

template <class T>
bool QpidMessageBase<T>::getBooleanProperty(const std::string& name) const
{
    return QpidMessage::getBooleanProperty(name);
}

template <class T>
cms::Message::ValueType QpidMessageBase<T>::getPropertyValueType(const std::string& name) const
{
    return QpidMessage::getPropertyValueType(name);
}

template <class T>
bool QpidMessageBase<T>::propertyExists(const std::string& name) const
{
    return QpidMessage::propertyExists(name);
}

template <class T>
std::vector< std::string > QpidMessageBase<T>::getPropertyNames() const
{
    return QpidMessage::getPropertyNames();
}

template <class T>
void QpidMessageBase<T>::clearProperties()
{
    QpidMessage::clearProperties();
}

template <class T>
void QpidMessageBase<T>::clearBody()
{
    QpidMessage::clearBody();
}

template <class T>
void QpidMessageBase<T>::acknowledge() const
{
    QpidMessage::acknowledge();
}

template <class T>
T* QpidMessageBase<T>::clone() const
{
    throw NotImplementedYet();
}

}
}

#endif // QPID_CMSIMPL_QPIDMESSAGEBASE_H
