/**
 ******************************************************************************
 * @addtogroup UAVObjects UAVObject set for this firmware
 * @{
 * @addtogroup SystemSettings SystemSettings
 * @brief Select airframe type.  Currently used by @ref ActuatorModule to choose mixing from @ref ActuatorDesired to @ref ActuatorCommand
 *
 *
 * @file       systemsettings.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     Tau Labs, http://taulabs.org, Copyright (C) 2012-2013
 * @brief      Include files for the SystemSettings object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: systemsettings.xml. 
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

#ifndef SYSTEMSETTINGS_H
#define SYSTEMSETTINGS_H

// Object constants
#define SYSTEMSETTINGS_OBJID 0x6F3BB6B0
#define SYSTEMSETTINGS_ISSINGLEINST 1
#define SYSTEMSETTINGS_ISSETTINGS 1
#define SYSTEMSETTINGS_NUMBYTES 17

// Generic interface functions
int32_t SystemSettingsInitialize();
UAVObjHandle SystemSettingsHandle();
void SystemSettingsSetDefaults(UAVObjHandle obj, uint16_t instId);

// Object data
typedef struct {
    uint32_t AirframeCategorySpecificConfiguration[4];
    uint8_t AirframeType;

} __attribute__((packed)) __attribute__((aligned(4))) SystemSettingsData;

// Typesafe Object access functions
/**
 * @function SystemSettingsGet(dataOut)
 * @brief Populate a SystemSettingsData object
 * @param[out] dataOut 
 */
static inline int32_t SystemSettingsGet(SystemSettingsData *dataOut) { return UAVObjGetData(SystemSettingsHandle(), dataOut); }

static inline int32_t SystemSettingsSet(const SystemSettingsData *dataIn) { return UAVObjSetData(SystemSettingsHandle(), dataIn); }

static inline int32_t SystemSettingsInstGet(uint16_t instId, SystemSettingsData *dataOut) { return UAVObjGetInstanceData(SystemSettingsHandle(), instId, dataOut); }

static inline int32_t SystemSettingsInstSet(uint16_t instId, const SystemSettingsData *dataIn) { return UAVObjSetInstanceData(SystemSettingsHandle(), instId, dataIn); }

static inline int32_t SystemSettingsConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(SystemSettingsHandle(), queue, EV_MASK_ALL_UPDATES); }

static inline int32_t SystemSettingsConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(SystemSettingsHandle(), cb, EV_MASK_ALL_UPDATES); }

static inline uint16_t SystemSettingsCreateInstance() { return UAVObjCreateInstance(SystemSettingsHandle(), &SystemSettingsSetDefaults); }

static inline void SystemSettingsRequestUpdate() { UAVObjRequestUpdate(SystemSettingsHandle()); }

static inline void SystemSettingsRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(SystemSettingsHandle(), instId); }

static inline void SystemSettingsUpdated() { UAVObjUpdated(SystemSettingsHandle()); }

static inline void SystemSettingsInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(SystemSettingsHandle(), instId); }

static inline int32_t SystemSettingsGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(SystemSettingsHandle(), dataOut); }

static inline int32_t SystemSettingsSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(SystemSettingsHandle(), dataIn); }

static inline int8_t SystemSettingsReadOnly() { return UAVObjReadOnly(SystemSettingsHandle()); }

static inline uint16_t SystemSettingsGetNumInstances(){ return UAVObjGetNumInstances(SystemSettingsHandle()); }

static inline uint32_t SystemSettingsGetNumBytes(){ return UAVObjGetNumBytes(SystemSettingsHandle()); }

// Field information
// Field AirframeCategorySpecificConfiguration information
/* Number of elements for field AirframeCategorySpecificConfiguration */
#define SYSTEMSETTINGS_AIRFRAMECATEGORYSPECIFICCONFIGURATION_NUMELEM 4
// Field AirframeType information
/* Enumeration options for field AirframeType */
typedef enum { SYSTEMSETTINGS_AIRFRAMETYPE_FIXEDWING=0, SYSTEMSETTINGS_AIRFRAMETYPE_FIXEDWINGELEVON=1, SYSTEMSETTINGS_AIRFRAMETYPE_FIXEDWINGVTAIL=2, SYSTEMSETTINGS_AIRFRAMETYPE_VTOL=3, SYSTEMSETTINGS_AIRFRAMETYPE_HELICP=4, SYSTEMSETTINGS_AIRFRAMETYPE_QUADX=5, SYSTEMSETTINGS_AIRFRAMETYPE_QUADP=6, SYSTEMSETTINGS_AIRFRAMETYPE_HEXA=7, SYSTEMSETTINGS_AIRFRAMETYPE_OCTO=8, SYSTEMSETTINGS_AIRFRAMETYPE_CUSTOM=9, SYSTEMSETTINGS_AIRFRAMETYPE_HEXAX=10, SYSTEMSETTINGS_AIRFRAMETYPE_OCTOV=11, SYSTEMSETTINGS_AIRFRAMETYPE_OCTOCOAXP=12, SYSTEMSETTINGS_AIRFRAMETYPE_OCTOCOAXX=13, SYSTEMSETTINGS_AIRFRAMETYPE_HEXACOAX=14, SYSTEMSETTINGS_AIRFRAMETYPE_TRI=15, SYSTEMSETTINGS_AIRFRAMETYPE_GROUNDVEHICLECAR=16, SYSTEMSETTINGS_AIRFRAMETYPE_GROUNDVEHICLEDIFFERENTIAL=17, SYSTEMSETTINGS_AIRFRAMETYPE_GROUNDVEHICLEMOTORCYCLE=18 }  __attribute__((packed)) SystemSettingsAirframeTypeOptions;


// set/Get functions
extern void SystemSettingsAirframeCategorySpecificConfigurationSet( uint32_t *NewAirframeCategorySpecificConfiguration );
extern void SystemSettingsAirframeCategorySpecificConfigurationGet( uint32_t *NewAirframeCategorySpecificConfiguration );
extern void SystemSettingsAirframeTypeSet( uint8_t *NewAirframeType );
extern void SystemSettingsAirframeTypeGet( uint8_t *NewAirframeType );


#endif // SYSTEMSETTINGS_H

/**
 * @}
 * @}
 */
