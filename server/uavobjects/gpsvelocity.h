/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup GPSVelocity GPSVelocity 
 * @brief Raw GPS data from @ref GPSModule.  Should only be used by @ref AHRSCommsModule.
 *
 * Autogenerated files and functions for GPSVelocity Object
 
 * @{ 
 *
 * @file       gpsvelocity.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Implementation of the GPSVelocity object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: gpsvelocity.xml. 
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

#ifndef GPSVELOCITY_H
#define GPSVELOCITY_H

// Object constants
#define GPSVELOCITY_OBJID 0x8245DC80
#define GPSVELOCITY_ISSINGLEINST 1
#define GPSVELOCITY_ISSETTINGS 0
#define GPSVELOCITY_NUMBYTES sizeof(GPSVelocityData)

// Object access macros
/**
 * @function GPSVelocityGet(dataOut)
 * @brief Populate a GPSVelocityData object
 * @param[out] dataOut 
 */
#define GPSVelocityGet(dataOut) UAVObjGetData(GPSVelocityHandle(), dataOut)
#define GPSVelocitySet(dataIn) UAVObjSetData(GPSVelocityHandle(), dataIn)
#define GPSVelocityInstGet(instId, dataOut) UAVObjGetInstanceData(GPSVelocityHandle(), instId, dataOut)
#define GPSVelocityInstSet(instId, dataIn) UAVObjSetInstanceData(GPSVelocityHandle(), instId, dataIn)
#define GPSVelocityConnectQueue(queue) UAVObjConnectQueue(GPSVelocityHandle(), queue, EV_MASK_ALL_UPDATES)
#define GPSVelocityConnectCallback(cb) UAVObjConnectCallback(GPSVelocityHandle(), cb, EV_MASK_ALL_UPDATES)
#define GPSVelocityCreateInstance() UAVObjCreateInstance(GPSVelocityHandle(),&GPSVelocitySetDefaults)
#define GPSVelocityRequestUpdate() UAVObjRequestUpdate(GPSVelocityHandle())
#define GPSVelocityRequestInstUpdate(instId) UAVObjRequestInstanceUpdate(GPSVelocityHandle(), instId)
#define GPSVelocityUpdated() UAVObjUpdated(GPSVelocityHandle())
#define GPSVelocityInstUpdated(instId) UAVObjUpdated(GPSVelocityHandle(), instId)
#define GPSVelocityGetMetadata(dataOut) UAVObjGetMetadata(GPSVelocityHandle(), dataOut)
#define GPSVelocitySetMetadata(dataIn) UAVObjSetMetadata(GPSVelocityHandle(), dataIn)
#define GPSVelocityReadOnly() UAVObjReadOnly(GPSVelocityHandle())

// Object data
typedef struct {
    float North;
    float East;
    float Down;

} __attribute__((packed)) GPSVelocityData;

// Field information
// Field North information
// Field East information
// Field Down information


// Generic interface functions
int32_t GPSVelocityInitialize();
UAVObjHandle GPSVelocityHandle();
void GPSVelocitySetDefaults(UAVObjHandle obj, uint16_t instId);

// set/Get functions
extern void GPSVelocityNorthSet( float *NewNorth );
extern void GPSVelocityNorthGet( float *NewNorth );
extern void GPSVelocityEastSet( float *NewEast );
extern void GPSVelocityEastGet( float *NewEast );
extern void GPSVelocityDownSet( float *NewDown );
extern void GPSVelocityDownGet( float *NewDown );


#endif // GPSVELOCITY_H

/**
 * @}
 * @}
 */
