/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup TxPIDSettings TxPIDSettings 
 * @brief Settings used by @ref TxPID optional module to tune PID settings using R/C transmitter
 *
 * Autogenerated files and functions for TxPIDSettings Object
 
 * @{ 
 *
 * @file       txpidsettings.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Implementation of the TxPIDSettings object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: txpidsettings.xml. 
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

#ifndef TXPIDSETTINGS_H
#define TXPIDSETTINGS_H

// Object constants
#define TXPIDSETTINGS_OBJID 0xB83E2D00
#define TXPIDSETTINGS_NAME "TxPIDSettings"
#define TXPIDSETTINGS_METANAME "TxPIDSettingsMeta"
#define TXPIDSETTINGS_ISSINGLEINST 1
#define TXPIDSETTINGS_ISSETTINGS 1
#define TXPIDSETTINGS_NUMBYTES sizeof(TxPIDSettingsData)

// Object access macros
/**
 * @function TxPIDSettingsGet(dataOut)
 * @brief Populate a TxPIDSettingsData object
 * @param[out] dataOut 
 */
#define TxPIDSettingsGet(dataOut) UAVObjGetData(TxPIDSettingsHandle(), dataOut)
#define TxPIDSettingsSet(dataIn) UAVObjSetData(TxPIDSettingsHandle(), dataIn)
#define TxPIDSettingsInstGet(instId, dataOut) UAVObjGetInstanceData(TxPIDSettingsHandle(), instId, dataOut)
#define TxPIDSettingsInstSet(instId, dataIn) UAVObjSetInstanceData(TxPIDSettingsHandle(), instId, dataIn)
#define TxPIDSettingsConnectQueue(queue) UAVObjConnectQueue(TxPIDSettingsHandle(), queue, EV_MASK_ALL_UPDATES)
#define TxPIDSettingsConnectCallback(cb) UAVObjConnectCallback(TxPIDSettingsHandle(), cb, EV_MASK_ALL_UPDATES)
#define TxPIDSettingsCreateInstance() UAVObjCreateInstance(TxPIDSettingsHandle(),&TxPIDSettingsSetDefaults)
#define TxPIDSettingsRequestUpdate() UAVObjRequestUpdate(TxPIDSettingsHandle())
#define TxPIDSettingsRequestInstUpdate(instId) UAVObjRequestInstanceUpdate(TxPIDSettingsHandle(), instId)
#define TxPIDSettingsUpdated() UAVObjUpdated(TxPIDSettingsHandle())
#define TxPIDSettingsInstUpdated(instId) UAVObjUpdated(TxPIDSettingsHandle(), instId)
#define TxPIDSettingsGetMetadata(dataOut) UAVObjGetMetadata(TxPIDSettingsHandle(), dataOut)
#define TxPIDSettingsSetMetadata(dataIn) UAVObjSetMetadata(TxPIDSettingsHandle(), dataIn)
#define TxPIDSettingsReadOnly() UAVObjReadOnly(TxPIDSettingsHandle())

// Object data
typedef struct {
    float ThrottleRange[2];
    float MinPID[3];
    float MaxPID[3];
    uint8_t UpdateMode;
    uint8_t Inputs[3];
    uint8_t PIDs[3];

} __attribute__((packed)) TxPIDSettingsData;

// Field information
// Field ThrottleRange information
/* Array element names for field ThrottleRange */
typedef enum { TXPIDSETTINGS_THROTTLERANGE_MIN=0, TXPIDSETTINGS_THROTTLERANGE_MAX=1 } TxPIDSettingsThrottleRangeElem;
/* Number of elements for field ThrottleRange */
#define TXPIDSETTINGS_THROTTLERANGE_NUMELEM 2
// Field MinPID information
/* Array element names for field MinPID */
typedef enum { TXPIDSETTINGS_MINPID_INSTANCE1=0, TXPIDSETTINGS_MINPID_INSTANCE2=1, TXPIDSETTINGS_MINPID_INSTANCE3=2 } TxPIDSettingsMinPIDElem;
/* Number of elements for field MinPID */
#define TXPIDSETTINGS_MINPID_NUMELEM 3
// Field MaxPID information
/* Array element names for field MaxPID */
typedef enum { TXPIDSETTINGS_MAXPID_INSTANCE1=0, TXPIDSETTINGS_MAXPID_INSTANCE2=1, TXPIDSETTINGS_MAXPID_INSTANCE3=2 } TxPIDSettingsMaxPIDElem;
/* Number of elements for field MaxPID */
#define TXPIDSETTINGS_MAXPID_NUMELEM 3
// Field UpdateMode information
/* Enumeration options for field UpdateMode */
typedef enum { TXPIDSETTINGS_UPDATEMODE_NEVER=0, TXPIDSETTINGS_UPDATEMODE_WHENARMED=1, TXPIDSETTINGS_UPDATEMODE_ALWAYS=2 } TxPIDSettingsUpdateModeOptions;
// Field Inputs information
/* Enumeration options for field Inputs */
typedef enum { TXPIDSETTINGS_INPUTS_THROTTLE=0, TXPIDSETTINGS_INPUTS_ACCESSORY0=1, TXPIDSETTINGS_INPUTS_ACCESSORY1=2, TXPIDSETTINGS_INPUTS_ACCESSORY2=3, TXPIDSETTINGS_INPUTS_ACCESSORY3=4, TXPIDSETTINGS_INPUTS_ACCESSORY4=5, TXPIDSETTINGS_INPUTS_ACCESSORY5=6 } TxPIDSettingsInputsOptions;
/* Array element names for field Inputs */
typedef enum { TXPIDSETTINGS_INPUTS_INSTANCE1=0, TXPIDSETTINGS_INPUTS_INSTANCE2=1, TXPIDSETTINGS_INPUTS_INSTANCE3=2 } TxPIDSettingsInputsElem;
/* Number of elements for field Inputs */
#define TXPIDSETTINGS_INPUTS_NUMELEM 3
// Field PIDs information
/* Enumeration options for field PIDs */
typedef enum { TXPIDSETTINGS_PIDS_DISABLED=0, TXPIDSETTINGS_PIDS_ROLLRATEKP=1, TXPIDSETTINGS_PIDS_PITCHRATEKP=2, TXPIDSETTINGS_PIDS_ROLLPITCHRATEKP=3, TXPIDSETTINGS_PIDS_YAWRATEKP=4, TXPIDSETTINGS_PIDS_ROLLRATEKI=5, TXPIDSETTINGS_PIDS_PITCHRATEKI=6, TXPIDSETTINGS_PIDS_ROLLPITCHRATEKI=7, TXPIDSETTINGS_PIDS_YAWRATEKI=8, TXPIDSETTINGS_PIDS_ROLLRATEKD=9, TXPIDSETTINGS_PIDS_PITCHRATEKD=10, TXPIDSETTINGS_PIDS_ROLLPITCHRATEKD=11, TXPIDSETTINGS_PIDS_YAWRATEKD=12, TXPIDSETTINGS_PIDS_ROLLRATEILIMIT=13, TXPIDSETTINGS_PIDS_PITCHRATEILIMIT=14, TXPIDSETTINGS_PIDS_ROLLPITCHRATEILIMIT=15, TXPIDSETTINGS_PIDS_YAWRATEILIMIT=16, TXPIDSETTINGS_PIDS_ROLLATTITUDEKP=17, TXPIDSETTINGS_PIDS_PITCHATTITUDEKP=18, TXPIDSETTINGS_PIDS_ROLLPITCHATTITUDEKP=19, TXPIDSETTINGS_PIDS_YAWATTITUDEKP=20, TXPIDSETTINGS_PIDS_ROLLATTITUDEKI=21, TXPIDSETTINGS_PIDS_PITCHATTITUDEKI=22, TXPIDSETTINGS_PIDS_ROLLPITCHATTITUDEKI=23, TXPIDSETTINGS_PIDS_YAWATTITUDEKI=24, TXPIDSETTINGS_PIDS_ROLLATTITUDEILIMIT=25, TXPIDSETTINGS_PIDS_PITCHATTITUDEILIMIT=26, TXPIDSETTINGS_PIDS_ROLLPITCHATTITUDEILIMIT=27, TXPIDSETTINGS_PIDS_YAWATTITUDEILIMIT=28 } TxPIDSettingsPIDsOptions;
/* Array element names for field PIDs */
typedef enum { TXPIDSETTINGS_PIDS_INSTANCE1=0, TXPIDSETTINGS_PIDS_INSTANCE2=1, TXPIDSETTINGS_PIDS_INSTANCE3=2 } TxPIDSettingsPIDsElem;
/* Number of elements for field PIDs */
#define TXPIDSETTINGS_PIDS_NUMELEM 3


// Generic interface functions
int32_t TxPIDSettingsInitialize();
UAVObjHandle TxPIDSettingsHandle();
void TxPIDSettingsSetDefaults(UAVObjHandle obj, uint16_t instId);

// set/Get functions
extern void TxPIDSettingsThrottleRangeSet( float *NewThrottleRange );
extern void TxPIDSettingsThrottleRangeGet( float *NewThrottleRange );
extern void TxPIDSettingsMinPIDSet( float *NewMinPID );
extern void TxPIDSettingsMinPIDGet( float *NewMinPID );
extern void TxPIDSettingsMaxPIDSet( float *NewMaxPID );
extern void TxPIDSettingsMaxPIDGet( float *NewMaxPID );
extern void TxPIDSettingsUpdateModeSet( uint8_t *NewUpdateMode );
extern void TxPIDSettingsUpdateModeGet( uint8_t *NewUpdateMode );
extern void TxPIDSettingsInputsSet( uint8_t *NewInputs );
extern void TxPIDSettingsInputsGet( uint8_t *NewInputs );
extern void TxPIDSettingsPIDsSet( uint8_t *NewPIDs );
extern void TxPIDSettingsPIDsGet( uint8_t *NewPIDs );


#endif // TXPIDSETTINGS_H

/**
 * @}
 * @}
 */
