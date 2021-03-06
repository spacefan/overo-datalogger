/**
 ******************************************************************************
 * @addtogroup UAVObjects UAVObject set for this firmware
 * @{
 * @addtogroup OpticalFlowSettings OpticalFlowSettings
 * @brief The optical flow sensor settings.
 *
 *
 * @file       opticalflowsettings.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     Tau Labs, http://taulabs.org, Copyright (C) 2012-2015
 * @brief      Include files for the OpticalFlowSettings object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: opticalflowsettings.xml. 
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

#ifndef OPTICALFLOWSETTINGS_H
#define OPTICALFLOWSETTINGS_H

#include "pios_queue.h"
#include "uavoversion.h"



// Object constants
#define OPTICALFLOWSETTINGS_OBJID 0x55734B70
#define OPTICALFLOWSETTINGS_ISSINGLEINST 1
#define OPTICALFLOWSETTINGS_ISSETTINGS 1
#define OPTICALFLOWSETTINGS_NUMBYTES 8

// Generic interface functions
int32_t OpticalFlowSettingsInitialize();
UAVObjHandle OpticalFlowSettingsHandle();
void OpticalFlowSettingsSetDefaults(UAVObjHandle obj, uint16_t instId);

// Object data
typedef struct {
    int16_t SensorRotation[3];
    uint8_t SensorType;
    uint8_t Quality;

} __attribute__((packed)) __attribute__((aligned(4))) OpticalFlowSettingsData;

// Typesafe Object access functions
/**
 * @function OpticalFlowSettingsGet(dataOut)
 * @brief Populate a OpticalFlowSettingsData object
 * @param[out] dataOut 
 */
static inline int32_t OpticalFlowSettingsGet(OpticalFlowSettingsData *dataOut) { return UAVObjGetData(OpticalFlowSettingsHandle(), dataOut); }

static inline int32_t OpticalFlowSettingsSet(const OpticalFlowSettingsData *dataIn) { return UAVObjSetData(OpticalFlowSettingsHandle(), dataIn); }

static inline int32_t OpticalFlowSettingsInstGet(uint16_t instId, OpticalFlowSettingsData *dataOut) { return UAVObjGetInstanceData(OpticalFlowSettingsHandle(), instId, dataOut); }

static inline int32_t OpticalFlowSettingsInstSet(uint16_t instId, const OpticalFlowSettingsData *dataIn) { return UAVObjSetInstanceData(OpticalFlowSettingsHandle(), instId, dataIn); }

static inline int32_t OpticalFlowSettingsConnectQueue(struct pios_queue *queue) { return UAVObjConnectQueue(OpticalFlowSettingsHandle(), queue, EV_MASK_ALL_UPDATES); }

static inline int32_t OpticalFlowSettingsConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(OpticalFlowSettingsHandle(), cb, EV_MASK_ALL_UPDATES); }

static inline uint16_t OpticalFlowSettingsCreateInstance() { return UAVObjCreateInstance(OpticalFlowSettingsHandle(), &OpticalFlowSettingsSetDefaults); }

static inline void OpticalFlowSettingsRequestUpdate() { UAVObjRequestUpdate(OpticalFlowSettingsHandle()); }

static inline void OpticalFlowSettingsRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(OpticalFlowSettingsHandle(), instId); }

static inline void OpticalFlowSettingsUpdated() { UAVObjUpdated(OpticalFlowSettingsHandle()); }

static inline void OpticalFlowSettingsInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(OpticalFlowSettingsHandle(), instId); }

static inline int32_t OpticalFlowSettingsGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(OpticalFlowSettingsHandle(), dataOut); }

static inline int32_t OpticalFlowSettingsSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(OpticalFlowSettingsHandle(), dataIn); }

static inline int8_t OpticalFlowSettingsReadOnly() { return UAVObjReadOnly(OpticalFlowSettingsHandle()); }

static inline uint16_t OpticalFlowSettingsGetNumInstances(){ return UAVObjGetNumInstances(OpticalFlowSettingsHandle()); }

static inline uint32_t OpticalFlowSettingsGetNumBytes(){ return UAVObjGetNumBytes(OpticalFlowSettingsHandle()); }

// Field information
// Field SensorRotation information
/* Array element names for field SensorRotation */
typedef enum { OPTICALFLOWSETTINGS_SENSORROTATION_ROLL=0, OPTICALFLOWSETTINGS_SENSORROTATION_PITCH=1, OPTICALFLOWSETTINGS_SENSORROTATION_YAW=2 } __attribute__((packed)) OpticalFlowSettingsSensorRotationElem;
/* Number of elements for field SensorRotation */
#define OPTICALFLOWSETTINGS_SENSORROTATION_NUMELEM 3
// Field SensorType information
/* Enumeration options for field SensorType */
typedef enum { OPTICALFLOWSETTINGS_SENSORTYPE_NONE=0, OPTICALFLOWSETTINGS_SENSORTYPE_PX4FLOW=1 }  __attribute__((packed)) OpticalFlowSettingsSensorTypeOptions;
/* Max value of any option in topmost parent SensorType of field SensorType */
#define OPTICALFLOWSETTINGS_SENSORTYPE_GLOBAL_MAXOPTVAL 1
/* Max value of any option in field SensorType */
#define OPTICALFLOWSETTINGS_SENSORTYPE_MAXOPTVAL 1
/* Ensure field SensorType contains valid data */
static inline bool OpticalFlowSettingsSensorTypeIsValid( uint8_t CurrentSensorType ) { return CurrentSensorType < OPTICALFLOWSETTINGS_SENSORTYPE_MAXOPTVAL; }
// Field Quality information


// set/Get functions
extern void OpticalFlowSettingsSensorRotationSet( int16_t *NewSensorRotation );
extern void OpticalFlowSettingsSensorRotationGet( int16_t *NewSensorRotation );
extern void OpticalFlowSettingsSensorTypeSet( uint8_t *NewSensorType );
extern void OpticalFlowSettingsSensorTypeGet( uint8_t *NewSensorType );
extern void OpticalFlowSettingsQualitySet( uint8_t *NewQuality );
extern void OpticalFlowSettingsQualityGet( uint8_t *NewQuality );


#endif // OPTICALFLOWSETTINGS_H

/**
 * @}
 * @}
 */
