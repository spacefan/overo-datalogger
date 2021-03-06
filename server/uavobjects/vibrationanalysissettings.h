/**
 ******************************************************************************
 * @addtogroup UAVObjects UAVObject set for this firmware
 * @{
 * @addtogroup VibrationAnalysisSettings VibrationAnalysisSettings
 * @brief Settings for the @ref VibrationTest Module
 *
 *
 * @file       vibrationanalysissettings.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     Tau Labs, http://taulabs.org, Copyright (C) 2012-2015
 * @brief      Include files for the VibrationAnalysisSettings object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: vibrationanalysissettings.xml. 
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

#ifndef VIBRATIONANALYSISSETTINGS_H
#define VIBRATIONANALYSISSETTINGS_H

#include "pios_queue.h"
#include "uavoversion.h"



// Object constants
#define VIBRATIONANALYSISSETTINGS_OBJID 0x5C5C96B6
#define VIBRATIONANALYSISSETTINGS_ISSINGLEINST 1
#define VIBRATIONANALYSISSETTINGS_ISSETTINGS 1
#define VIBRATIONANALYSISSETTINGS_NUMBYTES 4

// Generic interface functions
int32_t VibrationAnalysisSettingsInitialize();
UAVObjHandle VibrationAnalysisSettingsHandle();
void VibrationAnalysisSettingsSetDefaults(UAVObjHandle obj, uint16_t instId);

// Object data
typedef struct {
    uint16_t SampleRate;
    uint8_t FFTWindowSize;
    uint8_t TestingStatus;

} __attribute__((packed)) __attribute__((aligned(4))) VibrationAnalysisSettingsData;

// Typesafe Object access functions
/**
 * @function VibrationAnalysisSettingsGet(dataOut)
 * @brief Populate a VibrationAnalysisSettingsData object
 * @param[out] dataOut 
 */
static inline int32_t VibrationAnalysisSettingsGet(VibrationAnalysisSettingsData *dataOut) { return UAVObjGetData(VibrationAnalysisSettingsHandle(), dataOut); }

static inline int32_t VibrationAnalysisSettingsSet(const VibrationAnalysisSettingsData *dataIn) { return UAVObjSetData(VibrationAnalysisSettingsHandle(), dataIn); }

static inline int32_t VibrationAnalysisSettingsInstGet(uint16_t instId, VibrationAnalysisSettingsData *dataOut) { return UAVObjGetInstanceData(VibrationAnalysisSettingsHandle(), instId, dataOut); }

static inline int32_t VibrationAnalysisSettingsInstSet(uint16_t instId, const VibrationAnalysisSettingsData *dataIn) { return UAVObjSetInstanceData(VibrationAnalysisSettingsHandle(), instId, dataIn); }

static inline int32_t VibrationAnalysisSettingsConnectQueue(struct pios_queue *queue) { return UAVObjConnectQueue(VibrationAnalysisSettingsHandle(), queue, EV_MASK_ALL_UPDATES); }

static inline int32_t VibrationAnalysisSettingsConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(VibrationAnalysisSettingsHandle(), cb, EV_MASK_ALL_UPDATES); }

static inline uint16_t VibrationAnalysisSettingsCreateInstance() { return UAVObjCreateInstance(VibrationAnalysisSettingsHandle(), &VibrationAnalysisSettingsSetDefaults); }

static inline void VibrationAnalysisSettingsRequestUpdate() { UAVObjRequestUpdate(VibrationAnalysisSettingsHandle()); }

static inline void VibrationAnalysisSettingsRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(VibrationAnalysisSettingsHandle(), instId); }

static inline void VibrationAnalysisSettingsUpdated() { UAVObjUpdated(VibrationAnalysisSettingsHandle()); }

static inline void VibrationAnalysisSettingsInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(VibrationAnalysisSettingsHandle(), instId); }

static inline int32_t VibrationAnalysisSettingsGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(VibrationAnalysisSettingsHandle(), dataOut); }

static inline int32_t VibrationAnalysisSettingsSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(VibrationAnalysisSettingsHandle(), dataIn); }

static inline int8_t VibrationAnalysisSettingsReadOnly() { return UAVObjReadOnly(VibrationAnalysisSettingsHandle()); }

static inline uint16_t VibrationAnalysisSettingsGetNumInstances(){ return UAVObjGetNumInstances(VibrationAnalysisSettingsHandle()); }

static inline uint32_t VibrationAnalysisSettingsGetNumBytes(){ return UAVObjGetNumBytes(VibrationAnalysisSettingsHandle()); }

// Field information
// Field SampleRate information
// Field FFTWindowSize information
/* Enumeration options for field FFTWindowSize */
typedef enum { VIBRATIONANALYSISSETTINGS_FFTWINDOWSIZE_16=0, VIBRATIONANALYSISSETTINGS_FFTWINDOWSIZE_64=1, VIBRATIONANALYSISSETTINGS_FFTWINDOWSIZE_256=2, VIBRATIONANALYSISSETTINGS_FFTWINDOWSIZE_1024=3 }  __attribute__((packed)) VibrationAnalysisSettingsFFTWindowSizeOptions;
/* Max value of any option in topmost parent FFTWindowSize of field FFTWindowSize */
#define VIBRATIONANALYSISSETTINGS_FFTWINDOWSIZE_GLOBAL_MAXOPTVAL 3
/* Max value of any option in field FFTWindowSize */
#define VIBRATIONANALYSISSETTINGS_FFTWINDOWSIZE_MAXOPTVAL 3
/* Ensure field FFTWindowSize contains valid data */
static inline bool VibrationAnalysisSettingsFFTWindowSizeIsValid( uint8_t CurrentFFTWindowSize ) { return CurrentFFTWindowSize < VIBRATIONANALYSISSETTINGS_FFTWINDOWSIZE_MAXOPTVAL; }
// Field TestingStatus information
/* Enumeration options for field TestingStatus */
typedef enum { VIBRATIONANALYSISSETTINGS_TESTINGSTATUS_OFF=0, VIBRATIONANALYSISSETTINGS_TESTINGSTATUS_ON=1 }  __attribute__((packed)) VibrationAnalysisSettingsTestingStatusOptions;
/* Max value of any option in topmost parent TestingStatus of field TestingStatus */
#define VIBRATIONANALYSISSETTINGS_TESTINGSTATUS_GLOBAL_MAXOPTVAL 1
/* Max value of any option in field TestingStatus */
#define VIBRATIONANALYSISSETTINGS_TESTINGSTATUS_MAXOPTVAL 1
/* Ensure field TestingStatus contains valid data */
static inline bool VibrationAnalysisSettingsTestingStatusIsValid( uint8_t CurrentTestingStatus ) { return CurrentTestingStatus < VIBRATIONANALYSISSETTINGS_TESTINGSTATUS_MAXOPTVAL; }


// set/Get functions
extern void VibrationAnalysisSettingsSampleRateSet( uint16_t *NewSampleRate );
extern void VibrationAnalysisSettingsSampleRateGet( uint16_t *NewSampleRate );
extern void VibrationAnalysisSettingsFFTWindowSizeSet( uint8_t *NewFFTWindowSize );
extern void VibrationAnalysisSettingsFFTWindowSizeGet( uint8_t *NewFFTWindowSize );
extern void VibrationAnalysisSettingsTestingStatusSet( uint8_t *NewTestingStatus );
extern void VibrationAnalysisSettingsTestingStatusGet( uint8_t *NewTestingStatus );


#endif // VIBRATIONANALYSISSETTINGS_H

/**
 * @}
 * @}
 */
