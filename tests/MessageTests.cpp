/*
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <cms/ConnectionFactory.h>
#include <cms/Connection.h>
#include <cms/Session.h>

#include <memory>
#include <string>

#define BOOST_TEST_MAIN
#include <boost/test/included/unit_test.hpp>

using std::unique_ptr;
using std::string;

template<class T, class... Args>
unique_ptr<T> make_unique(Args... args) {
    return unique_ptr<T>(new T(args...));
}

struct CMSSessionFixture {
    CMSSessionFixture() {
        unique_ptr<cms::ConnectionFactory> connectionFactory(cms::ConnectionFactory::createCMSConnectionFactory("localhost"));
        connection = unique_ptr<cms::Connection>(connectionFactory->createConnection());
        session = unique_ptr<cms::Session>(connection->createSession());
    }
    ~CMSSessionFixture() {
    }

    unique_ptr<cms::Connection> connection;
    unique_ptr<cms::Session>    session;
};

BOOST_FIXTURE_TEST_SUITE(MessageSuite, CMSSessionFixture )

BOOST_AUTO_TEST_CASE(NullConnection) {
    BOOST_CHECK(!connection->getMetaData()->getCMSVersion().empty());
    BOOST_CHECK(!connection->getMetaData()->getProviderVersion().empty());
}

BOOST_AUTO_TEST_CASE(NullSession) {
    BOOST_CHECK(session->isTransacted()==false);
}

BOOST_AUTO_TEST_CASE(TextMessageSimple) {
    const string text("Message Test");
    unique_ptr<cms::TextMessage> msg(session->createTextMessage(text));

    BOOST_CHECK_EQUAL(msg->getText(), text);
    msg->clearBody();
    BOOST_CHECK(msg->getText().empty());
}

BOOST_AUTO_TEST_CASE(MessageProperties){
    unique_ptr<cms::TextMessage> msg(session->createTextMessage());

    BOOST_CHECK(msg->getPropertyNames().empty());
    msg->setBooleanProperty("True", true);
    msg->setBooleanProperty("False", false);

    BOOST_CHECK(!msg->propertyExists("Blak"));
    BOOST_CHECK_THROW(msg->getIntProperty("Black"), cms::CMSException);
    BOOST_CHECK_THROW(msg->getIntProperty("True"), cms::MessageFormatException);
    BOOST_CHECK_EQUAL(msg->getPropertyNames().size(), 2);

    BOOST_CHECK_EQUAL(msg->getBooleanProperty("True"), true);
    BOOST_CHECK_EQUAL(msg->getStringProperty("False"), "False");

    // String conversions
    msg->setStringProperty("SN", "31415927");
    BOOST_CHECK_EQUAL(msg->getLongProperty("SN"), 31415927LL);
    BOOST_CHECK_EQUAL(msg->getIntProperty("SN"), 31415927);
    BOOST_CHECK_THROW(msg->getShortProperty("SN"), cms::MessageFormatException);
    BOOST_CHECK_THROW(msg->getByteProperty("SN"), cms::MessageFormatException);
    BOOST_CHECK_EQUAL(msg->getDoubleProperty("SN"), 31415927.0d);
    BOOST_CHECK_CLOSE(msg->getFloatProperty("SN"), 31415927.0, 0.00001);
    BOOST_CHECK_EQUAL(msg->getBooleanProperty("SN"), true);
    BOOST_CHECK_EQUAL(msg->getPropertyValueType("SN"), cms::Message::STRING_TYPE);

    msg->setByteProperty("BP", 234);
    // TODO: The CMS spec says this should throw
    // BOOST_CHECK_THROW(msg->getBooleanProperty("BP"), cms::MessageFormatException);
    BOOST_CHECK_EQUAL(msg->getBooleanProperty("BP"), true);
    BOOST_CHECK_EQUAL(msg->getByteProperty("BP"), 234);
    BOOST_CHECK_EQUAL(msg->getShortProperty("BP"), 234);
    BOOST_CHECK_EQUAL(msg->getIntProperty("BP"), 234);
    BOOST_CHECK_EQUAL(msg->getLongProperty("BP"), 234);
    BOOST_CHECK_THROW(msg->getFloatProperty("BP"), cms::MessageFormatException);
    BOOST_CHECK_THROW(msg->getDoubleProperty("BP"), cms::MessageFormatException);
    BOOST_CHECK_EQUAL(msg->getStringProperty("BP"), "234");
    BOOST_CHECK_EQUAL(msg->getPropertyValueType("BP"), cms::Message::BYTE_TYPE);

    msg->setShortProperty("SP", 23400);
    // TODO: The CMS spec says this should throw
    //BOOST_CHECK_THROW(msg->getBooleanProperty("SP"), cms::MessageFormatException);
    BOOST_CHECK_EQUAL(msg->getBooleanProperty("SP"), true);
    BOOST_CHECK_THROW(msg->getByteProperty("SP"), cms::MessageFormatException);
    BOOST_CHECK_EQUAL(msg->getShortProperty("SP"), 23400);
    BOOST_CHECK_EQUAL(msg->getIntProperty("SP"), 23400);
    BOOST_CHECK_EQUAL(msg->getLongProperty("SP"), 23400);
    BOOST_CHECK_THROW(msg->getFloatProperty("SP"), cms::MessageFormatException);
    BOOST_CHECK_THROW(msg->getDoubleProperty("SP"), cms::MessageFormatException);
    BOOST_CHECK_EQUAL(msg->getStringProperty("SP"), "23400");
    BOOST_CHECK_EQUAL(msg->getPropertyValueType("SP"), cms::Message::SHORT_TYPE);

    msg->setIntProperty("IP", 234000000);
    // TODO: The CMS spec says this should throw
    //BOOST_CHECK_THROW(msg->getBooleanProperty("IP"), cms::MessageFormatException);
    BOOST_CHECK_EQUAL(msg->getBooleanProperty("IP"), true);
    BOOST_CHECK_THROW(msg->getByteProperty("IP"), cms::MessageFormatException);
    BOOST_CHECK_THROW(msg->getShortProperty("IP"), cms::MessageFormatException);
    BOOST_CHECK_EQUAL(msg->getIntProperty("IP"), 234000000);
    BOOST_CHECK_EQUAL(msg->getLongProperty("IP"), 234000000);
    BOOST_CHECK_THROW(msg->getFloatProperty("IP"), cms::MessageFormatException);
    BOOST_CHECK_THROW(msg->getDoubleProperty("IP"), cms::MessageFormatException);
    BOOST_CHECK_EQUAL(msg->getStringProperty("IP"), "234000000");
    BOOST_CHECK_EQUAL(msg->getPropertyValueType("IP"), cms::Message::INTEGER_TYPE);

    msg->setLongProperty("LP", 23400000000);
    // TODO: The CMS spec says this should throw
    //BOOST_CHECK_THROW(msg->getBooleanProperty("LP"), cms::MessageFormatException);
    BOOST_CHECK_EQUAL(msg->getBooleanProperty("LP"), true);
    BOOST_CHECK_THROW(msg->getByteProperty("LP"), cms::MessageFormatException);
    BOOST_CHECK_THROW(msg->getShortProperty("LP"), cms::MessageFormatException);
    BOOST_CHECK_THROW(msg->getIntProperty("LP"), cms::MessageFormatException);
    BOOST_CHECK_EQUAL(msg->getLongProperty("LP"), 23400000000);
    BOOST_CHECK_THROW(msg->getFloatProperty("LP"), cms::MessageFormatException);
    BOOST_CHECK_THROW(msg->getDoubleProperty("LP"), cms::MessageFormatException);
    BOOST_CHECK_EQUAL(msg->getStringProperty("LP"), "23400000000");
    BOOST_CHECK_EQUAL(msg->getPropertyValueType("LP"), cms::Message::LONG_TYPE);

    msg->setFloatProperty("FP", 23400000000);
    BOOST_CHECK_THROW(msg->getBooleanProperty("FP"), cms::MessageFormatException);
    BOOST_CHECK_THROW(msg->getByteProperty("FP"), cms::MessageFormatException);
    BOOST_CHECK_THROW(msg->getShortProperty("FP"), cms::MessageFormatException);
    BOOST_CHECK_THROW(msg->getIntProperty("FP"), cms::MessageFormatException);
    BOOST_CHECK_THROW(msg->getLongProperty("FP"), cms::MessageFormatException);
    BOOST_CHECK_CLOSE(msg->getFloatProperty("FP"), 2.34e10, 1e-5);
    BOOST_CHECK_CLOSE(msg->getDoubleProperty("FP"), 2.34e10, 1e-5);
    // TODO: Don't test as it's too hard to know what you expect
    //BOOST_CHECK_EQUAL(msg->getStringProperty("FP"), "2.34e10");
    BOOST_CHECK_EQUAL(msg->getPropertyValueType("FP"), cms::Message::FLOAT_TYPE);

    msg->setDoubleProperty("DP", 23400000000);
    BOOST_CHECK_THROW(msg->getBooleanProperty("DP"), cms::MessageFormatException);
    BOOST_CHECK_THROW(msg->getByteProperty("DP"), cms::MessageFormatException);
    BOOST_CHECK_THROW(msg->getShortProperty("DP"), cms::MessageFormatException);
    BOOST_CHECK_THROW(msg->getIntProperty("DP"), cms::MessageFormatException);
    BOOST_CHECK_THROW(msg->getLongProperty("DP"), cms::MessageFormatException);
    BOOST_CHECK_THROW(msg->getFloatProperty("DP"), cms::MessageFormatException);
    BOOST_CHECK_CLOSE(msg->getDoubleProperty("DP"), 23400000000, 1e-11);
    BOOST_CHECK_EQUAL(msg->getStringProperty("DP"), "23400000000");
    BOOST_CHECK_EQUAL(msg->getPropertyValueType("DP"), cms::Message::DOUBLE_TYPE);

}

BOOST_AUTO_TEST_SUITE_END()
