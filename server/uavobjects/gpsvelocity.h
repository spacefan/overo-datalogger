/**
 ******************************************************************************
 * @addtogroup UAVObjects UAVObject set for this firmware
 * @{
 * @addtogroup GPSVelocity GPSVelocity
 * @brief Raw GPS data from @ref GPSModule.
 *
 *
 * @file       gpsvelocity.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     Tau Labs, http://taulabs.org, Copyright (C) 2012-2013
 * @brief      Include files for the GPSVelocity object. This file has been 
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
#define GPSVELOCITY_NUMBYTES 12

// Generic interface functions
int32_t GPSVelocityInitialize();
UAVObjHandle GPSVelocityHandle();
void GPSVelocitySetDefaults(UAVObjHandle obj, uint16_t instId);

// Object data
typedef struct {
    float North;
    float East;
    float Down;

} __attribute__((packed)) __attribute__((aligned(4))) GPSVelocityData;

// Typesafe Object access functions
/**
 * @function GPSVelocityGet(dataOut)
 * @brief Populate a GPSVelocityData object
 * @param[out] dataOut 
 */
static inline int32_t GPSVelocityGet(GPSVelocityData *dataOut) { return UAVObjGetData(GPSVelocityHandle(), dataOut); }

static inline int32_t GPSVelocitySet(const GPSVelocityData *dataIn) { return UAVObjSetData(GPSVelocityHandle(), dataIn); }

static inline int32_t GPSVelocityInstGet(uint16_t instId, GPSVelocityData *dataOut) { return UAVObjGetInstanceData(GPSVelocityHandle(), instId, dataOut); }

static inline int32_t GPSVelocityInstSet(uint16_t instId, const GPSVelocityData *dataIn) { return UAVObjSetInstanceData(GPSVelocityHandle(), instId, dataIn); }

static inline int32_t GPSVelocityConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(GPSVelocityHandle(), queue, EV_MASK_ALL_UPDATES); }

static inline int32_t GPSVelocityConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(GPSVelocityHandle(), cb, EV_MASK_ALL_UPDATES); }

static inline uint16_t GPSVelocityCreateInstance() { return UAVObjCreateInstance(GPSVelocityHandle(), &GPSVelocitySetDefaults); }

static inline void GPSVelocityRequestUpdate() { UAVObjRequestUpdate(GPSVelocityHandle()); }

static inline void GPSVelocityRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(GPSVelocityHandle(), instId); }

static inline void GPSVelocityUpdated() { UAVObjUpdated(GPSVelocityHandle()); }

static inline void GPSVelocityInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(GPSVelocityHandle(), instId); }

static inline int32_t GPSVelocityGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(GPSVelocityHandle(), dataOut); }

static inline int32_t GPSVelocitySetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(GPSVelocityHandle(), dataIn); }

static inline int8_t GPSVelocityReadOnly() { return UAVObjReadOnly(GPSVelocityHandle()); }

static inline uint16_t GPSVelocityGetNumInstances(){ return UAVObjGetNumInstances(GPSVelocityHandle()); }

static inline uint32_t GPSVelocityGetNumBytes(){ return UAVObjGetNumBytes(GPSVelocityHandle()); }

// Field information
// Field North information
// Field East information
// Field Down information


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
