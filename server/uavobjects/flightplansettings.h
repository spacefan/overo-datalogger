/**
 ******************************************************************************
 * @addtogroup UAVObjects UAVObject set for this firmware
 * @{
 * @addtogroup FlightPlanSettings FlightPlanSettings
 * @brief Settings for the flight plan module, control the execution of the script
 *
 *
 * @file       flightplansettings.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     Tau Labs, http://taulabs.org, Copyright (C) 2012-2013
 * @brief      Include files for the FlightPlanSettings object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: flightplansettings.xml. 
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

#ifndef FLIGHTPLANSETTINGS_H
#define FLIGHTPLANSETTINGS_H

// Object constants
#define FLIGHTPLANSETTINGS_OBJID 0x92E9FF76
#define FLIGHTPLANSETTINGS_ISSINGLEINST 1
#define FLIGHTPLANSETTINGS_ISSETTINGS 1
#define FLIGHTPLANSETTINGS_NUMBYTES 4

// Generic interface functions
int32_t FlightPlanSettingsInitialize();
UAVObjHandle FlightPlanSettingsHandle();
void FlightPlanSettingsSetDefaults(UAVObjHandle obj, uint16_t instId);

// Object data
typedef struct {
    float Test;

} __attribute__((packed)) __attribute__((aligned(4))) FlightPlanSettingsData;

// Typesafe Object access functions
/**
 * @function FlightPlanSettingsGet(dataOut)
 * @brief Populate a FlightPlanSettingsData object
 * @param[out] dataOut 
 */
static inline int32_t FlightPlanSettingsGet(FlightPlanSettingsData *dataOut) { return UAVObjGetData(FlightPlanSettingsHandle(), dataOut); }

static inline int32_t FlightPlanSettingsSet(const FlightPlanSettingsData *dataIn) { return UAVObjSetData(FlightPlanSettingsHandle(), dataIn); }

static inline int32_t FlightPlanSettingsInstGet(uint16_t instId, FlightPlanSettingsData *dataOut) { return UAVObjGetInstanceData(FlightPlanSettingsHandle(), instId, dataOut); }

static inline int32_t FlightPlanSettingsInstSet(uint16_t instId, const FlightPlanSettingsData *dataIn) { return UAVObjSetInstanceData(FlightPlanSettingsHandle(), instId, dataIn); }

static inline int32_t FlightPlanSettingsConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(FlightPlanSettingsHandle(), queue, EV_MASK_ALL_UPDATES); }

static inline int32_t FlightPlanSettingsConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(FlightPlanSettingsHandle(), cb, EV_MASK_ALL_UPDATES); }

static inline uint16_t FlightPlanSettingsCreateInstance() { return UAVObjCreateInstance(FlightPlanSettingsHandle(), &FlightPlanSettingsSetDefaults); }

static inline void FlightPlanSettingsRequestUpdate() { UAVObjRequestUpdate(FlightPlanSettingsHandle()); }

static inline void FlightPlanSettingsRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(FlightPlanSettingsHandle(), instId); }

static inline void FlightPlanSettingsUpdated() { UAVObjUpdated(FlightPlanSettingsHandle()); }

static inline void FlightPlanSettingsInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(FlightPlanSettingsHandle(), instId); }

static inline int32_t FlightPlanSettingsGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(FlightPlanSettingsHandle(), dataOut); }

static inline int32_t FlightPlanSettingsSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(FlightPlanSettingsHandle(), dataIn); }

static inline int8_t FlightPlanSettingsReadOnly() { return UAVObjReadOnly(FlightPlanSettingsHandle()); }

static inline uint16_t FlightPlanSettingsGetNumInstances(){ return UAVObjGetNumInstances(FlightPlanSettingsHandle()); }

static inline uint32_t FlightPlanSettingsGetNumBytes(){ return UAVObjGetNumBytes(FlightPlanSettingsHandle()); }

// Field information
// Field Test information


// set/Get functions
extern void FlightPlanSettingsTestSet( float *NewTest );
extern void FlightPlanSettingsTestGet( float *NewTest );


#endif // FLIGHTPLANSETTINGS_H

/**
 * @}
 * @}
 */
