/**
 ******************************************************************************
 * @addtogroup UAVObjects UAVObject set for this firmware
 * @{
 * @addtogroup INSSettings INSSettings
 * @brief Settings for the INS to control the algorithm and what is updated
 *
 *
 * @file       inssettings.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     Tau Labs, http://taulabs.org, Copyright (C) 2012-2013
 * @brief      Include files for the INSSettings object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: inssettings.xml. 
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

#ifndef INSSETTINGS_H
#define INSSETTINGS_H

// Object constants
#define INSSETTINGS_OBJID 0x8CCFF752
#define INSSETTINGS_ISSINGLEINST 1
#define INSSETTINGS_ISSETTINGS 1
#define INSSETTINGS_NUMBYTES 57

// Generic interface functions
int32_t INSSettingsInitialize();
UAVObjHandle INSSettingsHandle();
void INSSettingsSetDefaults(UAVObjHandle obj, uint16_t instId);

// Object data
typedef struct {
    float accel_var[3];
    float gyro_var[3];
    float mag_var[3];
    float gps_var[3];
    float baro_var;
    float MagBiasNullingRate;
    uint8_t ComputeGyroBias;

} __attribute__((packed)) __attribute__((aligned(4))) INSSettingsData;

// Typesafe Object access functions
/**
 * @function INSSettingsGet(dataOut)
 * @brief Populate a INSSettingsData object
 * @param[out] dataOut 
 */
static inline int32_t INSSettingsGet(INSSettingsData *dataOut) { return UAVObjGetData(INSSettingsHandle(), dataOut); }

static inline int32_t INSSettingsSet(const INSSettingsData *dataIn) { return UAVObjSetData(INSSettingsHandle(), dataIn); }

static inline int32_t INSSettingsInstGet(uint16_t instId, INSSettingsData *dataOut) { return UAVObjGetInstanceData(INSSettingsHandle(), instId, dataOut); }

static inline int32_t INSSettingsInstSet(uint16_t instId, const INSSettingsData *dataIn) { return UAVObjSetInstanceData(INSSettingsHandle(), instId, dataIn); }

static inline int32_t INSSettingsConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(INSSettingsHandle(), queue, EV_MASK_ALL_UPDATES); }

static inline int32_t INSSettingsConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(INSSettingsHandle(), cb, EV_MASK_ALL_UPDATES); }

static inline uint16_t INSSettingsCreateInstance() { return UAVObjCreateInstance(INSSettingsHandle(), &INSSettingsSetDefaults); }

static inline void INSSettingsRequestUpdate() { UAVObjRequestUpdate(INSSettingsHandle()); }

static inline void INSSettingsRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(INSSettingsHandle(), instId); }

static inline void INSSettingsUpdated() { UAVObjUpdated(INSSettingsHandle()); }

static inline void INSSettingsInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(INSSettingsHandle(), instId); }

static inline int32_t INSSettingsGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(INSSettingsHandle(), dataOut); }

static inline int32_t INSSettingsSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(INSSettingsHandle(), dataIn); }

static inline int8_t INSSettingsReadOnly() { return UAVObjReadOnly(INSSettingsHandle()); }

static inline uint16_t INSSettingsGetNumInstances(){ return UAVObjGetNumInstances(INSSettingsHandle()); }

static inline uint32_t INSSettingsGetNumBytes(){ return UAVObjGetNumBytes(INSSettingsHandle()); }

// Field information
// Field accel_var information
/* Array element names for field accel_var */
typedef enum { INSSETTINGS_ACCEL_VAR_X=0, INSSETTINGS_ACCEL_VAR_Y=1, INSSETTINGS_ACCEL_VAR_Z=2 } __attribute__((packed)) INSSettingsaccel_varElem;
/* Number of elements for field accel_var */
#define INSSETTINGS_ACCEL_VAR_NUMELEM 3
// Field gyro_var information
/* Array element names for field gyro_var */
typedef enum { INSSETTINGS_GYRO_VAR_X=0, INSSETTINGS_GYRO_VAR_Y=1, INSSETTINGS_GYRO_VAR_Z=2 } __attribute__((packed)) INSSettingsgyro_varElem;
/* Number of elements for field gyro_var */
#define INSSETTINGS_GYRO_VAR_NUMELEM 3
// Field mag_var information
/* Array element names for field mag_var */
typedef enum { INSSETTINGS_MAG_VAR_X=0, INSSETTINGS_MAG_VAR_Y=1, INSSETTINGS_MAG_VAR_Z=2 } __attribute__((packed)) INSSettingsmag_varElem;
/* Number of elements for field mag_var */
#define INSSETTINGS_MAG_VAR_NUMELEM 3
// Field gps_var information
/* Array element names for field gps_var */
typedef enum { INSSETTINGS_GPS_VAR_POS=0, INSSETTINGS_GPS_VAR_VEL=1, INSSETTINGS_GPS_VAR_VERTPOS=2 } __attribute__((packed)) INSSettingsgps_varElem;
/* Number of elements for field gps_var */
#define INSSETTINGS_GPS_VAR_NUMELEM 3
// Field baro_var information
// Field MagBiasNullingRate information
// Field ComputeGyroBias information
/* Enumeration options for field ComputeGyroBias */
typedef enum { INSSETTINGS_COMPUTEGYROBIAS_FALSE=0, INSSETTINGS_COMPUTEGYROBIAS_TRUE=1 }  __attribute__((packed)) INSSettingsComputeGyroBiasOptions;


// set/Get functions
extern void INSSettingsaccel_varSet( float *Newaccel_var );
extern void INSSettingsaccel_varGet( float *Newaccel_var );
extern void INSSettingsgyro_varSet( float *Newgyro_var );
extern void INSSettingsgyro_varGet( float *Newgyro_var );
extern void INSSettingsmag_varSet( float *Newmag_var );
extern void INSSettingsmag_varGet( float *Newmag_var );
extern void INSSettingsgps_varSet( float *Newgps_var );
extern void INSSettingsgps_varGet( float *Newgps_var );
extern void INSSettingsbaro_varSet( float *Newbaro_var );
extern void INSSettingsbaro_varGet( float *Newbaro_var );
extern void INSSettingsMagBiasNullingRateSet( float *NewMagBiasNullingRate );
extern void INSSettingsMagBiasNullingRateGet( float *NewMagBiasNullingRate );
extern void INSSettingsComputeGyroBiasSet( uint8_t *NewComputeGyroBias );
extern void INSSettingsComputeGyroBiasGet( uint8_t *NewComputeGyroBias );


#endif // INSSETTINGS_H

/**
 * @}
 * @}
 */
