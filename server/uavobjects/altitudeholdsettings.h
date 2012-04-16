/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup AltitudeHoldSettings AltitudeHoldSettings 
 * @brief Settings for the @ref AltitudeHold module
 *
 * Autogenerated files and functions for AltitudeHoldSettings Object
 
 * @{ 
 *
 * @file       altitudeholdsettings.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Implementation of the AltitudeHoldSettings object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: altitudeholdsettings.xml. 
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

#ifndef ALTITUDEHOLDSETTINGS_H
#define ALTITUDEHOLDSETTINGS_H

// Object constants
#define ALTITUDEHOLDSETTINGS_OBJID 0xFEC55B42
#define ALTITUDEHOLDSETTINGS_NAME "AltitudeHoldSettings"
#define ALTITUDEHOLDSETTINGS_METANAME "AltitudeHoldSettingsMeta"
#define ALTITUDEHOLDSETTINGS_ISSINGLEINST 1
#define ALTITUDEHOLDSETTINGS_ISSETTINGS 1
#define ALTITUDEHOLDSETTINGS_NUMBYTES sizeof(AltitudeHoldSettingsData)

// Object access macros
/**
 * @function AltitudeHoldSettingsGet(dataOut)
 * @brief Populate a AltitudeHoldSettingsData object
 * @param[out] dataOut 
 */
#define AltitudeHoldSettingsGet(dataOut) UAVObjGetData(AltitudeHoldSettingsHandle(), dataOut)
#define AltitudeHoldSettingsSet(dataIn) UAVObjSetData(AltitudeHoldSettingsHandle(), dataIn)
#define AltitudeHoldSettingsInstGet(instId, dataOut) UAVObjGetInstanceData(AltitudeHoldSettingsHandle(), instId, dataOut)
#define AltitudeHoldSettingsInstSet(instId, dataIn) UAVObjSetInstanceData(AltitudeHoldSettingsHandle(), instId, dataIn)
#define AltitudeHoldSettingsConnectQueue(queue) UAVObjConnectQueue(AltitudeHoldSettingsHandle(), queue, EV_MASK_ALL_UPDATES)
#define AltitudeHoldSettingsConnectCallback(cb) UAVObjConnectCallback(AltitudeHoldSettingsHandle(), cb, EV_MASK_ALL_UPDATES)
#define AltitudeHoldSettingsCreateInstance() UAVObjCreateInstance(AltitudeHoldSettingsHandle(),&AltitudeHoldSettingsSetDefaults)
#define AltitudeHoldSettingsRequestUpdate() UAVObjRequestUpdate(AltitudeHoldSettingsHandle())
#define AltitudeHoldSettingsRequestInstUpdate(instId) UAVObjRequestInstanceUpdate(AltitudeHoldSettingsHandle(), instId)
#define AltitudeHoldSettingsUpdated() UAVObjUpdated(AltitudeHoldSettingsHandle())
#define AltitudeHoldSettingsInstUpdated(instId) UAVObjUpdated(AltitudeHoldSettingsHandle(), instId)
#define AltitudeHoldSettingsGetMetadata(dataOut) UAVObjGetMetadata(AltitudeHoldSettingsHandle(), dataOut)
#define AltitudeHoldSettingsSetMetadata(dataIn) UAVObjSetMetadata(AltitudeHoldSettingsHandle(), dataIn)
#define AltitudeHoldSettingsReadOnly() UAVObjReadOnly(AltitudeHoldSettingsHandle())

// Object data
typedef struct {
    float Kp;
    float Ki;
    float Kd;
    float Ka;
    float PressureNoise;
    float AccelNoise;
    float AccelDrift;

} __attribute__((packed)) AltitudeHoldSettingsData;

// Field information
// Field Kp information
// Field Ki information
// Field Kd information
// Field Ka information
// Field PressureNoise information
// Field AccelNoise information
// Field AccelDrift information


// Generic interface functions
int32_t AltitudeHoldSettingsInitialize();
UAVObjHandle AltitudeHoldSettingsHandle();
void AltitudeHoldSettingsSetDefaults(UAVObjHandle obj, uint16_t instId);

// set/Get functions
extern void AltitudeHoldSettingsKpSet( float *NewKp );
extern void AltitudeHoldSettingsKpGet( float *NewKp );
extern void AltitudeHoldSettingsKiSet( float *NewKi );
extern void AltitudeHoldSettingsKiGet( float *NewKi );
extern void AltitudeHoldSettingsKdSet( float *NewKd );
extern void AltitudeHoldSettingsKdGet( float *NewKd );
extern void AltitudeHoldSettingsKaSet( float *NewKa );
extern void AltitudeHoldSettingsKaGet( float *NewKa );
extern void AltitudeHoldSettingsPressureNoiseSet( float *NewPressureNoise );
extern void AltitudeHoldSettingsPressureNoiseGet( float *NewPressureNoise );
extern void AltitudeHoldSettingsAccelNoiseSet( float *NewAccelNoise );
extern void AltitudeHoldSettingsAccelNoiseGet( float *NewAccelNoise );
extern void AltitudeHoldSettingsAccelDriftSet( float *NewAccelDrift );
extern void AltitudeHoldSettingsAccelDriftGet( float *NewAccelDrift );


#endif // ALTITUDEHOLDSETTINGS_H

/**
 * @}
 * @}
 */
