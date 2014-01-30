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

namespace qpid {
namespace cmsimpl {

QpidProps::QpidProps()
{

}

QpidProps::QpidProps(const QpidProps& other)
{

}

QpidProps::~QpidProps()
{

}

QpidProps& QpidProps::operator=(const QpidProps& other)
{

}

bool QpidProps::operator==(const QpidProps& other)
{

}

std::string QpidProps::toString()
{

}

void QpidProps::clear()
{

}

cms::CMSProperties* QpidProps::clone()
{

}

void QpidProps::copy(const cms::CMSProperties* source)
{

}

std::vector< std::pair< std::string, std::string > > QpidProps::toArray()
{

}

std::vector< std::string > QpidProps::propertyNames()
{

}

std::string QpidProps::remove(const std::string& name)
{

}

bool QpidProps::hasProperty(const std::string& name)
{

}

void QpidProps::setProperty(const std::string& name, const std::string& value)
{

}

std::string QpidProps::getProperty(const std::string& name, const std::string& defaultValue)
{

}

const char* QpidProps::getProperty(const std::string& name)
{

}

bool QpidProps::isEmpty()
{

}

int QpidProps::size()
{

}

}
}
