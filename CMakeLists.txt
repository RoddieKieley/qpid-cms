#
# Licensed to the Apache Software Foundation (ASF) under one
# or more contributor license agreements.  See the NOTICE file
# distributed with this work for additional information
# regarding copyright ownership.  The ASF licenses this file
# to you under the Apache License, Version 2.0 (the
# "License"); you may not use this file except in compliance
# with the License.  You may obtain a copy of the License at
#
#   http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing,
# software distributed under the License is distributed on an
# "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
# KIND, either express or implied.  See the License for the
# specific language governing permissions and limitations
# under the License.
#

cmake_minimum_required(VERSION 2.6 FATAL_ERROR)

project(qpid-cms)

find_package(Qpid 0.27 REQUIRED)

set (cms_implementation_files
  cms/AsyncCallback.cpp
  cms/BytesMessage.cpp
  cms/Closeable.cpp
  cms/CMSException.cpp
  cms/CMSProperties.cpp
  cms/CMSSecurityException.cpp
  cms/Connection.cpp
  cms/ConnectionFactory.cpp
  cms/ConnectionMetaData.cpp
  cms/DeliveryMode.cpp
  cms/Destination.cpp
  cms/DestinationEvent.cpp
  cms/DestinationListener.cpp
  cms/DestinationSource.cpp
  cms/EnhancedConnection.cpp
  cms/ExceptionListener.cpp
  cms/IllegalStateException.cpp
  cms/InvalidClientIdException.cpp
  cms/InvalidDestinationException.cpp
  cms/InvalidSelectorException.cpp
  cms/MapMessage.cpp
  cms/MessageAvailableListener.cpp
  cms/MessageConsumer.cpp
  cms/Message.cpp
  cms/MessageEnumeration.cpp
  cms/MessageEOFException.cpp
  cms/MessageFormatException.cpp
  cms/MessageListener.cpp
  cms/MessageNotReadableException.cpp
  cms/MessageNotWriteableException.cpp
  cms/MessageProducer.cpp
  cms/MessageTransformer.cpp
  cms/ObjectMessage.cpp
  cms/QueueBrowser.cpp
  cms/Queue.cpp
  cms/ResourceAllocationException.cpp
  cms/Session.cpp
  cms/Startable.cpp
  cms/Stoppable.cpp
  cms/StreamMessage.cpp
  cms/TemporaryQueue.cpp
  cms/TemporaryTopic.cpp
  cms/TextMessage.cpp
  cms/Topic.cpp
  cms/TransactionInProgressException.cpp
  cms/TransactionRolledBackException.cpp
  cms/UnsupportedOperationException.cpp
  cms/XAConnection.cpp
  cms/XAConnectionFactory.cpp
  cms/XAException.cpp
  cms/XAResource.cpp
  cms/XASession.cpp
  cms/Xid.cpp
)

set (qpidmessaging_cms_files
  qpidmessaging/QpidBytesMessage.cpp
  qpidmessaging/QpidConnection.cpp
  qpidmessaging/QpidConnectionFactory.cpp
  qpidmessaging/QpidDestination.cpp
  qpidmessaging/QpidExceptions.cpp
  qpidmessaging/QpidMapMessage.cpp
  qpidmessaging/QpidMessage.cpp
  qpidmessaging/QpidMessageConsumer.cpp
  qpidmessaging/QpidMessageProducer.cpp
  qpidmessaging/QpidProps.cpp
  qpidmessaging/QpidQueue.cpp
  qpidmessaging/QpidQueueBrowser.cpp
  qpidmessaging/QpidSession.cpp
  qpidmessaging/QpidStreamMessage.cpp
  qpidmessaging/QpidTempQueue.cpp
  qpidmessaging/QpidTempTopic.cpp
  qpidmessaging/QpidTextMessage.cpp
  qpidmessaging/QpidTopic.cpp
)

include_directories (.)
include_directories(${Qpid_INCLUDE_DIRS})

add_compile_options(-Wall -Werror -std=gnu++0x)

add_library (qpid-cms SHARED
             ${cms_implementation_files}
             ${qpidmessaging_cms_files})

target_link_libraries (qpid-cms ${Qpid_LIBRARIES})

set_target_properties (qpid-cms PROPERTIES
                       LINK_FLAGS "-Wl,--no-undefined"
                       VERSION "0.0"
                       SOVERSION "0")

install (TARGETS qpid-cms
         RUNTIME DESTINATION "bin"
         LIBRARY DESTINATION "lib"
         ARCHIVE DESTINATION "lib")


add_subdirectory(examples)
