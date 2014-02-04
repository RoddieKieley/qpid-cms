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

#include "QpidProps.h"

#include "QpidExceptions.h"

namespace qpid {
namespace cmsimpl {

QpidProps::QpidProps()
{

}

QpidProps::~QpidProps()
{

}

std::string QpidProps::toString()
{
    throw NotImplementedYet();
}

void QpidProps::clear()
{

}

cms::CMSProperties* QpidProps::clone()
{
    throw NotImplementedYet();
}

void QpidProps::copy(const cms::CMSProperties* source)
{

}

std::vector< std::pair< std::string, std::string > > QpidProps::toArray()
{
    throw NotImplementedYet();
}

std::vector< std::string > QpidProps::propertyNames()
{
    throw NotImplementedYet();
}

std::string QpidProps::remove(const std::string& name)
{
    throw NotImplementedYet();
}

bool QpidProps::hasProperty(const std::string& name)
{
    throw NotImplementedYet();
}

void QpidProps::setProperty(const std::string& name, const std::string& value)
{

}

std::string QpidProps::getProperty(const std::string& name, const std::string& defaultValue)
{
    throw NotImplementedYet();
}

const char* QpidProps::getProperty(const std::string& name)
{
    throw NotImplementedYet();
}

bool QpidProps::isEmpty()
{
    throw NotImplementedYet();
}

int QpidProps::size()
{
    throw NotImplementedYet();
}

}
}
