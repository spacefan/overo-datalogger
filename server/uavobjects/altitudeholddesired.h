/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup AltitudeHoldDesired AltitudeHoldDesired 
 * @brief Holds the desired altitude (from manual control) as well as the desired attitude to pass through
 *
 * Autogenerated files and functions for AltitudeHoldDesired Object
 
 * @{ 
 *
 * @file       altitudeholddesired.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Implementation of the AltitudeHoldDesired object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: altitudeholddesired.xml. 
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

#ifndef ALTITUDEHOLDDESIRED_H
#define ALTITUDEHOLDDESIRED_H

// Object constants
#define ALTITUDEHOLDDESIRED_OBJID 0x495BAD6E
#define ALTITUDEHOLDDESIRED_ISSINGLEINST 1
#define ALTITUDEHOLDDESIRED_ISSETTINGS 0
#define ALTITUDEHOLDDESIRED_NUMBYTES sizeof(AltitudeHoldDesiredData)

// Object access macros
/**
 * @function AltitudeHoldDesiredGet(dataOut)
 * @brief Populate a AltitudeHoldDesiredData object
 * @param[out] dataOut 
 */
#define AltitudeHoldDesiredGet(dataOut) UAVObjGetData(AltitudeHoldDesiredHandle(), dataOut)
#define AltitudeHoldDesiredSet(dataIn) UAVObjSetData(AltitudeHoldDesiredHandle(), dataIn)
#define AltitudeHoldDesiredInstGet(instId, dataOut) UAVObjGetInstanceData(AltitudeHoldDesiredHandle(), instId, dataOut)
#define AltitudeHoldDesiredInstSet(instId, dataIn) UAVObjSetInstanceData(AltitudeHoldDesiredHandle(), instId, dataIn)
#define AltitudeHoldDesiredConnectQueue(queue) UAVObjConnectQueue(AltitudeHoldDesiredHandle(), queue, EV_MASK_ALL_UPDATES)
#define AltitudeHoldDesiredConnectCallback(cb) UAVObjConnectCallback(AltitudeHoldDesiredHandle(), cb, EV_MASK_ALL_UPDATES)
#define AltitudeHoldDesiredCreateInstance() UAVObjCreateInstance(AltitudeHoldDesiredHandle(),&AltitudeHoldDesiredSetDefaults)
#define AltitudeHoldDesiredRequestUpdate() UAVObjRequestUpdate(AltitudeHoldDesiredHandle())
#define AltitudeHoldDesiredRequestInstUpdate(instId) UAVObjRequestInstanceUpdate(AltitudeHoldDesiredHandle(), instId)
#define AltitudeHoldDesiredUpdated() UAVObjUpdated(AltitudeHoldDesiredHandle())
#define AltitudeHoldDesiredInstUpdated(instId) UAVObjUpdated(AltitudeHoldDesiredHandle(), instId)
#define AltitudeHoldDesiredGetMetadata(dataOut) UAVObjGetMetadata(AltitudeHoldDesiredHandle(), dataOut)
#define AltitudeHoldDesiredSetMetadata(dataIn) UAVObjSetMetadata(AltitudeHoldDesiredHandle(), dataIn)
#define AltitudeHoldDesiredReadOnly() UAVObjReadOnly(AltitudeHoldDesiredHandle())

// Object data
typedef struct {
    float Altitude;
    float Roll;
    float Pitch;
    float Yaw;

} __attribute__((packed)) AltitudeHoldDesiredData;

// Field information
// Field Altitude information
// Field Roll information
// Field Pitch information
// Field Yaw information


// Generic interface functions
int32_t AltitudeHoldDesiredInitialize();
UAVObjHandle AltitudeHoldDesiredHandle();
void AltitudeHoldDesiredSetDefaults(UAVObjHandle obj, uint16_t instId);

// set/Get functions
extern void AltitudeHoldDesiredAltitudeSet( float *NewAltitude );
extern void AltitudeHoldDesiredAltitudeGet( float *NewAltitude );
extern void AltitudeHoldDesiredRollSet( float *NewRoll );
extern void AltitudeHoldDesiredRollGet( float *NewRoll );
extern void AltitudeHoldDesiredPitchSet( float *NewPitch );
extern void AltitudeHoldDesiredPitchGet( float *NewPitch );
extern void AltitudeHoldDesiredYawSet( float *NewYaw );
extern void AltitudeHoldDesiredYawGet( float *NewYaw );


#endif // ALTITUDEHOLDDESIRED_H

/**
 * @}
 * @}
 */