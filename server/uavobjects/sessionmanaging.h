/**
 ******************************************************************************
 * @addtogroup UAVObjects UAVObject set for this firmware
 * @{
 * @addtogroup SessionManaging SessionManaging
 * @brief Provides session managing to uavtalk
 *
 *
 * @file       sessionmanaging.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     Tau Labs, http://taulabs.org, Copyright (C) 2012-2013
 * @brief      Include files for the SessionManaging object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: sessionmanaging.xml. 
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

#ifndef SESSIONMANAGING_H
#define SESSIONMANAGING_H

// Object constants
#define SESSIONMANAGING_OBJID 0x89034E4A
#define SESSIONMANAGING_ISSINGLEINST 1
#define SESSIONMANAGING_ISSETTINGS 0
#define SESSIONMANAGING_NUMBYTES 9

// Generic interface functions
int32_t SessionManagingInitialize();
UAVObjHandle SessionManagingHandle();
void SessionManagingSetDefaults(UAVObjHandle obj, uint16_t instId);

// Object data
typedef struct {
    uint32_t ObjectID;
    uint16_t SessionID;
    uint8_t ObjectInstances;
    uint8_t NumberOfObjects;
    uint8_t ObjectOfInterestIndex;

} __attribute__((packed)) __attribute__((aligned(4))) SessionManagingData;

// Typesafe Object access functions
/**
 * @function SessionManagingGet(dataOut)
 * @brief Populate a SessionManagingData object
 * @param[out] dataOut 
 */
static inline int32_t SessionManagingGet(SessionManagingData *dataOut) { return UAVObjGetData(SessionManagingHandle(), dataOut); }

static inline int32_t SessionManagingSet(const SessionManagingData *dataIn) { return UAVObjSetData(SessionManagingHandle(), dataIn); }

static inline int32_t SessionManagingInstGet(uint16_t instId, SessionManagingData *dataOut) { return UAVObjGetInstanceData(SessionManagingHandle(), instId, dataOut); }

static inline int32_t SessionManagingInstSet(uint16_t instId, const SessionManagingData *dataIn) { return UAVObjSetInstanceData(SessionManagingHandle(), instId, dataIn); }

static inline int32_t SessionManagingConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(SessionManagingHandle(), queue, EV_MASK_ALL_UPDATES); }

static inline int32_t SessionManagingConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(SessionManagingHandle(), cb, EV_MASK_ALL_UPDATES); }

static inline uint16_t SessionManagingCreateInstance() { return UAVObjCreateInstance(SessionManagingHandle(), &SessionManagingSetDefaults); }

static inline void SessionManagingRequestUpdate() { UAVObjRequestUpdate(SessionManagingHandle()); }

static inline void SessionManagingRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(SessionManagingHandle(), instId); }

static inline void SessionManagingUpdated() { UAVObjUpdated(SessionManagingHandle()); }

static inline void SessionManagingInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(SessionManagingHandle(), instId); }

static inline int32_t SessionManagingGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(SessionManagingHandle(), dataOut); }

static inline int32_t SessionManagingSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(SessionManagingHandle(), dataIn); }

static inline int8_t SessionManagingReadOnly() { return UAVObjReadOnly(SessionManagingHandle()); }

static inline uint16_t SessionManagingGetNumInstances(){ return UAVObjGetNumInstances(SessionManagingHandle()); }

static inline uint32_t SessionManagingGetNumBytes(){ return UAVObjGetNumBytes(SessionManagingHandle()); }

// Field information
// Field ObjectID information
// Field SessionID information
// Field ObjectInstances information
// Field NumberOfObjects information
// Field ObjectOfInterestIndex information


// set/Get functions
extern void SessionManagingObjectIDSet( uint32_t *NewObjectID );
extern void SessionManagingObjectIDGet( uint32_t *NewObjectID );
extern void SessionManagingSessionIDSet( uint16_t *NewSessionID );
extern void SessionManagingSessionIDGet( uint16_t *NewSessionID );
extern void SessionManagingObjectInstancesSet( uint8_t *NewObjectInstances );
extern void SessionManagingObjectInstancesGet( uint8_t *NewObjectInstances );
extern void SessionManagingNumberOfObjectsSet( uint8_t *NewNumberOfObjects );
extern void SessionManagingNumberOfObjectsGet( uint8_t *NewNumberOfObjects );
extern void SessionManagingObjectOfInterestIndexSet( uint8_t *NewObjectOfInterestIndex );
extern void SessionManagingObjectOfInterestIndexGet( uint8_t *NewObjectOfInterestIndex );


#endif // SESSIONMANAGING_H

/**
 * @}
 * @}
 */
