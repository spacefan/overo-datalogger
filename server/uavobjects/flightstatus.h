/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup FlightStatus FlightStatus 
 * @brief Contains major flight status information for other modules.
 *
 * Autogenerated files and functions for FlightStatus Object
 
 * @{ 
 *
 * @file       flightstatus.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Implementation of the FlightStatus object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: flightstatus.xml. 
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

#ifndef FLIGHTSTATUS_H
#define FLIGHTSTATUS_H

// Object constants
#define FLIGHTSTATUS_OBJID 0x19B92D8
#define FLIGHTSTATUS_NAME "FlightStatus"
#define FLIGHTSTATUS_METANAME "FlightStatusMeta"
#define FLIGHTSTATUS_ISSINGLEINST 1
#define FLIGHTSTATUS_ISSETTINGS 0
#define FLIGHTSTATUS_NUMBYTES sizeof(FlightStatusData)

// Object access macros
/**
 * @function FlightStatusGet(dataOut)
 * @brief Populate a FlightStatusData object
 * @param[out] dataOut 
 */
#define FlightStatusGet(dataOut) UAVObjGetData(FlightStatusHandle(), dataOut)
#define FlightStatusSet(dataIn) UAVObjSetData(FlightStatusHandle(), dataIn)
#define FlightStatusInstGet(instId, dataOut) UAVObjGetInstanceData(FlightStatusHandle(), instId, dataOut)
#define FlightStatusInstSet(instId, dataIn) UAVObjSetInstanceData(FlightStatusHandle(), instId, dataIn)
#define FlightStatusConnectQueue(queue) UAVObjConnectQueue(FlightStatusHandle(), queue, EV_MASK_ALL_UPDATES)
#define FlightStatusConnectCallback(cb) UAVObjConnectCallback(FlightStatusHandle(), cb, EV_MASK_ALL_UPDATES)
#define FlightStatusCreateInstance() UAVObjCreateInstance(FlightStatusHandle(),&FlightStatusSetDefaults)
#define FlightStatusRequestUpdate() UAVObjRequestUpdate(FlightStatusHandle())
#define FlightStatusRequestInstUpdate(instId) UAVObjRequestInstanceUpdate(FlightStatusHandle(), instId)
#define FlightStatusUpdated() UAVObjUpdated(FlightStatusHandle())
#define FlightStatusInstUpdated(instId) UAVObjUpdated(FlightStatusHandle(), instId)
#define FlightStatusGetMetadata(dataOut) UAVObjGetMetadata(FlightStatusHandle(), dataOut)
#define FlightStatusSetMetadata(dataIn) UAVObjSetMetadata(FlightStatusHandle(), dataIn)
#define FlightStatusReadOnly() UAVObjReadOnly(FlightStatusHandle())

// Object data
typedef struct {
    uint8_t Armed;
    uint8_t FlightMode;

} __attribute__((packed)) FlightStatusData;

// Field information
// Field Armed information
/* Enumeration options for field Armed */
typedef enum { FLIGHTSTATUS_ARMED_DISARMED=0, FLIGHTSTATUS_ARMED_ARMING=1, FLIGHTSTATUS_ARMED_ARMED=2 } FlightStatusArmedOptions;
// Field FlightMode information
/* Enumeration options for field FlightMode */
typedef enum { FLIGHTSTATUS_FLIGHTMODE_MANUAL=0, FLIGHTSTATUS_FLIGHTMODE_STABILIZED1=1, FLIGHTSTATUS_FLIGHTMODE_STABILIZED2=2, FLIGHTSTATUS_FLIGHTMODE_STABILIZED3=3, FLIGHTSTATUS_FLIGHTMODE_ALTITUDEHOLD=4, FLIGHTSTATUS_FLIGHTMODE_VELOCITYCONTROL=5, FLIGHTSTATUS_FLIGHTMODE_POSITIONHOLD=6, FLIGHTSTATUS_FLIGHTMODE_PATHPLANNER=7 } FlightStatusFlightModeOptions;


// Generic interface functions
int32_t FlightStatusInitialize();
UAVObjHandle FlightStatusHandle();
void FlightStatusSetDefaults(UAVObjHandle obj, uint16_t instId);

// set/Get functions
extern void FlightStatusArmedSet( uint8_t *NewArmed );
extern void FlightStatusArmedGet( uint8_t *NewArmed );
extern void FlightStatusFlightModeSet( uint8_t *NewFlightMode );
extern void FlightStatusFlightModeGet( uint8_t *NewFlightMode );


#endif // FLIGHTSTATUS_H

/**
 * @}
 * @}
 */
