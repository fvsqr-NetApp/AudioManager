/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 2.1.5.201312121915.
* Used org.franca.core 0.8.11.201401091023.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#include <org/genivi/NodeStateManager/ConsumerStubDefault.h>

namespace org {
namespace genivi {
namespace NodeStateManager {

ConsumerStubDefault::ConsumerStubDefault():
        remoteEventHandler_(this),
        interfaceVersion_(Consumer::getInterfaceVersion()) {
}

const CommonAPI::Version& ConsumerStubDefault::getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> clientId) {
    return interfaceVersion_;
}

ConsumerStubRemoteEvent* ConsumerStubDefault::initStubAdapter(const std::shared_ptr<ConsumerStubAdapter>& stubAdapter) {
    CommonAPI::Stub<ConsumerStubAdapter, ConsumerStubRemoteEvent>::stubAdapter_ = stubAdapter;
    return &remoteEventHandler_;
}

const int32_t& ConsumerStubDefault::getBootModeAttribute() {
    return bootModeAttributeValue_;
}

const int32_t& ConsumerStubDefault::getBootModeAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    return getBootModeAttribute();
}

void ConsumerStubDefault::setBootModeAttribute(int32_t value) {
    trySetBootModeAttribute(std::move(value));
}

bool ConsumerStubDefault::trySetBootModeAttribute(int32_t value) {
    if (!validateBootModeAttributeRequestedValue(value))
        return false;

    const bool valueChanged = (bootModeAttributeValue_ != value);
    bootModeAttributeValue_ = std::move(value);
    return valueChanged;
}

bool ConsumerStubDefault::validateBootModeAttributeRequestedValue(const int32_t& value) {
    return true;
}


const int32_t& ConsumerStubDefault::getRestartReasonAttribute() {
    return restartReasonAttributeValue_;
}

const int32_t& ConsumerStubDefault::getRestartReasonAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    return getRestartReasonAttribute();
}

void ConsumerStubDefault::setRestartReasonAttribute(int32_t value) {
    trySetRestartReasonAttribute(std::move(value));
}

bool ConsumerStubDefault::trySetRestartReasonAttribute(int32_t value) {
    if (!validateRestartReasonAttributeRequestedValue(value))
        return false;

    const bool valueChanged = (restartReasonAttributeValue_ != value);
    restartReasonAttributeValue_ = std::move(value);
    return valueChanged;
}

bool ConsumerStubDefault::validateRestartReasonAttributeRequestedValue(const int32_t& value) {
    return true;
}


const int32_t& ConsumerStubDefault::getShutdownReasonAttribute() {
    return shutdownReasonAttributeValue_;
}

const int32_t& ConsumerStubDefault::getShutdownReasonAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    return getShutdownReasonAttribute();
}

void ConsumerStubDefault::setShutdownReasonAttribute(int32_t value) {
    trySetShutdownReasonAttribute(std::move(value));
}

bool ConsumerStubDefault::trySetShutdownReasonAttribute(int32_t value) {
    if (!validateShutdownReasonAttributeRequestedValue(value))
        return false;

    const bool valueChanged = (shutdownReasonAttributeValue_ != value);
    shutdownReasonAttributeValue_ = std::move(value);
    return valueChanged;
}

bool ConsumerStubDefault::validateShutdownReasonAttributeRequestedValue(const int32_t& value) {
    return true;
}


const int32_t& ConsumerStubDefault::getWakeUpReasonAttribute() {
    return wakeUpReasonAttributeValue_;
}

const int32_t& ConsumerStubDefault::getWakeUpReasonAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    return getWakeUpReasonAttribute();
}

void ConsumerStubDefault::setWakeUpReasonAttribute(int32_t value) {
    trySetWakeUpReasonAttribute(std::move(value));
}

bool ConsumerStubDefault::trySetWakeUpReasonAttribute(int32_t value) {
    if (!validateWakeUpReasonAttributeRequestedValue(value))
        return false;

    const bool valueChanged = (wakeUpReasonAttributeValue_ != value);
    wakeUpReasonAttributeValue_ = std::move(value);
    return valueChanged;
}

bool ConsumerStubDefault::validateWakeUpReasonAttributeRequestedValue(const int32_t& value) {
    return true;
}



void ConsumerStubDefault::GetAppHealthCount(const std::shared_ptr<CommonAPI::ClientId> clientId, uint32_t& Count) {
    // Call old style methods in default 
    GetAppHealthCount(Count);
}
void ConsumerStubDefault::GetAppHealthCount(uint32_t& Count) {
    // No operation in default
}

void ConsumerStubDefault::LifecycleRequestComplete(const std::shared_ptr<CommonAPI::ClientId> clientId, uint32_t RequestId, int32_t Status, int32_t& ErrorCode) {
    // Call old style methods in default 
    LifecycleRequestComplete(RequestId, Status, ErrorCode);
}
void ConsumerStubDefault::LifecycleRequestComplete(uint32_t RequestId, int32_t Status, int32_t& ErrorCode) {
    // No operation in default
}

void ConsumerStubDefault::GetInterfaceVersion(const std::shared_ptr<CommonAPI::ClientId> clientId, uint32_t& Version) {
    // Call old style methods in default 
    GetInterfaceVersion(Version);
}
void ConsumerStubDefault::GetInterfaceVersion(uint32_t& Version) {
    // No operation in default
}

void ConsumerStubDefault::GetApplicationMode(const std::shared_ptr<CommonAPI::ClientId> clientId, int32_t& ErrorCode, int32_t& ApplicationModeId) {
    // Call old style methods in default 
    GetApplicationMode(ErrorCode, ApplicationModeId);
}
void ConsumerStubDefault::GetApplicationMode(int32_t& ErrorCode, int32_t& ApplicationModeId) {
    // No operation in default
}

void ConsumerStubDefault::UnRegisterSession(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string SessionName, std::string SessionOwner, int32_t SeatID, int32_t& ErrorCode) {
    // Call old style methods in default 
    UnRegisterSession(SessionName, SessionOwner, SeatID, ErrorCode);
}
void ConsumerStubDefault::UnRegisterSession(std::string SessionName, std::string SessionOwner, int32_t SeatID, int32_t& ErrorCode) {
    // No operation in default
}

void ConsumerStubDefault::RegisterSession(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string SessionName, std::string SessionOwner, int32_t SeatID, int32_t SessionState, int32_t& ErrorCode) {
    // Call old style methods in default 
    RegisterSession(SessionName, SessionOwner, SeatID, SessionState, ErrorCode);
}
void ConsumerStubDefault::RegisterSession(std::string SessionName, std::string SessionOwner, int32_t SeatID, int32_t SessionState, int32_t& ErrorCode) {
    // No operation in default
}

void ConsumerStubDefault::UnRegisterShutdownClient(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string BusName, std::string ObjName, uint32_t ShutdownMode, int32_t& ErrorCode) {
    // Call old style methods in default 
    UnRegisterShutdownClient(BusName, ObjName, ShutdownMode, ErrorCode);
}
void ConsumerStubDefault::UnRegisterShutdownClient(std::string BusName, std::string ObjName, uint32_t ShutdownMode, int32_t& ErrorCode) {
    // No operation in default
}

void ConsumerStubDefault::RegisterShutdownClient(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string BusName, std::string ObjName, uint32_t ShutdownMode, uint32_t TimeoutMs, int32_t& ErrorCode) {
    // Call old style methods in default 
    RegisterShutdownClient(BusName, ObjName, ShutdownMode, TimeoutMs, ErrorCode);
}
void ConsumerStubDefault::RegisterShutdownClient(std::string BusName, std::string ObjName, uint32_t ShutdownMode, uint32_t TimeoutMs, int32_t& ErrorCode) {
    // No operation in default
}

void ConsumerStubDefault::GetNodeState(const std::shared_ptr<CommonAPI::ClientId> clientId, int32_t& ErrorCode, int32_t& NodeStateId) {
    // Call old style methods in default 
    GetNodeState(ErrorCode, NodeStateId);
}
void ConsumerStubDefault::GetNodeState(int32_t& ErrorCode, int32_t& NodeStateId) {
    // No operation in default
}

void ConsumerStubDefault::GetSessionState(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string SessionName, int32_t SeatID, int32_t& SessionState, int32_t& ErrorCode) {
    // Call old style methods in default 
    GetSessionState(SessionName, SeatID, SessionState, ErrorCode);
}
void ConsumerStubDefault::GetSessionState(std::string SessionName, int32_t SeatID, int32_t& SessionState, int32_t& ErrorCode) {
    // No operation in default
}

void ConsumerStubDefault::SetSessionState(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string SessionName, std::string SessionOwner, int32_t SessionState, int32_t SeatID, int32_t& ErrorCode) {
    // Call old style methods in default 
    SetSessionState(SessionName, SessionOwner, SessionState, SeatID, ErrorCode);
}
void ConsumerStubDefault::SetSessionState(std::string SessionName, std::string SessionOwner, int32_t SessionState, int32_t SeatID, int32_t& ErrorCode) {
    // No operation in default
}


void ConsumerStubDefault::fireNodeApplicationModeEvent(const int32_t& ApplicationModeId) {
    stubAdapter_->fireNodeApplicationModeEvent(ApplicationModeId);
}
void ConsumerStubDefault::fireSessionStateChangedEvent(const std::string& SessionStateName, const int32_t& SeatID, const int32_t& SessionState) {
    stubAdapter_->fireSessionStateChangedEvent(SessionStateName, SeatID, SessionState);
}
void ConsumerStubDefault::fireNodeStateEvent(const int32_t& NodeState) {
    stubAdapter_->fireNodeStateEvent(NodeState);
}


ConsumerStubDefault::RemoteEventHandler::RemoteEventHandler(ConsumerStubDefault* defaultStub):
        defaultStub_(defaultStub) {
}

} // namespace NodeStateManager
} // namespace genivi
} // namespace org
