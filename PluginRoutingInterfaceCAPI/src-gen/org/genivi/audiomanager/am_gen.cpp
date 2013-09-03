/*
* This file was generated by the CommonAPI Generators.
*
 *  Copyright (c) 2012 BMW
 *
 *  \author Aleksandar Donchev, aleksander.donchev@partner.bmw.de BMW 2013
 *
 *  \copyright
 *  Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction,
 *  including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so,
 *  subject to the following conditions:
 *  The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 *  IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR
 *  THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 *  For further information see http://www.genivi.org/.
*/
#include "am_gen.h"


namespace org {
namespace genivi {
namespace audiomanager {
namespace am_gen {

distanceInformation_s::distanceInformation_s(const int32_t& FrontLeftValue, const int32_t& FrontRightValue, const int32_t& RearLeftValue, const int32_t& RearRightValue):
        FrontLeft(FrontLeftValue),
        FrontRight(FrontRightValue),
        RearLeft(RearLeftValue),
        RearRight(RearRightValue)
{
}


bool operator==(const distanceInformation_s& lhs, const distanceInformation_s& rhs) {
    if (&lhs == &rhs)
        return true;

    return
        lhs.FrontLeft == rhs.FrontLeft &&
        lhs.FrontRight == rhs.FrontRight &&
        lhs.RearLeft == rhs.RearLeft &&
        lhs.RearRight == rhs.RearRight
    ;
}

void distanceInformation_s::readFromInputStream(CommonAPI::InputStream& inputStream) {
    inputStream >> FrontLeft;
    inputStream >> FrontRight;
    inputStream >> RearLeft;
    inputStream >> RearRight;
}

void distanceInformation_s::writeToOutputStream(CommonAPI::OutputStream& outputStream) const {
    outputStream << FrontLeft;
    outputStream << FrontRight;
    outputStream << RearLeft;
    outputStream << RearRight;
}
sampleNames_s::sampleNames_s(const sampleSet_e& sampleValue, const std::string& sampleNameValue):
        sample(sampleValue),
        sampleName(sampleNameValue)
{
}


bool operator==(const sampleNames_s& lhs, const sampleNames_s& rhs) {
    if (&lhs == &rhs)
        return true;

    return
        lhs.sample == rhs.sample &&
        lhs.sampleName == rhs.sampleName
    ;
}

void sampleNames_s::readFromInputStream(CommonAPI::InputStream& inputStream) {
    inputStream >> sample;
    inputStream >> sampleName;
}

void sampleNames_s::writeToOutputStream(CommonAPI::OutputStream& outputStream) const {
    outputStream << sample;
    outputStream << sampleName;
}
am_Domain_s::am_Domain_s(const am_domainID_t& domainIDValue, const std::string& nameValue, const std::string& busnameValue, const std::string& nodenameValue, const bool& earlyValue, const bool& completeValue, const am_DomainState_e& stateValue):
        domainID(domainIDValue),
        name(nameValue),
        busname(busnameValue),
        nodename(nodenameValue),
        early(earlyValue),
        complete(completeValue),
        state(stateValue)
{
}


bool operator==(const am_Domain_s& lhs, const am_Domain_s& rhs) {
    if (&lhs == &rhs)
        return true;

    return
        lhs.domainID == rhs.domainID &&
        lhs.name == rhs.name &&
        lhs.busname == rhs.busname &&
        lhs.nodename == rhs.nodename &&
        lhs.early == rhs.early &&
        lhs.complete == rhs.complete &&
        lhs.state == rhs.state
    ;
}

void am_Domain_s::readFromInputStream(CommonAPI::InputStream& inputStream) {
    inputStream >> domainID;
    inputStream >> name;
    inputStream >> busname;
    inputStream >> nodename;
    inputStream >> early;
    inputStream >> complete;
    inputStream >> state;
}

void am_Domain_s::writeToOutputStream(CommonAPI::OutputStream& outputStream) const {
    outputStream << domainID;
    outputStream << name;
    outputStream << busname;
    outputStream << nodename;
    outputStream << early;
    outputStream << complete;
    outputStream << state;
}
am_Volumes_s::am_Volumes_s(const am_VolumeType_e& volumeTypeValue, const am_DataType_u& volumeIDValue, const am_volume_t& volumeValue, const am_RampType_e& rampValue, const am_time_t& timeValue):
        volumeType(volumeTypeValue),
        volumeID(volumeIDValue),
        volume(volumeValue),
        ramp(rampValue),
        time(timeValue)
{
}


bool operator==(const am_Volumes_s& lhs, const am_Volumes_s& rhs) {
    if (&lhs == &rhs)
        return true;

    return
        lhs.volumeType == rhs.volumeType &&
        lhs.volumeID == rhs.volumeID &&
        lhs.volume == rhs.volume &&
        lhs.ramp == rhs.ramp &&
        lhs.time == rhs.time
    ;
}

void am_Volumes_s::readFromInputStream(CommonAPI::InputStream& inputStream) {
    inputStream >> volumeType;
    inputStream >> volumeID;
    inputStream >> volume;
    inputStream >> ramp;
    inputStream >> time;
}

void am_Volumes_s::writeToOutputStream(CommonAPI::OutputStream& outputStream) const {
    outputStream << volumeType;
    outputStream << volumeID;
    outputStream << volume;
    outputStream << ramp;
    outputStream << time;
}
notificationPayload_s::notificationPayload_s(const int16_t& typeValue, const int16_t& payloadValue):
        type(typeValue),
        payload(payloadValue)
{
}


bool operator==(const notificationPayload_s& lhs, const notificationPayload_s& rhs) {
    if (&lhs == &rhs)
        return true;

    return
        lhs.type == rhs.type &&
        lhs.payload == rhs.payload
    ;
}

void notificationPayload_s::readFromInputStream(CommonAPI::InputStream& inputStream) {
    inputStream >> type;
    inputStream >> payload;
}

void notificationPayload_s::writeToOutputStream(CommonAPI::OutputStream& outputStream) const {
    outputStream << type;
    outputStream << payload;
}
am_Availability_s::am_Availability_s(const am_Availability_e& availabilityValue, const am_AvailabilityReason_e& availabilityReasonValue):
        availability(availabilityValue),
        availabilityReason(availabilityReasonValue)
{
}


bool operator==(const am_Availability_s& lhs, const am_Availability_s& rhs) {
    if (&lhs == &rhs)
        return true;

    return
        lhs.availability == rhs.availability &&
        lhs.availabilityReason == rhs.availabilityReason
    ;
}

void am_Availability_s::readFromInputStream(CommonAPI::InputStream& inputStream) {
    inputStream >> availability;
    inputStream >> availabilityReason;
}

void am_Availability_s::writeToOutputStream(CommonAPI::OutputStream& outputStream) const {
    outputStream << availability;
    outputStream << availabilityReason;
}
am_SoundProperty_s::am_SoundProperty_s(const am_SoundPropertyType_e& typeValue, const int16_t& valueValue):
        type(typeValue),
        value(valueValue)
{
}


bool operator==(const am_SoundProperty_s& lhs, const am_SoundProperty_s& rhs) {
    if (&lhs == &rhs)
        return true;

    return
        lhs.type == rhs.type &&
        lhs.value == rhs.value
    ;
}

void am_SoundProperty_s::readFromInputStream(CommonAPI::InputStream& inputStream) {
    inputStream >> type;
    inputStream >> value;
}

void am_SoundProperty_s::writeToOutputStream(CommonAPI::OutputStream& outputStream) const {
    outputStream << type;
    outputStream << value;
}
am_MainSoundProperty_s::am_MainSoundProperty_s(const am_MainSoundPropertyType_e& typeValue, const int16_t& valueValue):
        type(typeValue),
        value(valueValue)
{
}


bool operator==(const am_MainSoundProperty_s& lhs, const am_MainSoundProperty_s& rhs) {
    if (&lhs == &rhs)
        return true;

    return
        lhs.type == rhs.type &&
        lhs.value == rhs.value
    ;
}

void am_MainSoundProperty_s::readFromInputStream(CommonAPI::InputStream& inputStream) {
    inputStream >> type;
    inputStream >> value;
}

void am_MainSoundProperty_s::writeToOutputStream(CommonAPI::OutputStream& outputStream) const {
    outputStream << type;
    outputStream << value;
}
am_NotificationConfiguration_s::am_NotificationConfiguration_s(const am_NotificationType_e& typeValue, const am_NotificationStatus_e& statusValue, const int16_t& parameterValue):
        type(typeValue),
        status(statusValue),
        parameter(parameterValue)
{
}


bool operator==(const am_NotificationConfiguration_s& lhs, const am_NotificationConfiguration_s& rhs) {
    if (&lhs == &rhs)
        return true;

    return
        lhs.type == rhs.type &&
        lhs.status == rhs.status &&
        lhs.parameter == rhs.parameter
    ;
}

void am_NotificationConfiguration_s::readFromInputStream(CommonAPI::InputStream& inputStream) {
    inputStream >> type;
    inputStream >> status;
    inputStream >> parameter;
}

void am_NotificationConfiguration_s::writeToOutputStream(CommonAPI::OutputStream& outputStream) const {
    outputStream << type;
    outputStream << status;
    outputStream << parameter;
}
sourceData_s::sourceData_s(const am_sourceID_t& sourceIDValue, const am_domainID_t& domainIDValue, const std::string& nameValue, const am_sourceClass_t& sourceClassIDValue, const am_SourceState_e& sourceStateValue, const am_volume_t& volumeValue, const bool& visibleValue, const am_Availability_s& availableValue, const am_InterruptState_e& interruptStateValue, const am_SoundProperty_L& listSoundPropertiesValue, const am_ConnectionFormat_L& listConnectionFormatsValue, const am_MainSoundProperty_L& listMainSoundPropertiesValue, const am_NotificationConfiguration_L& listMainNotificationConfigurationsValue, const am_NotificationConfiguration_L& listNotificationConfigurationsValue):
        sourceID(sourceIDValue),
        domainID(domainIDValue),
        name(nameValue),
        sourceClassID(sourceClassIDValue),
        sourceState(sourceStateValue),
        volume(volumeValue),
        visible(visibleValue),
        available(availableValue),
        interruptState(interruptStateValue),
        listSoundProperties(listSoundPropertiesValue),
        listConnectionFormats(listConnectionFormatsValue),
        listMainSoundProperties(listMainSoundPropertiesValue),
        listMainNotificationConfigurations(listMainNotificationConfigurationsValue),
        listNotificationConfigurations(listNotificationConfigurationsValue)
{
}


bool operator==(const sourceData_s& lhs, const sourceData_s& rhs) {
    if (&lhs == &rhs)
        return true;

    return
        lhs.sourceID == rhs.sourceID &&
        lhs.domainID == rhs.domainID &&
        lhs.name == rhs.name &&
        lhs.sourceClassID == rhs.sourceClassID &&
        lhs.sourceState == rhs.sourceState &&
        lhs.volume == rhs.volume &&
        lhs.visible == rhs.visible &&
        lhs.available == rhs.available &&
        lhs.interruptState == rhs.interruptState &&
        lhs.listSoundProperties == rhs.listSoundProperties &&
        lhs.listConnectionFormats == rhs.listConnectionFormats &&
        lhs.listMainSoundProperties == rhs.listMainSoundProperties &&
        lhs.listMainNotificationConfigurations == rhs.listMainNotificationConfigurations &&
        lhs.listNotificationConfigurations == rhs.listNotificationConfigurations
    ;
}

void sourceData_s::readFromInputStream(CommonAPI::InputStream& inputStream) {
    inputStream >> sourceID;
    inputStream >> domainID;
    inputStream >> name;
    inputStream >> sourceClassID;
    inputStream >> sourceState;
    inputStream >> volume;
    inputStream >> visible;
    inputStream >> available;
    inputStream >> interruptState;
    inputStream >> listSoundProperties;
    inputStream >> listConnectionFormats;
    inputStream >> listMainSoundProperties;
    inputStream >> listMainNotificationConfigurations;
    inputStream >> listNotificationConfigurations;
}

void sourceData_s::writeToOutputStream(CommonAPI::OutputStream& outputStream) const {
    outputStream << sourceID;
    outputStream << domainID;
    outputStream << name;
    outputStream << sourceClassID;
    outputStream << sourceState;
    outputStream << volume;
    outputStream << visible;
    outputStream << available;
    outputStream << interruptState;
    outputStream << listSoundProperties;
    outputStream << listConnectionFormats;
    outputStream << listMainSoundProperties;
    outputStream << listMainNotificationConfigurations;
    outputStream << listNotificationConfigurations;
}
sinkData_s::sinkData_s(const am_sinkID_t& sinkIDValue, const std::string& nameValue, const am_domainID_t& domainIDValue, const am_sinkClass_t& sinkClassIDValue, const am_volume_t& volumeValue, const bool& visibleValue, const am_Availability_s& availableValue, const am_MuteState_e& muteStateValue, const am_mainVolume_t& mainVolumeValue, const am_SoundProperty_L& listSoundPropertiesValue, const am_ConnectionFormat_L& listConnectionFormatsValue, const am_MainSoundProperty_L& listMainSoundPropertiesValue, const am_NotificationConfiguration_L& listMainNotificationConfigurationsValue, const am_NotificationConfiguration_L& listNotificationConfigurationsValue):
        sinkID(sinkIDValue),
        name(nameValue),
        domainID(domainIDValue),
        sinkClassID(sinkClassIDValue),
        volume(volumeValue),
        visible(visibleValue),
        available(availableValue),
        muteState(muteStateValue),
        mainVolume(mainVolumeValue),
        listSoundProperties(listSoundPropertiesValue),
        listConnectionFormats(listConnectionFormatsValue),
        listMainSoundProperties(listMainSoundPropertiesValue),
        listMainNotificationConfigurations(listMainNotificationConfigurationsValue),
        listNotificationConfigurations(listNotificationConfigurationsValue)
{
}


bool operator==(const sinkData_s& lhs, const sinkData_s& rhs) {
    if (&lhs == &rhs)
        return true;

    return
        lhs.sinkID == rhs.sinkID &&
        lhs.name == rhs.name &&
        lhs.domainID == rhs.domainID &&
        lhs.sinkClassID == rhs.sinkClassID &&
        lhs.volume == rhs.volume &&
        lhs.visible == rhs.visible &&
        lhs.available == rhs.available &&
        lhs.muteState == rhs.muteState &&
        lhs.mainVolume == rhs.mainVolume &&
        lhs.listSoundProperties == rhs.listSoundProperties &&
        lhs.listConnectionFormats == rhs.listConnectionFormats &&
        lhs.listMainSoundProperties == rhs.listMainSoundProperties &&
        lhs.listMainNotificationConfigurations == rhs.listMainNotificationConfigurations &&
        lhs.listNotificationConfigurations == rhs.listNotificationConfigurations
    ;
}

void sinkData_s::readFromInputStream(CommonAPI::InputStream& inputStream) {
    inputStream >> sinkID;
    inputStream >> name;
    inputStream >> domainID;
    inputStream >> sinkClassID;
    inputStream >> volume;
    inputStream >> visible;
    inputStream >> available;
    inputStream >> muteState;
    inputStream >> mainVolume;
    inputStream >> listSoundProperties;
    inputStream >> listConnectionFormats;
    inputStream >> listMainSoundProperties;
    inputStream >> listMainNotificationConfigurations;
    inputStream >> listNotificationConfigurations;
}

void sinkData_s::writeToOutputStream(CommonAPI::OutputStream& outputStream) const {
    outputStream << sinkID;
    outputStream << name;
    outputStream << domainID;
    outputStream << sinkClassID;
    outputStream << volume;
    outputStream << visible;
    outputStream << available;
    outputStream << muteState;
    outputStream << mainVolume;
    outputStream << listSoundProperties;
    outputStream << listConnectionFormats;
    outputStream << listMainSoundProperties;
    outputStream << listMainNotificationConfigurations;
    outputStream << listNotificationConfigurations;
}
crossfaderData_s::crossfaderData_s(const am_crossfaderID_t& crossfaderIDValue, const std::string& nameValue, const am_sinkID_t& sinkID_AValue, const am_sinkID_t& sinkID_BValue, const am_sourceID_t& sourceIDValue, const am_HotSink_e& hotSinkValue):
        crossfaderID(crossfaderIDValue),
        name(nameValue),
        sinkID_A(sinkID_AValue),
        sinkID_B(sinkID_BValue),
        sourceID(sourceIDValue),
        hotSink(hotSinkValue)
{
}


bool operator==(const crossfaderData_s& lhs, const crossfaderData_s& rhs) {
    if (&lhs == &rhs)
        return true;

    return
        lhs.crossfaderID == rhs.crossfaderID &&
        lhs.name == rhs.name &&
        lhs.sinkID_A == rhs.sinkID_A &&
        lhs.sinkID_B == rhs.sinkID_B &&
        lhs.sourceID == rhs.sourceID &&
        lhs.hotSink == rhs.hotSink
    ;
}

void crossfaderData_s::readFromInputStream(CommonAPI::InputStream& inputStream) {
    inputStream >> crossfaderID;
    inputStream >> name;
    inputStream >> sinkID_A;
    inputStream >> sinkID_B;
    inputStream >> sourceID;
    inputStream >> hotSink;
}

void crossfaderData_s::writeToOutputStream(CommonAPI::OutputStream& outputStream) const {
    outputStream << crossfaderID;
    outputStream << name;
    outputStream << sinkID_A;
    outputStream << sinkID_B;
    outputStream << sourceID;
    outputStream << hotSink;
}
am_Gateway_s::am_Gateway_s(const am_gatewayID_t& gatewayIDValue, const std::string& nameValue, const am_sinkID_t& sinkIDValue, const am_sourceID_t& sourceIDValue, const am_domainID_t& domainSinkIDValue, const am_domainID_t& domainSourceIDValue, const am_domainID_t& controlDomainIDValue, const am_ConnectionFormat_L& listSourceFormatsValue, const am_ConnectionFormat_L& listSinkFormatsValue, const bool_L& convertionMatrixValue):
        gatewayID(gatewayIDValue),
        name(nameValue),
        sinkID(sinkIDValue),
        sourceID(sourceIDValue),
        domainSinkID(domainSinkIDValue),
        domainSourceID(domainSourceIDValue),
        controlDomainID(controlDomainIDValue),
        listSourceFormats(listSourceFormatsValue),
        listSinkFormats(listSinkFormatsValue),
        convertionMatrix(convertionMatrixValue)
{
}


bool operator==(const am_Gateway_s& lhs, const am_Gateway_s& rhs) {
    if (&lhs == &rhs)
        return true;

    return
        lhs.gatewayID == rhs.gatewayID &&
        lhs.name == rhs.name &&
        lhs.sinkID == rhs.sinkID &&
        lhs.sourceID == rhs.sourceID &&
        lhs.domainSinkID == rhs.domainSinkID &&
        lhs.domainSourceID == rhs.domainSourceID &&
        lhs.controlDomainID == rhs.controlDomainID &&
        lhs.listSourceFormats == rhs.listSourceFormats &&
        lhs.listSinkFormats == rhs.listSinkFormats &&
        lhs.convertionMatrix == rhs.convertionMatrix
    ;
}

void am_Gateway_s::readFromInputStream(CommonAPI::InputStream& inputStream) {
    inputStream >> gatewayID;
    inputStream >> name;
    inputStream >> sinkID;
    inputStream >> sourceID;
    inputStream >> domainSinkID;
    inputStream >> domainSourceID;
    inputStream >> controlDomainID;
    inputStream >> listSourceFormats;
    inputStream >> listSinkFormats;
    inputStream >> convertionMatrix;
}

void am_Gateway_s::writeToOutputStream(CommonAPI::OutputStream& outputStream) const {
    outputStream << gatewayID;
    outputStream << name;
    outputStream << sinkID;
    outputStream << sourceID;
    outputStream << domainSinkID;
    outputStream << domainSourceID;
    outputStream << controlDomainID;
    outputStream << listSourceFormats;
    outputStream << listSinkFormats;
    outputStream << convertionMatrix;
}
am_EarlyData_s::am_EarlyData_s(const am_EarlyDataType_e& typeValue, const am_DataType_u& sinksourceValue, const am_EarlyData_u& dataValue):
        type(typeValue),
        sinksource(sinksourceValue),
        data(dataValue)
{
}


bool operator==(const am_EarlyData_s& lhs, const am_EarlyData_s& rhs) {
    if (&lhs == &rhs)
        return true;

    return
        lhs.type == rhs.type &&
        lhs.sinksource == rhs.sinksource &&
        lhs.data == rhs.data
    ;
}

void am_EarlyData_s::readFromInputStream(CommonAPI::InputStream& inputStream) {
    inputStream >> type;
    inputStream >> sinksource;
    inputStream >> data;
}

void am_EarlyData_s::writeToOutputStream(CommonAPI::OutputStream& outputStream) const {
    outputStream << type;
    outputStream << sinksource;
    outputStream << data;
}

} // namespace am_gen
} // namespace audiomanager
} // namespace genivi
} // namespace org