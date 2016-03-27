/**
 ******************************************************************************
 * @addtogroup UAVObjects UAVObject set for this firmware
 * @{
 * @addtogroup LoggingSettings LoggingSettings
 * @brief Settings for the logging module
 *
 *
 * @file       loggingsettings.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     Tau Labs, http://taulabs.org, Copyright (C) 2012-2015
 * @brief      Include files for the LoggingSettings object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: loggingsettings.xml. 
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

#ifndef LOGGINGSETTINGS_H
#define LOGGINGSETTINGS_H

#include "pios_queue.h"
#include "uavoversion.h"



// Object constants
#define LOGGINGSETTINGS_OBJID 0xFF46F72C
#define LOGGINGSETTINGS_ISSINGLEINST 1
#define LOGGINGSETTINGS_ISSETTINGS 1
#define LOGGINGSETTINGS_NUMBYTES 4

// Generic interface functions
int32_t LoggingSettingsInitialize();
UAVObjHandle LoggingSettingsHandle();
void LoggingSettingsSetDefaults(UAVObjHandle obj, uint16_t instId);

// Object data
typedef struct {
    uint8_t LogBehavior;
    uint8_t LogSettingsOnStart;
    uint8_t MaxLogRate;
    uint8_t Profile;

} __attribute__((packed)) __attribute__((aligned(4))) LoggingSettingsData;

// Typesafe Object access functions
/**
 * @function LoggingSettingsGet(dataOut)
 * @brief Populate a LoggingSettingsData object
 * @param[out] dataOut 
 */
static inline int32_t LoggingSettingsGet(LoggingSettingsData *dataOut) { return UAVObjGetData(LoggingSettingsHandle(), dataOut); }

static inline int32_t LoggingSettingsSet(const LoggingSettingsData *dataIn) { return UAVObjSetData(LoggingSettingsHandle(), dataIn); }

static inline int32_t LoggingSettingsInstGet(uint16_t instId, LoggingSettingsData *dataOut) { return UAVObjGetInstanceData(LoggingSettingsHandle(), instId, dataOut); }

static inline int32_t LoggingSettingsInstSet(uint16_t instId, const LoggingSettingsData *dataIn) { return UAVObjSetInstanceData(LoggingSettingsHandle(), instId, dataIn); }

static inline int32_t LoggingSettingsConnectQueue(struct pios_queue *queue) { return UAVObjConnectQueue(LoggingSettingsHandle(), queue, EV_MASK_ALL_UPDATES); }

static inline int32_t LoggingSettingsConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(LoggingSettingsHandle(), cb, EV_MASK_ALL_UPDATES); }

static inline uint16_t LoggingSettingsCreateInstance() { return UAVObjCreateInstance(LoggingSettingsHandle(), &LoggingSettingsSetDefaults); }

static inline void LoggingSettingsRequestUpdate() { UAVObjRequestUpdate(LoggingSettingsHandle()); }

static inline void LoggingSettingsRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(LoggingSettingsHandle(), instId); }

static inline void LoggingSettingsUpdated() { UAVObjUpdated(LoggingSettingsHandle()); }

static inline void LoggingSettingsInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(LoggingSettingsHandle(), instId); }

static inline int32_t LoggingSettingsGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(LoggingSettingsHandle(), dataOut); }

static inline int32_t LoggingSettingsSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(LoggingSettingsHandle(), dataIn); }

static inline int8_t LoggingSettingsReadOnly() { return UAVObjReadOnly(LoggingSettingsHandle()); }

static inline uint16_t LoggingSettingsGetNumInstances(){ return UAVObjGetNumInstances(LoggingSettingsHandle()); }

static inline uint32_t LoggingSettingsGetNumBytes(){ return UAVObjGetNumBytes(LoggingSettingsHandle()); }

// Field information
// Field LogBehavior information
/* Enumeration options for field LogBehavior */
typedef enum { LOGGINGSETTINGS_LOGBEHAVIOR_LOGONSTART=0, LOGGINGSETTINGS_LOGBEHAVIOR_LOGONARM=1, LOGGINGSETTINGS_LOGBEHAVIOR_LOGOFF=2 }  __attribute__((packed)) LoggingSettingsLogBehaviorOptions;
/* Max value of any option in topmost parent LogBehavior of field LogBehavior */
#define LOGGINGSETTINGS_LOGBEHAVIOR_GLOBAL_MAXOPTVAL 2
/* Max value of any option in field LogBehavior */
#define LOGGINGSETTINGS_LOGBEHAVIOR_MAXOPTVAL 2
/* Ensure field LogBehavior contains valid data */
static inline bool LoggingSettingsLogBehaviorIsValid( uint8_t CurrentLogBehavior ) { return CurrentLogBehavior < LOGGINGSETTINGS_LOGBEHAVIOR_MAXOPTVAL; }
// Field LogSettingsOnStart information
/* Enumeration options for field LogSettingsOnStart */
typedef enum { LOGGINGSETTINGS_LOGSETTINGSONSTART_TRUE=0, LOGGINGSETTINGS_LOGSETTINGSONSTART_FALSE=1 }  __attribute__((packed)) LoggingSettingsLogSettingsOnStartOptions;
/* Max value of any option in topmost parent LogSettingsOnStart of field LogSettingsOnStart */
#define LOGGINGSETTINGS_LOGSETTINGSONSTART_GLOBAL_MAXOPTVAL 1
/* Max value of any option in field LogSettingsOnStart */
#define LOGGINGSETTINGS_LOGSETTINGSONSTART_MAXOPTVAL 1
/* Ensure field LogSettingsOnStart contains valid data */
static inline bool LoggingSettingsLogSettingsOnStartIsValid( uint8_t CurrentLogSettingsOnStart ) { return CurrentLogSettingsOnStart < LOGGINGSETTINGS_LOGSETTINGSONSTART_MAXOPTVAL; }
// Field MaxLogRate information
/* Enumeration options for field MaxLogRate */
typedef enum { LOGGINGSETTINGS_MAXLOGRATE_5=0, LOGGINGSETTINGS_MAXLOGRATE_10=1, LOGGINGSETTINGS_MAXLOGRATE_25=2, LOGGINGSETTINGS_MAXLOGRATE_50=3, LOGGINGSETTINGS_MAXLOGRATE_100=4, LOGGINGSETTINGS_MAXLOGRATE_250=5, LOGGINGSETTINGS_MAXLOGRATE_500=6, LOGGINGSETTINGS_MAXLOGRATE_1000=7 }  __attribute__((packed)) LoggingSettingsMaxLogRateOptions;
/* Max value of any option in topmost parent MaxLogRate of field MaxLogRate */
#define LOGGINGSETTINGS_MAXLOGRATE_GLOBAL_MAXOPTVAL 7
/* Max value of any option in field MaxLogRate */
#define LOGGINGSETTINGS_MAXLOGRATE_MAXOPTVAL 7
/* Ensure field MaxLogRate contains valid data */
static inline bool LoggingSettingsMaxLogRateIsValid( uint8_t CurrentMaxLogRate ) { return CurrentMaxLogRate < LOGGINGSETTINGS_MAXLOGRATE_MAXOPTVAL; }
// Field Profile information
/* Enumeration options for field Profile */
typedef enum { LOGGINGSETTINGS_PROFILE_DEFAULT=0, LOGGINGSETTINGS_PROFILE_CUSTOM=1 }  __attribute__((packed)) LoggingSettingsProfileOptions;
/* Max value of any option in topmost parent Profile of field Profile */
#define LOGGINGSETTINGS_PROFILE_GLOBAL_MAXOPTVAL 1
/* Max value of any option in field Profile */
#define LOGGINGSETTINGS_PROFILE_MAXOPTVAL 1
/* Ensure field Profile contains valid data */
static inline bool LoggingSettingsProfileIsValid( uint8_t CurrentProfile ) { return CurrentProfile < LOGGINGSETTINGS_PROFILE_MAXOPTVAL; }


// set/Get functions
extern void LoggingSettingsLogBehaviorSet( uint8_t *NewLogBehavior );
extern void LoggingSettingsLogBehaviorGet( uint8_t *NewLogBehavior );
extern void LoggingSettingsLogSettingsOnStartSet( uint8_t *NewLogSettingsOnStart );
extern void LoggingSettingsLogSettingsOnStartGet( uint8_t *NewLogSettingsOnStart );
extern void LoggingSettingsMaxLogRateSet( uint8_t *NewMaxLogRate );
extern void LoggingSettingsMaxLogRateGet( uint8_t *NewMaxLogRate );
extern void LoggingSettingsProfileSet( uint8_t *NewProfile );
extern void LoggingSettingsProfileGet( uint8_t *NewProfile );


#endif // LOGGINGSETTINGS_H

/**
 * @}
 * @}
 */