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

#include "QpidTextMessage.h"

#include "QpidDestination.h"
#include "QpidExceptions.h"

#include "cms/CMSException.h"

namespace qpid {
namespace cmsimpl {

QpidTextMessage::QpidTextMessage(qpid::messaging::Session& session) :
    QpidMessageBase(session, "", "text/plain")
{
}

QpidTextMessage::QpidTextMessage(qpid::messaging::Session& session, const std::string& text) :
    QpidMessageBase(session, text, "text/plain")
{
}

QpidTextMessage::~QpidTextMessage()
{
}

void QpidTextMessage::setText(const std::string& msg)
{
    setContent(msg);
}

void QpidTextMessage::setText(const char* msg)
{
    std::string s(msg);
    setContent(s);
}

std::string QpidTextMessage::getText() const
{
    return getContent();
}

}
}


