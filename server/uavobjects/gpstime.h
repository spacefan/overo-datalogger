/**
 ******************************************************************************
 * @addtogroup UAVObjects UAVObject set for this firmware
 * @{
 * @addtogroup GPSTime GPSTime
 * @brief Contains the GPS time from @ref GPSModule.  Required to compute the world magnetic model correctly when setting the home location.
 *
 *
 * @file       gpstime.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     Tau Labs, http://taulabs.org, Copyright (C) 2012-2013
 * @brief      Include files for the GPSTime object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: gpstime.xml. 
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

#ifndef GPSTIME_H
#define GPSTIME_H

// Object constants
#define GPSTIME_OBJID 0xD4478084
#define GPSTIME_ISSINGLEINST 1
#define GPSTIME_ISSETTINGS 0
#define GPSTIME_NUMBYTES 7

// Generic interface functions
int32_t GPSTimeInitialize();
UAVObjHandle GPSTimeHandle();
void GPSTimeSetDefaults(UAVObjHandle obj, uint16_t instId);

// Object data
typedef struct {
    int16_t Year;
    int8_t Month;
    int8_t Day;
    int8_t Hour;
    int8_t Minute;
    int8_t Second;

} __attribute__((packed)) __attribute__((aligned(4))) GPSTimeData;

// Typesafe Object access functions
/**
 * @function GPSTimeGet(dataOut)
 * @brief Populate a GPSTimeData object
 * @param[out] dataOut 
 */
static inline int32_t GPSTimeGet(GPSTimeData *dataOut) { return UAVObjGetData(GPSTimeHandle(), dataOut); }

static inline int32_t GPSTimeSet(const GPSTimeData *dataIn) { return UAVObjSetData(GPSTimeHandle(), dataIn); }

static inline int32_t GPSTimeInstGet(uint16_t instId, GPSTimeData *dataOut) { return UAVObjGetInstanceData(GPSTimeHandle(), instId, dataOut); }

static inline int32_t GPSTimeInstSet(uint16_t instId, const GPSTimeData *dataIn) { return UAVObjSetInstanceData(GPSTimeHandle(), instId, dataIn); }

static inline int32_t GPSTimeConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(GPSTimeHandle(), queue, EV_MASK_ALL_UPDATES); }

static inline int32_t GPSTimeConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(GPSTimeHandle(), cb, EV_MASK_ALL_UPDATES); }

static inline uint16_t GPSTimeCreateInstance() { return UAVObjCreateInstance(GPSTimeHandle(), &GPSTimeSetDefaults); }

static inline void GPSTimeRequestUpdate() { UAVObjRequestUpdate(GPSTimeHandle()); }

static inline void GPSTimeRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(GPSTimeHandle(), instId); }

static inline void GPSTimeUpdated() { UAVObjUpdated(GPSTimeHandle()); }

static inline void GPSTimeInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(GPSTimeHandle(), instId); }

static inline int32_t GPSTimeGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(GPSTimeHandle(), dataOut); }

static inline int32_t GPSTimeSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(GPSTimeHandle(), dataIn); }

static inline int8_t GPSTimeReadOnly() { return UAVObjReadOnly(GPSTimeHandle()); }

static inline uint16_t GPSTimeGetNumInstances(){ return UAVObjGetNumInstances(GPSTimeHandle()); }

static inline uint32_t GPSTimeGetNumBytes(){ return UAVObjGetNumBytes(GPSTimeHandle()); }

// Field information
// Field Year information
// Field Month information
// Field Day information
// Field Hour information
// Field Minute information
// Field Second information


// set/Get functions
extern void GPSTimeYearSet( int16_t *NewYear );
extern void GPSTimeYearGet( int16_t *NewYear );
extern void GPSTimeMonthSet( int8_t *NewMonth );
extern void GPSTimeMonthGet( int8_t *NewMonth );
extern void GPSTimeDaySet( int8_t *NewDay );
extern void GPSTimeDayGet( int8_t *NewDay );
extern void GPSTimeHourSet( int8_t *NewHour );
extern void GPSTimeHourGet( int8_t *NewHour );
extern void GPSTimeMinuteSet( int8_t *NewMinute );
extern void GPSTimeMinuteGet( int8_t *NewMinute );
extern void GPSTimeSecondSet( int8_t *NewSecond );
extern void GPSTimeSecondGet( int8_t *NewSecond );


#endif // GPSTIME_H

/**
 * @}
 * @}
 */
