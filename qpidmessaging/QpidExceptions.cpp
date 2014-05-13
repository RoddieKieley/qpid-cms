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

#include "QpidExceptions.h"

#include <qpid/messaging/exceptions.h>
#include <cms/CMSException.h>
#include <cms/CMSSecurityException.h>
#include <cms/IllegalStateException.h>
#include <cms/InvalidClientIdException.h>
#include <cms/InvalidDestinationException.h>
#include <cms/InvalidSelectorException.h>
#include <cms/MessageEOFException.h>
#include <cms/MessageFormatException.h>
#include <cms/MessageNotReadableException.h>
#include <cms/MessageNotWriteableException.h>
#include <cms/ResourceAllocationException.h>
#include <cms/TransactionInProgressException.h>
#include <cms/TransactionRolledBackException.h>
#include <cms/UnsupportedOperationException.h>
#include <cms/XAException.h>

#include <string>

using std::string;

namespace qpid {
namespace cmsimpl {

NotImplementedYet::NotImplementedYet() :
    cms::UnsupportedOperationException("Qpid-cms does not implement this (yet)")
{

}

void rethrowTranslatedException()
{
    try {
        // rethrow current exception
        throw;
    } catch (messaging::InvalidOptionString& e) {
        throw cms::CMSException("Received qpid::messaging::InvalidOptionString: "+string(e.what()));
    } catch (messaging::KeyError& e) {
        throw cms::CMSException("Received qpid::messaging::KeyError: "+string(e.what()));
    } catch (messaging::AssertionFailed& e ) {
        throw cms::InvalidDestinationException("Received qpid::messaging::AssertionFailed: "+string(e.what()));
    } catch (messaging::NotFound& e) {
        throw cms::InvalidDestinationException("Received qpid::messaging::NotFound: "+string(e.what()));
    } catch (messaging::ResolutionError& e) {
        throw cms::InvalidDestinationException("Received qpid::messaging::ResolutionError: "+string(e.what()));
    } catch (messaging::MalformedAddress& e) {
        throw cms::CMSException("Received qpid::messaging::MalformedAddress: "+string(e.what()));
    } catch (messaging::AddressError& e) {
        throw cms::CMSException("Received qpid::messaging::AddressError: "+string(e.what()));
    } catch (messaging::NoMessageAvailable& e) {
        throw cms::CMSException("Received qpid::messaging::NoMessageAvailable: "+string(e.what()));
    } catch (messaging::FetchError& e) {
        throw cms::CMSException("Received qpid::messaging::FetchError: "+string(e.what()));
    } catch (messaging::ReceiverError& e) {
        throw cms::CMSException("Received qpid::messaging::ReceiverError: "+string(e.what()));
    } catch (messaging::MessageRejected& e){
        throw cms::CMSException("Received qpid::messaging::MessageRejected: "+string(e.what()));
    } catch (messaging::TargetCapacityExceeded& e) {
        throw cms::CMSException("Received qpid::messaging::TargetCapacityExceeded: "+string(e.what()));
    } catch (messaging::SendError& e) {
        throw cms::CMSException("Received qpid::messaging::SendError: "+string(e.what()));
    } catch (messaging::SenderError& e) {
        throw cms::CMSException("Received qpid::messaging::SenderError: "+string(e.what()));
    } catch (messaging::LinkError& e) {
        throw cms::CMSException("Received qpid::messaging::LinkError: "+string(e.what()));
    } catch (messaging::SessionClosed& e) {
        throw cms::CMSException("Received qpid::messaging::SessionClosed: "+string(e.what()));
    } catch (messaging::TransactionAborted& e) {
        throw cms::CMSException("Received qpid::messaging::TransactionAborted: "+string(e.what()));
    } catch (messaging::TransactionError& e ) {
        throw cms::CMSException("Received qpid::messaging::TransactionError: "+string(e.what()));
    } catch (messaging::UnauthorizedAccess& e) {
        throw cms::CMSException("Received qpid::messaging::UnauthorizedAccess: "+string(e.what()));
    } catch (messaging::SessionError& e) {
        throw cms::CMSException("Received qpid::messaging::SessionError: "+string(e.what()));
    } catch (messaging::ConnectionError& e) {
        throw cms::CMSException("Received qpid::messaging::ConnectionError: "+string(e.what()));
    } catch (messaging::TransportFailure& e) {
        throw cms::CMSException("Received qpid::messaging::TransportFailure: "+string(e.what()));
    } catch (messaging::MessagingException& e) {
        throw cms::CMSException("Received qpid::messaging::MessagingException: "+string(e.what()));
    } catch (qpid::types::InvalidConversion& e) {
        throw cms::MessageFormatException("Received qpid::types::InvalidConversion: "+string(e.what()));
    } catch (qpid::types::Exception& e) {
        throw cms::CMSException("Received qpid::types::Exception: "+string(e.what()));
    } catch (cms::CMSException&) {
        throw;
    } catch (std::exception& e) {
        throw cms::CMSException("Received std::exception: "+string(e.what()));
    }
}

}
}
