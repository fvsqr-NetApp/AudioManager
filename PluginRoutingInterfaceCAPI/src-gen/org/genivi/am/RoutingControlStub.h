/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 2.1.5.201312121915.
* Used org.franca.core 0.8.11.201401091023.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
/**
 * This class implements everything from Audiomanager -&gt; RoutingAdapter
 * @author Christian Mueller
 */
#ifndef ORG_GENIVI_AM_Routing_Control_STUB_H_
#define ORG_GENIVI_AM_Routing_Control_STUB_H_



#include <org/genivi/am.h>

#include "RoutingControl.h"

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/InputStream.h>
#include <CommonAPI/OutputStream.h>
#include <CommonAPI/SerializableStruct.h>
#include <cstdint>
#include <vector>

#include <CommonAPI/Stub.h>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace org {
namespace genivi {
namespace am {

/**
 * Receives messages from remote and handles all dispatching of deserialized calls
 * to a stub for the service RoutingControl. Also provides means to send broadcasts
 * and attribute-changed-notifications of observable attributes as defined by this service.
 * An application developer should not need to bother with this class.
 */
class RoutingControlStubAdapter: virtual public CommonAPI::StubAdapter, public RoutingControl {
 public:



    virtual void deactivateManagedInstances() = 0;
protected:
    /**
     * Defines properties for storing the ClientIds of clients / proxies that have
     * subscribed to the selective broadcasts
     */
};


/**
 * Defines the necessary callbacks to handle remote set events related to the attributes
 * defined in the IDL description for RoutingControl.
 * For each attribute two callbacks are defined:
 * - a verification callback that allows to verify the requested value and to prevent setting
 *   e.g. an invalid value ("onRemoteSet<AttributeName>").
 * - an action callback to do local work after the attribute value has been changed
 *   ("onRemote<AttributeName>Changed").
 *
 * This class and the one below are the ones an application developer needs to have
 * a look at if he wants to implement a service.
 */
class RoutingControlStubRemoteEvent {
 public:
    virtual ~RoutingControlStubRemoteEvent() { }

};


/**
 * Defines the interface that must be implemented by any class that should provide
 * the service RoutingControl to remote clients.
 * This class and the one above are the ones an application developer needs to have
 * a look at if he wants to implement a service.
 */
class RoutingControlStub : public virtual CommonAPI::Stub<RoutingControlStubAdapter, RoutingControlStubRemoteEvent> {
public:
    virtual ~RoutingControlStub() { }
    virtual const CommonAPI::Version& getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> clientId) = 0;


    /**
     * aborts an asynchronous action.
    (at)return E_OK on success, E_UNKNOWN on error,
     *  E_NON_EXISTENT if handle was not found
     */
    /// This is the method that will be called on remote calls on the method asyncAbort.
    virtual void asyncAbort(const std::shared_ptr<CommonAPI::ClientId> clientId, am_Handle_s handle) = 0;
    /**
     * connects a source to a sink
    (at)return E_OK on success, E_UNKNOWN on error,
     *  E_WRONG_FORMAT in case am_CustomConnectionFormat_t does not match
     */
    /// This is the method that will be called on remote calls on the method asyncConnect.
    virtual void asyncConnect(const std::shared_ptr<CommonAPI::ClientId> clientId, am_Handle_s handle, am_connectionID_t connectionID, am_sourceID_t sourceID, am_sinkID_t sinkID, am_CustomConnectionFormat_t connectionFormat) = 0;
    /**
     * disconnect a connection with given connectionID
    (at)return E_OK on success,
     *  E_UNKNOWN on error, E_NON_EXISTENT if connection was not found
     */
    /// This is the method that will be called on remote calls on the method asyncDisconnect.
    virtual void asyncDisconnect(const std::shared_ptr<CommonAPI::ClientId> clientId, am_Handle_s handle, am_connectionID_t connectionID) = 0;
    /**
     * this method is used to set the volume of a sink. This function is used to drive
     *  ramps, to mute or unmute or directly set the value. The difference is made
     *  through the ramptype.
    (at)return E_OK on success, E_UNKNOWN on error,
     *  E_OUT_OF_RANGE if new volume is out of range
     */
    /// This is the method that will be called on remote calls on the method asyncSetSinkVolume.
    virtual void asyncSetSinkVolume(const std::shared_ptr<CommonAPI::ClientId> clientId, am_Handle_s handle, am_sinkID_t sinkID, am_volume_t volume, am_CustomRampType_t ramp, am_time_t time) = 0;
    /**
     * sets the volume of a source. This method is used to set the volume of a sink.
     *  This function is used to drive ramps, to mute or unmute or directly set the
     *  value. The difference is made through the ramptype.
    (at)return E_OK on
     *  success, E_UNKNOWN on error, E_OUT_OF_RANGE if volume is out of
     *  range.
    triggers the acknowledge ackSourceVolumeChange
     */
    /// This is the method that will be called on remote calls on the method asyncSetSourceVolume.
    virtual void asyncSetSourceVolume(const std::shared_ptr<CommonAPI::ClientId> clientId, am_Handle_s handle, am_sourceID_t sourceID, am_volume_t volume, am_CustomRampType_t ramp, am_time_t time) = 0;
    /**
     * This function is used to set the source state of a particular
     *  source.
    (at)return E_OK on success, E_UNKNOWN on error
     */
    /// This is the method that will be called on remote calls on the method asyncSetSourceState.
    virtual void asyncSetSourceState(const std::shared_ptr<CommonAPI::ClientId> clientId, am_Handle_s handle, am_sourceID_t sourceID, am_SourceState_e state) = 0;
    /**
     * this function sets the sinksoundproperty.
    (at)return E_OK on success,
     *  E_UNKNOWN on error, E_OUT_OF_RANGE in case the propery value is out of range
     */
    /// This is the method that will be called on remote calls on the method asyncSetSinkSoundProperties.
    virtual void asyncSetSinkSoundProperties(const std::shared_ptr<CommonAPI::ClientId> clientId, am_Handle_s handle, am_sinkID_t sinkID, am_SoundProperty_L listSoundProperties) = 0;
    /**
     * this function sets the sinksoundproperty.
    (at)return E_OK on success,
     *  E_UNKNOWN on error, E_OUT_OF_RANGE in case the propery value is out of range
     */
    /// This is the method that will be called on remote calls on the method asyncSetSinkSoundProperty.
    virtual void asyncSetSinkSoundProperty(const std::shared_ptr<CommonAPI::ClientId> clientId, am_Handle_s handle, am_sinkID_t sinkID, am_SoundProperty_s soundProperty) = 0;
    /**
     * this function sets the sourcesoundproperty.
    (at)return E_OK on success,
     *  E_UNKNOWN on error, E_OUT_OF_RANGE in case the propery value is out of range
     */
    /// This is the method that will be called on remote calls on the method asyncSetSourceSoundProperties.
    virtual void asyncSetSourceSoundProperties(const std::shared_ptr<CommonAPI::ClientId> clientId, am_Handle_s handle, am_sourceID_t sourceID, am_SoundProperty_L listSoundProperties) = 0;
    /**
     * this function sets the sourcesoundproperty.
    (at)return E_OK on success,
     *  E_UNKNOWN on error, E_OUT_OF_RANGE in case the propery value is out of range
     */
    /// This is the method that will be called on remote calls on the method asyncSetSourceSoundProperty.
    virtual void asyncSetSourceSoundProperty(const std::shared_ptr<CommonAPI::ClientId> clientId, am_Handle_s handle, am_sourceID_t sourceID, am_SoundProperty_s soundProperty) = 0;
    /**
     * this function triggers crossfading.
    (at)return E_OK on success, E_UNKNOWN on
     *  error
     */
    /// This is the method that will be called on remote calls on the method asyncCrossFade.
    virtual void asyncCrossFade(const std::shared_ptr<CommonAPI::ClientId> clientId, am_Handle_s handle, am_crossfaderID_t crossfaderID, am_HotSink_e hotSink, am_CustomRampType_t rampType, am_time_t time) = 0;
    /**
     * this function is used for early and late audio functions to set the domain
     *  state
    (at)return E_OK on success, E_UNKNOWN on error
     */
    /// This is the method that will be called on remote calls on the method setDomainState.
    virtual void setDomainState(const std::shared_ptr<CommonAPI::ClientId> clientId, am_domainID_t domainID, am_DomainState_e domainState, am_Error_e& error) = 0;
    /// This is the method that will be called on remote calls on the method asyncSetVolumes.
    virtual void asyncSetVolumes(const std::shared_ptr<CommonAPI::ClientId> clientId, am_Handle_s handle, am_Volumes_L volumes) = 0;
    /// This is the method that will be called on remote calls on the method asyncSetSinkNotificationConfiguration.
    virtual void asyncSetSinkNotificationConfiguration(const std::shared_ptr<CommonAPI::ClientId> clientId, am_Handle_s handle, am_sinkID_t sinkID, am_NotificationConfiguration_s notificationConfiguration) = 0;
    /// This is the method that will be called on remote calls on the method asyncSetSourceNotificationConfiguration.
    virtual void asyncSetSourceNotificationConfiguration(const std::shared_ptr<CommonAPI::ClientId> clientId, am_Handle_s handle, am_sourceID_t sourceID, am_NotificationConfiguration_s notificationConfiguration) = 0;

    using CommonAPI::Stub<RoutingControlStubAdapter, RoutingControlStubRemoteEvent>::initStubAdapter;
    typedef CommonAPI::Stub<RoutingControlStubAdapter, RoutingControlStubRemoteEvent>::StubAdapterType StubAdapterType;
    typedef CommonAPI::Stub<RoutingControlStubAdapter, RoutingControlStubRemoteEvent>::RemoteEventHandlerType RemoteEventHandlerType;
};

} // namespace am
} // namespace genivi
} // namespace org

#endif // ORG_GENIVI_AM_Routing_Control_STUB_H_
