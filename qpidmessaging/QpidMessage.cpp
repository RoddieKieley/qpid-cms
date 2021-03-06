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

#include "QpidMessage.h"

#include "QpidBytesMessage.h"
#include "QpidConnection.h"
#include "QpidDestination.h"
#include "QpidExceptions.h"
#include "QpidSession.h"
#include "QpidTextMessage.h"

#include "cms/InvalidDestinationException.h"

#include <qpid/messaging/Address.h>
#include <qpid/types/Variant.h>

#include <algorithm>

namespace qpid {
namespace cmsimpl {

QpidMessage* QpidMessage::create(QpidSession& session, const qpid::messaging::Message& qm)
{
    auto contentType = qm.getContentType();

    if (contentType=="text/plain") {
        return new QpidTextMessage(session, qm);
    } else if (contentType=="binary") {
        return new QpidBytesMessage(session, qm);
    } // TODO: Still need to handle MapMessage and StreamMessage

    // If we didn't recognise the message type then return something
    // that will still respond to the basic message methods
    return new QpidMessage(session, qm);
}

QpidMessage::QpidMessage(QpidSession& session) :
    session_(session),
    acked_(false)
{
}

QpidMessage::QpidMessage(QpidSession& session, const messaging::Message& qm) :
    session_(session),
    message_(qm),
    replyTo_(QpidDestination::createDestination(qm.getReplyTo())),
    acked_(false)
    // TODO: where does destination_ come from?
{
}

QpidMessage::QpidMessage(QpidSession& session, const std::string& text, const std::string& contentType) :
    session_(session),
    message_(text),
    acked_(false)
{
    message_.setContentType(contentType);
}


QpidMessage::QpidMessage(const QpidMessage& other) :
    session_(other.session_),
    message_(other.message_),
    destination_(other.destination_->clone()),
    replyTo_(other.replyTo_->clone()),
    acked_(other.acked_)
{
}

QpidMessage::~QpidMessage()
{
}

void QpidMessage::setContent(const std::string& content)
{
    message_.setContent(content);
}

std::string QpidMessage::getContent() const
{
    return message_.getContent();
}

void QpidMessage::setCMSType(const std::string& type)
{
    throw NotImplementedYet();
}

std::string QpidMessage::getCMSType() const
{
    throw NotImplementedYet();
}

void QpidMessage::setCMSTimestamp(long long int timeStamp)
{
    throw NotImplementedYet();
}

long long int QpidMessage::getCMSTimestamp() const
{
    throw NotImplementedYet();
}

void QpidMessage::setCMSReplyTo(const cms::Destination* destination)
{
    const QpidDestination* qd = dynamic_cast<const QpidDestination*>(destination);
    if (!qd) throw cms::InvalidDestinationException("Destination not a QpidDestination");
    replyTo_ = std::unique_ptr<cms::Destination>(destination->clone());
    message_.setReplyTo(qd->getAddress());
}

const cms::Destination* QpidMessage::getCMSReplyTo() const
{
    return replyTo_.get();
}

void QpidMessage::setCMSRedelivered(bool redelivered)
{
    message_.setRedelivered(redelivered);
}

bool QpidMessage::getCMSRedelivered() const
{
    return message_.getRedelivered();
}

void QpidMessage::setCMSPriority(int priority)
{
    message_.setPriority(priority);
}

int QpidMessage::getCMSPriority() const
{
    return message_.getPriority();
}

void QpidMessage::setCMSMessageID(const std::string& id)
{
    userMessageId_ = std::unique_ptr<std::string>(new std::string(id));
}

std::string QpidMessage::getCMSMessageID() const
{
    return
        userMessageId_
        ? *userMessageId_
        : message_.getMessageId().empty()
          ? message_.getMessageId()
          : std::string("ID:")+message_.getMessageId();
}

void QpidMessage::setCMSExpiration(long long int expireTime)
{
    message_.setTtl(qpid::messaging::Duration(expireTime));
}

long long int QpidMessage::getCMSExpiration() const
{
    return message_.getTtl().getMilliseconds();
}

void QpidMessage::setCMSDestination(const cms::Destination* destination)
{
    const QpidDestination* qd = dynamic_cast<const QpidDestination*>(destination);
    if (!qd) throw cms::InvalidDestinationException("Destination not a QpidDestination");
    destination_ = std::unique_ptr<cms::Destination>(destination->clone());
}

const cms::Destination* QpidMessage::getCMSDestination() const
{
    return destination_.get();
}

void QpidMessage::setCMSDeliveryMode(int mode)
{
    message_.setDurable(mode == cms::DeliveryMode::PERSISTENT);
}

int QpidMessage::getCMSDeliveryMode() const
{
    return message_.getDurable() ? cms::DeliveryMode::PERSISTENT : cms::DeliveryMode::NON_PERSISTENT;
}

void QpidMessage::setCMSCorrelationID(const std::string& correlationId)
{
    message_.setCorrelationId(correlationId);
}

std::string QpidMessage::getCMSCorrelationID() const
{
    return message_.getCorrelationId();
}

void QpidMessage::setStringProperty(const std::string& name, const std::string& value)
{
    message_.setProperty(name, value);
}

void QpidMessage::setShortProperty(const std::string& name, short int value)
{
    message_.setProperty(name, value);
}

void QpidMessage::setLongProperty(const std::string& name, long long int value)
{
    message_.setProperty(name, int64_t(value));
}

void QpidMessage::setIntProperty(const std::string& name, int value)
{
    message_.setProperty(name, value);
}

void QpidMessage::setFloatProperty(const std::string& name, float value)
{
    message_.setProperty(name, value);
}

void QpidMessage::setDoubleProperty(const std::string& name, double value)
{
    message_.setProperty(name, value);
}

void QpidMessage::setByteProperty(const std::string& name, unsigned char value)
{
    message_.setProperty(name, value);
}

void QpidMessage::setBooleanProperty(const std::string& name, bool value)
{
    message_.setProperty(name, value);
}

qpid::types::Variant QpidMessage::getProperty(const std::string& name) const
{
    qpid::types::Variant::Map props = message_.getProperties();
    qpid::types::Variant::Map::const_iterator i=props.find(name);
    if ( i==props.end() ) throw cms::CMSException("Non existant property: " + name);
    return i->second;
}

std::string QpidMessage::getStringProperty(const std::string& name) const
try
{

    return getProperty(name).asString();
}
catch (std::exception&) {
    rethrowTranslatedException();
    // Can't really get here, but compiler can't always tell
    return std::string();
}

short int QpidMessage::getShortProperty(const std::string& name) const
try
{
    return getProperty(name).asInt16();
}
catch (std::exception&) {
    rethrowTranslatedException();
    // Can't really get here, but compiler can't always tell
    return 0;
}

long long int QpidMessage::getLongProperty(const std::string& name) const
try
{
    return getProperty(name).asInt64();
}
catch (std::exception&) {
    rethrowTranslatedException();
    // Can't really get here, but compiler can't always tell
    return 0;
}

int QpidMessage::getIntProperty(const std::string& name) const
try
{
    return getProperty(name).asInt32();
}
catch (std::exception&) {
    rethrowTranslatedException();
    // Can't really get here, but compiler can't always tell
    return 0;
}

float QpidMessage::getFloatProperty(const std::string& name) const
try
{
    return getProperty(name).asFloat();
}
catch (std::exception&) {
    rethrowTranslatedException();
    // Can't really get here, but compiler can't always tell
    return 0;
}

double QpidMessage::getDoubleProperty(const std::string& name) const
try
{
    return getProperty(name).asDouble();
}
catch (std::exception&) {
    rethrowTranslatedException();
    // Can't really get here, but compiler can't always tell
    return 0;
}

unsigned char QpidMessage::getByteProperty(const std::string& name) const
try
{
    return getProperty(name).asUint8();
}
catch (std::exception&) {
    rethrowTranslatedException();
    // Can't really get here, but compiler can't always tell
    return 0;
}

bool QpidMessage::getBooleanProperty(const std::string& name) const
try
{
    return getProperty(name).asBool();
}
catch (std::exception&) {
    rethrowTranslatedException();
    // Can't really get here, but compiler can't always tell
    return false;
}

namespace {
// This table must be in sorted order of qpid type
// We cheat with the last element making an effective .end() return give UNKNOWN_TYPE
struct TypeCorrespondance{
    qpid::types::VariantType qtype;
    cms::Message::ValueType ctype;
} typeTranslation[] = {
    {qpid::types::VAR_VOID, cms::Message::NULL_TYPE},      // 0 This element is .begin()
    {qpid::types::VAR_BOOL, cms::Message::BOOLEAN_TYPE},   // 1
    {qpid::types::VAR_UINT8, cms::Message::BYTE_TYPE},     // 2
    {qpid::types::VAR_UINT16, cms::Message::INTEGER_TYPE}, // 3
    {qpid::types::VAR_UINT32, cms::Message::LONG_TYPE},    // 4
    {qpid::types::VAR_UINT64, cms::Message::LONG_TYPE},    // 5
    {qpid::types::VAR_INT8, cms::Message::SHORT_TYPE},     // 6
    {qpid::types::VAR_INT16, cms::Message::SHORT_TYPE},    // 7
    {qpid::types::VAR_INT32, cms::Message::INTEGER_TYPE }, // 8
    {qpid::types::VAR_INT64, cms::Message::LONG_TYPE},     // 9
    {qpid::types::VAR_FLOAT, cms::Message::FLOAT_TYPE},    //10
    {qpid::types::VAR_DOUBLE, cms::Message::DOUBLE_TYPE},  //11
    {qpid::types::VAR_STRING, cms::Message::STRING_TYPE},  //12
    {qpid::types::VAR_MAP, cms::Message::UNKNOWN_TYPE},    //13
    {qpid::types::VAR_LIST, cms::Message::UNKNOWN_TYPE},   //14
    {qpid::types::VAR_UUID, cms::Message::BYTE_ARRAY_TYPE},//15
    {qpid::types::VAR_VOID, cms::Message::UNKNOWN_TYPE}    //16 This element is .end()
};

bool operator<(const struct TypeCorrespondance& l, qpid::types::VariantType r)
{
    return l.qtype<r;
}

bool operator<(qpid::types::VariantType l, const struct TypeCorrespondance& r)
{
    return l<r.qtype;
}

}

cms::Message::ValueType QpidMessage::getPropertyValueType(const std::string& name) const
{
    return std::lower_bound(&typeTranslation[0], &typeTranslation[16], getProperty(name).getType())->ctype;
}

bool QpidMessage::propertyExists(const std::string& name) const
{
    qpid::types::Variant::Map props = message_.getProperties();
    qpid::types::Variant::Map::const_iterator i=props.find(name);
    return ( i!=props.end() );
}

std::vector< std::string > QpidMessage::getPropertyNames() const
{
    qpid::types::Variant::Map props = message_.getProperties();
    std::vector<std::string> r;
    r.reserve(props.size());
    for (qpid::types::Variant::Map::const_iterator i = props.begin(); i!=props.end(); ++i) {
        r.push_back(i->first);
    }
    return r;
}

void QpidMessage::clearProperties()
{
    message_.getProperties().clear();
}

void QpidMessage::clearBody()
{
    message_.setContent("");
}

void QpidMessage::acknowledge() const
{
    acked_=true;
    switch (session_.acknowledgeMode_) {
    case cms::Session::CLIENT_ACKNOWLEDGE:
        session_.session_.acknowledgeUpTo(message_, true);
        break;
    case cms::Session::INDIVIDUAL_ACKNOWLEDGE:
        session_.session_.acknowledge(message_, true);
        break;
    default:
        // All other modes don't get acked per message
        break;
    }
}

cms::Message* QpidMessage::clone() const
{
    return new QpidMessage(*this);
}

}
}
