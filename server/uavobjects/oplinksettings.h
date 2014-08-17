/**
 ******************************************************************************
 * @addtogroup UAVObjects UAVObject set for this firmware
 * @{
 * @addtogroup OPLinkSettings OPLinkSettings
 * @brief OPLink configurations options.
 *
 *
 * @file       oplinksettings.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     Tau Labs, http://taulabs.org, Copyright (C) 2012-2013
 * @brief      Include files for the OPLinkSettings object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: oplinksettings.xml. 
 *             This is an automatically generated file.
 *             DO NOT modify manually.
 *
 * @see        The GNU Public License (GPL) Version 3
 *
 *****************************************************************************/
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#ifndef OPLINKSETTINGS_H
#define OPLINKSETTINGS_H

// Object constants
#define OPLINKSETTINGS_OBJID 0x449737BC
#define OPLINKSETTINGS_ISSINGLEINST 1
#define OPLINKSETTINGS_ISSETTINGS 1
#define OPLINKSETTINGS_NUMBYTES 55

// Generic interface functions
int32_t OPLinkSettingsInitialize();
UAVObjHandle OPLinkSettingsHandle();
void OPLinkSettingsSetDefaults(UAVObjHandle obj, uint16_t instId);

// Object data
typedef struct {
    uint32_t PairID;
    uint32_t MinFrequency;
    uint32_t MaxFrequency;
    uint16_t SendTimeout;
    uint8_t Coordinator;
    uint8_t PPM;
    uint8_t UAVTalk;
    uint8_t InputConnection;
    uint8_t OutputConnection;
    uint8_t ComSpeed;
    uint8_t MaxRFPower;
    uint8_t MinPacketSize;
    uint8_t FrequencyCalibration;
    uint8_t AESKey[32];

} __attribute__((packed)) __attribute__((aligned(4))) OPLinkSettingsData;

// Typesafe Object access functions
/**
 * @function OPLinkSettingsGet(dataOut)
 * @brief Populate a OPLinkSettingsData object
 * @param[out] dataOut 
 */
static inline int32_t OPLinkSettingsGet(OPLinkSettingsData *dataOut) { return UAVObjGetData(OPLinkSettingsHandle(), dataOut); }

static inline int32_t OPLinkSettingsSet(const OPLinkSettingsData *dataIn) { return UAVObjSetData(OPLinkSettingsHandle(), dataIn); }

static inline int32_t OPLinkSettingsInstGet(uint16_t instId, OPLinkSettingsData *dataOut) { return UAVObjGetInstanceData(OPLinkSettingsHandle(), instId, dataOut); }

static inline int32_t OPLinkSettingsInstSet(uint16_t instId, const OPLinkSettingsData *dataIn) { return UAVObjSetInstanceData(OPLinkSettingsHandle(), instId, dataIn); }

static inline int32_t OPLinkSettingsConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(OPLinkSettingsHandle(), queue, EV_MASK_ALL_UPDATES); }

static inline int32_t OPLinkSettingsConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(OPLinkSettingsHandle(), cb, EV_MASK_ALL_UPDATES); }

static inline uint16_t OPLinkSettingsCreateInstance() { return UAVObjCreateInstance(OPLinkSettingsHandle(), &OPLinkSettingsSetDefaults); }

static inline void OPLinkSettingsRequestUpdate() { UAVObjRequestUpdate(OPLinkSettingsHandle()); }

static inline void OPLinkSettingsRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(OPLinkSettingsHandle(), instId); }

static inline void OPLinkSettingsUpdated() { UAVObjUpdated(OPLinkSettingsHandle()); }

static inline void OPLinkSettingsInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(OPLinkSettingsHandle(), instId); }

static inline int32_t OPLinkSettingsGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(OPLinkSettingsHandle(), dataOut); }

static inline int32_t OPLinkSettingsSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(OPLinkSettingsHandle(), dataIn); }

static inline int8_t OPLinkSettingsReadOnly() { return UAVObjReadOnly(OPLinkSettingsHandle()); }

static inline uint16_t OPLinkSettingsGetNumInstances(){ return UAVObjGetNumInstances(OPLinkSettingsHandle()); }

static inline uint32_t OPLinkSettingsGetNumBytes(){ return UAVObjGetNumBytes(OPLinkSettingsHandle()); }

// Field information
// Field PairID information
// Field MinFrequency information
// Field MaxFrequency information
// Field SendTimeout information
// Field Coordinator information
/* Enumeration options for field Coordinator */
typedef enum { OPLINKSETTINGS_COORDINATOR_FALSE=0, OPLINKSETTINGS_COORDINATOR_TRUE=1 }  __attribute__((packed)) OPLinkSettingsCoordinatorOptions;
// Field PPM information
/* Enumeration options for field PPM */
typedef enum { OPLINKSETTINGS_PPM_FALSE=0, OPLINKSETTINGS_PPM_TRUE=1 }  __attribute__((packed)) OPLinkSettingsPPMOptions;
// Field UAVTalk information
/* Enumeration options for field UAVTalk */
typedef enum { OPLINKSETTINGS_UAVTALK_FALSE=0, OPLINKSETTINGS_UAVTALK_TRUE=1 }  __attribute__((packed)) OPLinkSettingsUAVTalkOptions;
// Field InputConnection information
/* Enumeration options for field InputConnection */
typedef enum { OPLINKSETTINGS_INPUTCONNECTION_HID=0, OPLINKSETTINGS_INPUTCONNECTION_VCP=1, OPLINKSETTINGS_INPUTCONNECTION_TELEMETRY=2, OPLINKSETTINGS_INPUTCONNECTION_FLEXI=3 }  __attribute__((packed)) OPLinkSettingsInputConnectionOptions;
// Field OutputConnection information
/* Enumeration options for field OutputConnection */
typedef enum { OPLINKSETTINGS_OUTPUTCONNECTION_REMOTEHID=0, OPLINKSETTINGS_OUTPUTCONNECTION_REMOTEVCP=1, OPLINKSETTINGS_OUTPUTCONNECTION_REMOTETELEMETRY=2, OPLINKSETTINGS_OUTPUTCONNECTION_REMOTEFLEXI=3, OPLINKSETTINGS_OUTPUTCONNECTION_TELEMETRY=4, OPLINKSETTINGS_OUTPUTCONNECTION_FLEXI=5 }  __attribute__((packed)) OPLinkSettingsOutputConnectionOptions;
// Field ComSpeed information
/* Enumeration options for field ComSpeed */
typedef enum { OPLINKSETTINGS_COMSPEED_2400=0, OPLINKSETTINGS_COMSPEED_4800=1, OPLINKSETTINGS_COMSPEED_9600=2, OPLINKSETTINGS_COMSPEED_19200=3, OPLINKSETTINGS_COMSPEED_38400=4, OPLINKSETTINGS_COMSPEED_57600=5, OPLINKSETTINGS_COMSPEED_115200=6 }  __attribute__((packed)) OPLinkSettingsComSpeedOptions;
// Field MaxRFPower information
/* Enumeration options for field MaxRFPower */
typedef enum { OPLINKSETTINGS_MAXRFPOWER_125=0, OPLINKSETTINGS_MAXRFPOWER_16=1, OPLINKSETTINGS_MAXRFPOWER_316=2, OPLINKSETTINGS_MAXRFPOWER_63=3, OPLINKSETTINGS_MAXRFPOWER_126=4, OPLINKSETTINGS_MAXRFPOWER_25=5, OPLINKSETTINGS_MAXRFPOWER_50=6, OPLINKSETTINGS_MAXRFPOWER_100=7 }  __attribute__((packed)) OPLinkSettingsMaxRFPowerOptions;
// Field MinPacketSize information
// Field FrequencyCalibration information
// Field AESKey information
/* Number of elements for field AESKey */
#define OPLINKSETTINGS_AESKEY_NUMELEM 32


// set/Get functions
extern void OPLinkSettingsPairIDSet( uint32_t *NewPairID );
extern void OPLinkSettingsPairIDGet( uint32_t *NewPairID );
extern void OPLinkSettingsMinFrequencySet( uint32_t *NewMinFrequency );
extern void OPLinkSettingsMinFrequencyGet( uint32_t *NewMinFrequency );
extern void OPLinkSettingsMaxFrequencySet( uint32_t *NewMaxFrequency );
extern void OPLinkSettingsMaxFrequencyGet( uint32_t *NewMaxFrequency );
extern void OPLinkSettingsSendTimeoutSet( uint16_t *NewSendTimeout );
extern void OPLinkSettingsSendTimeoutGet( uint16_t *NewSendTimeout );
extern void OPLinkSettingsCoordinatorSet( uint8_t *NewCoordinator );
extern void OPLinkSettingsCoordinatorGet( uint8_t *NewCoordinator );
extern void OPLinkSettingsPPMSet( uint8_t *NewPPM );
extern void OPLinkSettingsPPMGet( uint8_t *NewPPM );
extern void OPLinkSettingsUAVTalkSet( uint8_t *NewUAVTalk );
extern void OPLinkSettingsUAVTalkGet( uint8_t *NewUAVTalk );
extern void OPLinkSettingsInputConnectionSet( uint8_t *NewInputConnection );
extern void OPLinkSettingsInputConnectionGet( uint8_t *NewInputConnection );
extern void OPLinkSettingsOutputConnectionSet( uint8_t *NewOutputConnection );
extern void OPLinkSettingsOutputConnectionGet( uint8_t *NewOutputConnection );
extern void OPLinkSettingsComSpeedSet( uint8_t *NewComSpeed );
extern void OPLinkSettingsComSpeedGet( uint8_t *NewComSpeed );
extern void OPLinkSettingsMaxRFPowerSet( uint8_t *NewMaxRFPower );
extern void OPLinkSettingsMaxRFPowerGet( uint8_t *NewMaxRFPower );
extern void OPLinkSettingsMinPacketSizeSet( uint8_t *NewMinPacketSize );
extern void OPLinkSettingsMinPacketSizeGet( uint8_t *NewMinPacketSize );
extern void OPLinkSettingsFrequencyCalibrationSet( uint8_t *NewFrequencyCalibration );
extern void OPLinkSettingsFrequencyCalibrationGet( uint8_t *NewFrequencyCalibration );
extern void OPLinkSettingsAESKeySet( uint8_t *NewAESKey );
extern void OPLinkSettingsAESKeyGet( uint8_t *NewAESKey );


#endif // OPLINKSETTINGS_H

/**
 * @}
 * @}
 */
