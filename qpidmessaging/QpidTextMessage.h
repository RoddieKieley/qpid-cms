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

#ifndef QPID_CMSIMPL_QPIDTEXTMESSAGE_H
#define QPID_CMSIMPL_QPIDTEXTMESSAGE_H

#include "cms/TextMessage.h"

#include "QpidMessageBase.h"

namespace qpid {
namespace cmsimpl {

class QpidTextMessage :  public QpidMessageBase<cms::TextMessage>
{
public:
    QpidTextMessage(QpidSession& session);
    QpidTextMessage(QpidSession& session, const qpid::messaging::Message& qmessage);
    QpidTextMessage(QpidSession& session, const std::string& text);
    ~QpidTextMessage();

    //Hide copying and assignment
private:
    QpidTextMessage(const QpidTextMessage& other);
    QpidTextMessage& operator=(const QpidTextMessage& other);

private:
    virtual void setText(const std::string& msg);
    virtual void setText(const char* msg);
    virtual std::string getText() const;
};
}
}

#endif // QPID_CMSIMPL_QPIDTEXTMESSAGE_H
