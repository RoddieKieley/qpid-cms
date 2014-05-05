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

#ifndef QPID_CMSIMPL_QPIDPROPS_H
#define QPID_CMSIMPL_QPIDPROPS_H

#include "cms/CMSProperties.h"

namespace qpid {
namespace cmsimpl {

class QpidProps : public cms::CMSProperties
{
public:
    QpidProps();
    ~QpidProps();

    // Hide copying and assignment
private:
    QpidProps(const QpidProps& other);
    QpidProps& operator=(const QpidProps& other);

private:
    virtual std::string toString() const;
    virtual void clear();
    virtual cms::CMSProperties* clone() const;
    virtual void copy(const cms::CMSProperties* source);
    virtual std::vector< std::pair< std::string, std::string > > toArray() const;
    virtual std::vector< std::string > propertyNames() const;
    virtual std::string remove(const std::string& name);
    virtual bool hasProperty(const std::string& name) const;
    virtual void setProperty(const std::string& name, const std::string& value);
    virtual std::string getProperty(const std::string& name, const std::string& defaultValue) const;
    virtual const char* getProperty(const std::string& name) const;
    virtual bool isEmpty() const;
    virtual int size() const;
};
}
}

#endif // QPID_CMSIMPL_QPIDPROPS_H
