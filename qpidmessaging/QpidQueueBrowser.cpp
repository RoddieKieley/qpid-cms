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

#include "QpidQueueBrowser.h"

#include "QpidExceptions.h"

namespace qpid {
namespace cmsimpl {

QpidQueueBrowser::QpidQueueBrowser()
{

}

QpidQueueBrowser::QpidQueueBrowser(const QpidQueueBrowser& other)
{

}

QpidQueueBrowser::~QpidQueueBrowser()
{

}

QpidQueueBrowser& QpidQueueBrowser::operator=(const QpidQueueBrowser& other)
{
    throw NotImplementedYet();
}

bool QpidQueueBrowser::operator==(const QpidQueueBrowser& other)
{
    throw NotImplementedYet();
}

cms::MessageEnumeration* QpidQueueBrowser::getEnumeration()
{
    throw NotImplementedYet();
}

std::string QpidQueueBrowser::getMessageSelector()
{
    throw NotImplementedYet();
}

const cms::Queue* QpidQueueBrowser::getQueue()
{
    throw NotImplementedYet();
}

void QpidQueueBrowser::close()
{

}

}
}
