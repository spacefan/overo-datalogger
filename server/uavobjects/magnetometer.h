/**
 ******************************************************************************
 * @addtogroup UAVObjects UAVObject set for this firmware
 * @{
 * @addtogroup Magnetometer Magnetometer
 * @brief The mag data.
 *
 *
 * @file       magnetometer.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     Tau Labs, http://taulabs.org, Copyright (C) 2012-2015
 * @brief      Include files for the Magnetometer object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: magnetometer.xml. 
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

#ifndef MAGNETOMETER_H
#define MAGNETOMETER_H

#include "pios_queue.h"
#include "uavoversion.h"



// Object constants
#define MAGNETOMETER_OBJID 0x813B55DE
#define MAGNETOMETER_ISSINGLEINST 1
#define MAGNETOMETER_ISSETTINGS 0
#define MAGNETOMETER_NUMBYTES 12

// Generic interface functions
int32_t MagnetometerInitialize();
UAVObjHandle MagnetometerHandle();
void MagnetometerSetDefaults(UAVObjHandle obj, uint16_t instId);

// Object data
typedef struct {
    float x;
    float y;
    float z;

} __attribute__((packed)) __attribute__((aligned(4))) MagnetometerData;

// Typesafe Object access functions
/**
 * @function MagnetometerGet(dataOut)
 * @brief Populate a MagnetometerData object
 * @param[out] dataOut 
 */
static inline int32_t MagnetometerGet(MagnetometerData *dataOut) { return UAVObjGetData(MagnetometerHandle(), dataOut); }

static inline int32_t MagnetometerSet(const MagnetometerData *dataIn) { return UAVObjSetData(MagnetometerHandle(), dataIn); }

static inline int32_t MagnetometerInstGet(uint16_t instId, MagnetometerData *dataOut) { return UAVObjGetInstanceData(MagnetometerHandle(), instId, dataOut); }

static inline int32_t MagnetometerInstSet(uint16_t instId, const MagnetometerData *dataIn) { return UAVObjSetInstanceData(MagnetometerHandle(), instId, dataIn); }

static inline int32_t MagnetometerConnectQueue(struct pios_queue *queue) { return UAVObjConnectQueue(MagnetometerHandle(), queue, EV_MASK_ALL_UPDATES); }

static inline int32_t MagnetometerConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(MagnetometerHandle(), cb, EV_MASK_ALL_UPDATES); }

static inline uint16_t MagnetometerCreateInstance() { return UAVObjCreateInstance(MagnetometerHandle(), &MagnetometerSetDefaults); }

static inline void MagnetometerRequestUpdate() { UAVObjRequestUpdate(MagnetometerHandle()); }

static inline void MagnetometerRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(MagnetometerHandle(), instId); }

static inline void MagnetometerUpdated() { UAVObjUpdated(MagnetometerHandle()); }

static inline void MagnetometerInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(MagnetometerHandle(), instId); }

static inline int32_t MagnetometerGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(MagnetometerHandle(), dataOut); }

static inline int32_t MagnetometerSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(MagnetometerHandle(), dataIn); }

static inline int8_t MagnetometerReadOnly() { return UAVObjReadOnly(MagnetometerHandle()); }

static inline uint16_t MagnetometerGetNumInstances(){ return UAVObjGetNumInstances(MagnetometerHandle()); }

static inline uint32_t MagnetometerGetNumBytes(){ return UAVObjGetNumBytes(MagnetometerHandle()); }

// Field information
// Field x information
// Field y information
// Field z information


// set/Get functions
extern void MagnetometerxSet( float *Newx );
extern void MagnetometerxGet( float *Newx );
extern void MagnetometerySet( float *Newy );
extern void MagnetometeryGet( float *Newy );
extern void MagnetometerzSet( float *Newz );
extern void MagnetometerzGet( float *Newz );


#endif // MAGNETOMETER_H

/**
 * @}
 * @}
 */
