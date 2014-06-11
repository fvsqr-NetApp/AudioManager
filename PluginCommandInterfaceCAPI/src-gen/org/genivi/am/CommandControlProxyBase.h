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
 * The interface towards the Controlling Instance (e.g HMI). It handles the
 *  communication towards the HMI and other system components who need to interact
 *  with the audiomanagement.
There are two rules that have to be kept in mind
 *  when implementing against this interface:
 * @author Christian Mueller
 */
#ifndef ORG_GENIVI_AM_Command_Control_PROXY_BASE_H_
#define ORG_GENIVI_AM_Command_Control_PROXY_BASE_H_

#include "CommandControl.h"


#include <org/genivi/am.h>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/InputStream.h>
#include <CommonAPI/OutputStream.h>
#include <CommonAPI/SerializableStruct.h>
#include <cstdint>
#include <string>
#include <vector>

#include <CommonAPI/Event.h>
#include <CommonAPI/Proxy.h>
#include <functional>
#include <future>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace org {
namespace genivi {
namespace am {

class CommandControlProxyBase: virtual public CommonAPI::Proxy {
 public:
    typedef CommonAPI::Event<am_MainConnectionType_s> NewMainConnectionEvent;
    typedef CommonAPI::Event<am_mainConnectionID_t> RemovedMainConnectionEvent;
    typedef CommonAPI::Event<am_SinkType_s> NewSinkEvent;
    typedef CommonAPI::Event<am_sinkID_t> RemovedSinkEvent;
    typedef CommonAPI::Event<am_SourceType_s> NewSourceEvent;
    typedef CommonAPI::Event<am_sourceID_t> RemovedSourceEvent;
    typedef CommonAPI::Event<> NumberOfSinkClassesChangedEvent;
    typedef CommonAPI::Event<> NumberOfSourceClassesChangedEvent;
    typedef CommonAPI::Event<am_mainConnectionID_t, am_ConnectionState_e> MainConnectionStateChangedEvent;
    typedef CommonAPI::Event<am_sinkID_t, am_MainSoundProperty_s> MainSinkSoundPropertyChangedEvent;
    typedef CommonAPI::Event<am_sourceID_t, am_MainSoundProperty_s> MainSourceSoundPropertyChangedEvent;
    typedef CommonAPI::Event<am_sinkID_t, am_Availability_s> SinkAvailabilityChangedEvent;
    typedef CommonAPI::Event<am_sourceID_t, am_Availability_s> SourceAvailabilityChangedEvent;
    typedef CommonAPI::Event<am_sinkID_t, am_mainVolume_t> VolumeChangedEvent;
    typedef CommonAPI::Event<am_sinkID_t, am_MuteState_e> SinkMuteStateChangedEvent;
    typedef CommonAPI::Event<am_SystemProperty_s> SystemPropertyChangedEvent;
    typedef CommonAPI::Event<am_mainConnectionID_t, am_timeSync_t> TimingInformationChangedEvent;
    typedef CommonAPI::Event<am_sinkID_t, am_sinkClass_t, am_MainSoundProperty_L> SinkUpdatedEvent;
    typedef CommonAPI::Event<am_sourceID_t, am_sourceClass_t, am_MainSoundProperty_L> SourceUpdatedEvent;
    typedef CommonAPI::Event<am_sinkID_t, am_NotificationPayload_s> SinkNotificationEvent;
    typedef CommonAPI::Event<am_sourceID_t, am_NotificationPayload_s> SourceNotificationEvent;
    typedef CommonAPI::Event<am_sinkID_t, am_NotificationConfiguration_s> MainSinkNotificationConfigurationChangedEvent;
    typedef CommonAPI::Event<am_sourceID_t, am_NotificationConfiguration_s> MainSourceNotificationConfigurationChangedEvent;

    typedef std::function<void(const CommonAPI::CallStatus&, const am_mainConnectionID_t&, const am_Error_e&)> ConnectAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const am_Error_e&)> DisconnectAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const am_Error_e&)> SetVolumeAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const am_Error_e&)> VolumeStepAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const am_Error_e&)> SetSinkMuteStateAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const am_Error_e&)> SetMainSinkSoundPropertyAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const am_Error_e&)> SetMainSourceSoundPropertyAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const am_Error_e&)> SetSystemPropertyAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const am_MainConnection_L&, const am_Error_e&)> GetListMainConnectionsAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const am_SinkType_L&, const am_Error_e&)> GetListMainSinksAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const am_SourceType_L&, const am_Error_e&)> GetListMainSourcesAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const am_MainSoundProperty_L&, const am_Error_e&)> GetListMainSinkSoundPropertiesAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const am_MainSoundProperty_L&, const am_Error_e&)> GetListMainSourceSoundPropertiesAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const am_SourceClass_L&, const am_Error_e&)> GetListSourceClassesAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const am_SinkClass_L&, const am_Error_e&)> GetListSinkClassesAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const am_SystemProperty_L&, const am_Error_e&)> GetListSystemPropertiesAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const am_timeSync_t&, const am_Error_e&)> GetTimingInformationAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const am_NotificationConfiguration_L&, const am_Error_e&)> GetListMainSinkNotificationConfigurationsAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const am_NotificationConfiguration_L&, const am_Error_e&)> GetListMainSourceNotificationConfigurationsAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const am_Error_e&)> SetMainSinkNotificationConfigurationAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const am_Error_e&)> SetMainSourceNotificationConfigurationAsyncCallback;


    /**
     * Callback that is called when the number of connections change
     */
    virtual NewMainConnectionEvent& getNewMainConnectionEvent() = 0;
    /**
     * Callback that is called when the number of connections change
     */
    virtual RemovedMainConnectionEvent& getRemovedMainConnectionEvent() = 0;
    /**
     * Callback that is called when the number of sinks change
     */
    virtual NewSinkEvent& getNewSinkEvent() = 0;
    /**
     * Callback that is called when the number of sinks change
     */
    virtual RemovedSinkEvent& getRemovedSinkEvent() = 0;
    /**
     * Callback that is called when the number of sources change
     */
    virtual NewSourceEvent& getNewSourceEvent() = 0;
    /**
     * Callback that is called when the number of sources change
     */
    virtual RemovedSourceEvent& getRemovedSourceEvent() = 0;
    /**
     * this callback is fired if the number of sink classes changed
     */
    virtual NumberOfSinkClassesChangedEvent& getNumberOfSinkClassesChangedEvent() = 0;
    /**
     * this callback is fired if the number of source classes changed
     */
    virtual NumberOfSourceClassesChangedEvent& getNumberOfSourceClassesChangedEvent() = 0;
    /**
     * This callback is called when the ConnectionState of a connection changed.
     */
    virtual MainConnectionStateChangedEvent& getMainConnectionStateChangedEvent() = 0;
    /**
     * this callback indicates that a sinkSoundProperty has changed.
     */
    virtual MainSinkSoundPropertyChangedEvent& getMainSinkSoundPropertyChangedEvent() = 0;
    /**
     * this callback indicates that a sourceSoundProperty has changed.
     */
    virtual MainSourceSoundPropertyChangedEvent& getMainSourceSoundPropertyChangedEvent() = 0;
    /**
     * this callback is called when the availability of a sink has changed
     */
    virtual SinkAvailabilityChangedEvent& getSinkAvailabilityChangedEvent() = 0;
    /**
     * this callback is called when the availability of source has changed.
     */
    virtual SourceAvailabilityChangedEvent& getSourceAvailabilityChangedEvent() = 0;
    /**
     * this callback indicates a volume change on the indicated sink
     */
    virtual VolumeChangedEvent& getVolumeChangedEvent() = 0;
    /**
     * this callback indicates a mute state change on a sink.
     */
    virtual SinkMuteStateChangedEvent& getSinkMuteStateChangedEvent() = 0;
    /**
     * is fired if a systemProperty changed
     */
    virtual SystemPropertyChangedEvent& getSystemPropertyChangedEvent() = 0;
    /**
     * This callback is fired if the timinginformation for a mainConnectionID changed
     */
    virtual TimingInformationChangedEvent& getTimingInformationChangedEvent() = 0;
    /**
     * This callback is called when a sink is updated.
     */
    virtual SinkUpdatedEvent& getSinkUpdatedEvent() = 0;
    /**
     * This callback is called when a source is updated.
     */
    virtual SourceUpdatedEvent& getSourceUpdatedEvent() = 0;
    /**
     * This callback is called when a notificated value of a sink changes.
     */
    virtual SinkNotificationEvent& getSinkNotificationEvent() = 0;
    /**
     * This callback is called when a notifcated value of a source changes.
     */
    virtual SourceNotificationEvent& getSourceNotificationEvent() = 0;
    /**
     * This callback is triggered when a mainNotificationConfiguration is changed.
     */
    virtual MainSinkNotificationConfigurationChangedEvent& getMainSinkNotificationConfigurationChangedEvent() = 0;
    /**
     * This callback is triggered when a mainNotificationConfiguration is changed.
     */
    virtual MainSourceNotificationConfigurationChangedEvent& getMainSourceNotificationConfigurationChangedEvent() = 0;

    /**
     * connects a source to sink
    (at)return E_OK on success, E_NOT_POSSIBLE on
     *  failure, E_ALREADY_EXISTS if the connection does already exists
     */
    virtual void connect(const am_sourceID_t& sourceID, const am_sinkID_t& sinkID, CommonAPI::CallStatus& callStatus, am_mainConnectionID_t& mainConnectionID, am_Error_e& error) = 0;
    virtual std::future<CommonAPI::CallStatus> connectAsync(const am_sourceID_t& sourceID, const am_sinkID_t& sinkID, ConnectAsyncCallback callback) = 0;
    /**
     * disconnects a mainConnection
    (at)return E_OK on successes, E_NON_EXISTENT if
     *  the connection does not exist, E_NOT_POSSIBLE on error.
     */
    virtual void disconnect(const am_mainConnectionID_t& mainConnectionID, CommonAPI::CallStatus& callStatus, am_Error_e& error) = 0;
    virtual std::future<CommonAPI::CallStatus> disconnectAsync(const am_mainConnectionID_t& mainConnectionID, DisconnectAsyncCallback callback) = 0;
    /**
     * sets the volume for a sink
    (at)return E_OK on success, E_UNKOWN on error,
     *  E_OUT_OF_RANGE in case the value is out of range
     */
    virtual void setVolume(const am_sinkID_t& sinkID, const am_mainVolume_t& volume, CommonAPI::CallStatus& callStatus, am_Error_e& error) = 0;
    virtual std::future<CommonAPI::CallStatus> setVolumeAsync(const am_sinkID_t& sinkID, const am_mainVolume_t& volume, SetVolumeAsyncCallback callback) = 0;
    /**
     * This function is used to increment or decrement the current volume for a
     *  sink.
    (at)return E_OK on success, E_UNKNOWN on error and E_OUT_OF_RANGE if
     *  the value is not in the given volume range.
     */
    virtual void volumeStep(const am_sinkID_t& sinkID, const int16_t& volumeStep_, CommonAPI::CallStatus& callStatus, am_Error_e& error) = 0;
    virtual std::future<CommonAPI::CallStatus> volumeStepAsync(const am_sinkID_t& sinkID, const int16_t& volumeStep_, VolumeStepAsyncCallback callback) = 0;
    /**
     * sets the mute state of a sink
    (at)return E_OK on success, E_UNKNOWN on error.
     *  If the mute state is already the desired one, the Daemon will return E_OK.
     */
    virtual void setSinkMuteState(const am_sinkID_t& sinkID, const am_MuteState_e& muteState, CommonAPI::CallStatus& callStatus, am_Error_e& error) = 0;
    virtual std::future<CommonAPI::CallStatus> setSinkMuteStateAsync(const am_sinkID_t& sinkID, const am_MuteState_e& muteState, SetSinkMuteStateAsyncCallback callback) = 0;
    /**
     * This method is used to set sound properties, e.g. Equalizer Values. Since the
     *  capabilities of the system can differ, the exact key value pairs can be
     *  extended in each product
    (at)return E_OK on success, E_OUT_OF_RANGE if value
     *  exceeds range, E_UNKNOWN in case of an error
     */
    virtual void setMainSinkSoundProperty(const am_sinkID_t& sinkID, const am_MainSoundProperty_s& soundProperty, CommonAPI::CallStatus& callStatus, am_Error_e& error) = 0;
    virtual std::future<CommonAPI::CallStatus> setMainSinkSoundPropertyAsync(const am_sinkID_t& sinkID, const am_MainSoundProperty_s& soundProperty, SetMainSinkSoundPropertyAsyncCallback callback) = 0;
    /**
     * This method is used to set sound properties, e.g. Equalizer Values. Since the
     *  capabilities of the system can differ, the exact key value pairs can be
     *  extended in each product
    (at)return E_OK on success, E_OUT_OF_RANGE if value
     *  exceeds range, E_UNKNOWN in case of an error
     */
    virtual void setMainSourceSoundProperty(const am_sourceID_t& sourceID, const am_MainSoundProperty_s& soundProperty, CommonAPI::CallStatus& callStatus, am_Error_e& error) = 0;
    virtual std::future<CommonAPI::CallStatus> setMainSourceSoundPropertyAsync(const am_sourceID_t& sourceID, const am_MainSoundProperty_s& soundProperty, SetMainSourceSoundPropertyAsyncCallback callback) = 0;
    /**
     * is used to set a specific system property.
    (at)return E_OK on success,
     *  E_OUT_OF_RANGE if value exceeds range, E_UNKNOWN in case of an error
     */
    virtual void setSystemProperty(const am_SystemProperty_s& property, CommonAPI::CallStatus& callStatus, am_Error_e& error) = 0;
    virtual std::future<CommonAPI::CallStatus> setSystemPropertyAsync(const am_SystemProperty_s& property, SetSystemPropertyAsyncCallback callback) = 0;
    /**
     * returns the actual list of MainConnections
    (at)return E_OK on success,
     *  E_DATABASE_ERROR on error
     */
    virtual void getListMainConnections(CommonAPI::CallStatus& callStatus, am_MainConnection_L& listConnections, am_Error_e& error) = 0;
    virtual std::future<CommonAPI::CallStatus> getListMainConnectionsAsync(GetListMainConnectionsAsyncCallback callback) = 0;
    /**
     * returns the actual list of Sinks
    (at)return E_OK on success, E_DATABASE_ERROR
     *  on error
     */
    virtual void getListMainSinks(CommonAPI::CallStatus& callStatus, am_SinkType_L& listMainSinks, am_Error_e& error) = 0;
    virtual std::future<CommonAPI::CallStatus> getListMainSinksAsync(GetListMainSinksAsyncCallback callback) = 0;
    /**
     * returns the actual list of Sources
    (at)return E_OK on success,
     *  E_DATABASE_ERROR on error
     */
    virtual void getListMainSources(CommonAPI::CallStatus& callStatus, am_SourceType_L& listMainSources, am_Error_e& error) = 0;
    virtual std::future<CommonAPI::CallStatus> getListMainSourcesAsync(GetListMainSourcesAsyncCallback callback) = 0;
    /**
     * This is used to retrieve all source sound properties related to a source.
     *  Returns a vector of the sound properties and values as pair
    (at)return E_OK
     *  on success, E_DATABASE_ERROR on error
     */
    virtual void getListMainSinkSoundProperties(const am_sinkID_t& sinkID, CommonAPI::CallStatus& callStatus, am_MainSoundProperty_L& listSoundProperties, am_Error_e& error) = 0;
    virtual std::future<CommonAPI::CallStatus> getListMainSinkSoundPropertiesAsync(const am_sinkID_t& sinkID, GetListMainSinkSoundPropertiesAsyncCallback callback) = 0;
    /**
     * This is used to retrieve all source sound properties related to a
     *  source.
    (at)return E_OK on success, E_DATABASE_ERROR on error
     */
    virtual void getListMainSourceSoundProperties(const am_sourceID_t& sourceID, CommonAPI::CallStatus& callStatus, am_MainSoundProperty_L& listSourceProperties, am_Error_e& error) = 0;
    virtual std::future<CommonAPI::CallStatus> getListMainSourceSoundPropertiesAsync(const am_sourceID_t& sourceID, GetListMainSourceSoundPropertiesAsyncCallback callback) = 0;
    /**
     * This is used to retrieve SourceClass Information of all source classes
     *  
    (at)return E_OK on success, E_DATABASE_ERROR on error
     */
    virtual void getListSourceClasses(CommonAPI::CallStatus& callStatus, am_SourceClass_L& listSourceClasses, am_Error_e& error) = 0;
    virtual std::future<CommonAPI::CallStatus> getListSourceClassesAsync(GetListSourceClassesAsyncCallback callback) = 0;
    /**
     * This is used to retrieve SinkClass Information of all sink classes 
    (at)return
     *  E_OK on success, E_DATABASE_ERROR on error
     */
    virtual void getListSinkClasses(CommonAPI::CallStatus& callStatus, am_SinkClass_L& listSinkClasses, am_Error_e& error) = 0;
    virtual std::future<CommonAPI::CallStatus> getListSinkClassesAsync(GetListSinkClassesAsyncCallback callback) = 0;
    /**
     * Retrieves a complete list of all systemProperties.
    (at)return E_OK on success,
     *  E_DATABASE_ERROR on error
     */
    virtual void getListSystemProperties(CommonAPI::CallStatus& callStatus, am_SystemProperty_L& listSystemProperties, am_Error_e& error) = 0;
    virtual std::future<CommonAPI::CallStatus> getListSystemPropertiesAsync(GetListSystemPropertiesAsyncCallback callback) = 0;
    /**
     * returns the delay in ms that the audiopath for the given mainConnection
     *  has
    (at)return E_OK on success, E_NOT_POSSIBLE if timing information is not
     *  yet retrieved, E_DATABASE_ERROR on read error on the database
     */
    virtual void getTimingInformation(const am_mainConnectionID_t& mainConnectionID, CommonAPI::CallStatus& callStatus, am_timeSync_t& delay, am_Error_e& error) = 0;
    virtual std::future<CommonAPI::CallStatus> getTimingInformationAsync(const am_mainConnectionID_t& mainConnectionID, GetTimingInformationAsyncCallback callback) = 0;
    /**
     * Retrieves the list of MainNotifications for a sink. Does not return the
     *  possible ones.
     */
    virtual void getListMainSinkNotificationConfigurations(const am_sinkID_t& sinkID, CommonAPI::CallStatus& callStatus, am_NotificationConfiguration_L& listMainNotificationConfigurations, am_Error_e& error) = 0;
    virtual std::future<CommonAPI::CallStatus> getListMainSinkNotificationConfigurationsAsync(const am_sinkID_t& sinkID, GetListMainSinkNotificationConfigurationsAsyncCallback callback) = 0;
    /**
     * Retrieves the list of MainNotifications for a source. Does not return the
     *  possible ones.
     */
    virtual void getListMainSourceNotificationConfigurations(const am_sourceID_t& sourceID, CommonAPI::CallStatus& callStatus, am_NotificationConfiguration_L& listMainNotificationConfigurations, am_Error_e& error) = 0;
    virtual std::future<CommonAPI::CallStatus> getListMainSourceNotificationConfigurationsAsync(const am_sourceID_t& sourceID, GetListMainSourceNotificationConfigurationsAsyncCallback callback) = 0;
    /**
     * sets a MainNotificationConfiuration. This can be used to turn on an off
     *  notifications an to change the mode of the configuration.
    (at)return E_OK on
     *  success, E_NON_EXISTENT if sinkID does not exists, E_DATABASE_ERROR on error
     */
    virtual void setMainSinkNotificationConfiguration(const am_sinkID_t& sinkID, const am_NotificationConfiguration_s& mainNotificationConfiguration, CommonAPI::CallStatus& callStatus, am_Error_e& error) = 0;
    virtual std::future<CommonAPI::CallStatus> setMainSinkNotificationConfigurationAsync(const am_sinkID_t& sinkID, const am_NotificationConfiguration_s& mainNotificationConfiguration, SetMainSinkNotificationConfigurationAsyncCallback callback) = 0;
    /**
     * sets a MainNotificationConfiuration. This can be used to turn on an off
     *  notifications an to change the mode of the configuration.
    (at)return E_OK on
     *  success, E_NON_EXISTENT if sourceID does not exists, E_DATABASE_ERROR on error
     */
    virtual void setMainSourceNotificationConfiguration(const am_sourceID_t& sourceID, const am_NotificationConfiguration_s& mainNotificationConfiguration, CommonAPI::CallStatus& callStatus, am_Error_e& error) = 0;
    virtual std::future<CommonAPI::CallStatus> setMainSourceNotificationConfigurationAsync(const am_sourceID_t& sourceID, const am_NotificationConfiguration_s& mainNotificationConfiguration, SetMainSourceNotificationConfigurationAsyncCallback callback) = 0;
};

} // namespace am
} // namespace genivi
} // namespace org

#endif // ORG_GENIVI_AM_Command_Control_PROXY_BASE_H_
