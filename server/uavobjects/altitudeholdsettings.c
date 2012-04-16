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
 * @file       altitudeholdsettings.c
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

#include "openpilot.h"
#include "altitudeholdsettings.h"

// Private variables
static UAVObjHandle handle = NULL;

/**
 * Initialize object.
 * \return 0 Success
 * \return -1 Failure to initialize or -2 for already initialized
 */
int32_t AltitudeHoldSettingsInitialize(void)
{
	// Don't set the handle to null if already registered
	if(UAVObjGetByID(ALTITUDEHOLDSETTINGS_OBJID) != NULL)
		return -2;
	
	// Register object with the object manager
	handle = UAVObjRegister(ALTITUDEHOLDSETTINGS_OBJID, ALTITUDEHOLDSETTINGS_NAME, ALTITUDEHOLDSETTINGS_METANAME, 0,
			ALTITUDEHOLDSETTINGS_ISSINGLEINST, ALTITUDEHOLDSETTINGS_ISSETTINGS, ALTITUDEHOLDSETTINGS_NUMBYTES, &AltitudeHoldSettingsSetDefaults);

	// Done
	if (handle != 0)
	{
		return 0;
	}
	else
	{
		return -1;
	}
}

/**
 * Initialize object fields and metadata with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void AltitudeHoldSettingsSetDefaults(UAVObjHandle obj, uint16_t instId)
{
	AltitudeHoldSettingsData data;
	UAVObjMetadata metadata;

	// Initialize object fields to their default values
	UAVObjGetInstanceData(obj, instId, &data);
	memset(&data, 0, sizeof(AltitudeHoldSettingsData));
	data.Kp = 0.025;
	data.Ki = 0.025;
	data.Kd = 0.25;
	data.Ka = 0;
	data.PressureNoise = 0.01;
	data.AccelNoise = 10;
	data.AccelDrift = 0.001;

	UAVObjSetInstanceData(obj, instId, &data);

	// Initialize object metadata to their default values
	metadata.access = ACCESS_READWRITE;
	metadata.gcsAccess = ACCESS_READWRITE;
	metadata.telemetryAcked = 1;
	metadata.telemetryUpdateMode = UPDATEMODE_ONCHANGE;
	metadata.telemetryUpdatePeriod = 0;
	metadata.gcsTelemetryAcked = 1;
	metadata.gcsTelemetryUpdateMode = UPDATEMODE_ONCHANGE;
	metadata.gcsTelemetryUpdatePeriod = 0;
	metadata.loggingUpdateMode = UPDATEMODE_NEVER;
	metadata.loggingUpdatePeriod = 0;
	UAVObjSetMetadata(obj, &metadata);
}

/**
 * Get object handle
 */
UAVObjHandle AltitudeHoldSettingsHandle()
{
	return handle;
}

/**
 * Get/Set object Functions
 */
void AltitudeHoldSettingsKpSet( float *NewKp )
{
	UAVObjSetDataField(AltitudeHoldSettingsHandle(), (void*)NewKp, offsetof( AltitudeHoldSettingsData, Kp), sizeof(float));
}
void AltitudeHoldSettingsKpGet( float *NewKp )
{
	UAVObjGetDataField(AltitudeHoldSettingsHandle(), (void*)NewKp, offsetof( AltitudeHoldSettingsData, Kp), sizeof(float));
}
void AltitudeHoldSettingsKiSet( float *NewKi )
{
	UAVObjSetDataField(AltitudeHoldSettingsHandle(), (void*)NewKi, offsetof( AltitudeHoldSettingsData, Ki), sizeof(float));
}
void AltitudeHoldSettingsKiGet( float *NewKi )
{
	UAVObjGetDataField(AltitudeHoldSettingsHandle(), (void*)NewKi, offsetof( AltitudeHoldSettingsData, Ki), sizeof(float));
}
void AltitudeHoldSettingsKdSet( float *NewKd )
{
	UAVObjSetDataField(AltitudeHoldSettingsHandle(), (void*)NewKd, offsetof( AltitudeHoldSettingsData, Kd), sizeof(float));
}
void AltitudeHoldSettingsKdGet( float *NewKd )
{
	UAVObjGetDataField(AltitudeHoldSettingsHandle(), (void*)NewKd, offsetof( AltitudeHoldSettingsData, Kd), sizeof(float));
}
void AltitudeHoldSettingsKaSet( float *NewKa )
{
	UAVObjSetDataField(AltitudeHoldSettingsHandle(), (void*)NewKa, offsetof( AltitudeHoldSettingsData, Ka), sizeof(float));
}
void AltitudeHoldSettingsKaGet( float *NewKa )
{
	UAVObjGetDataField(AltitudeHoldSettingsHandle(), (void*)NewKa, offsetof( AltitudeHoldSettingsData, Ka), sizeof(float));
}
void AltitudeHoldSettingsPressureNoiseSet( float *NewPressureNoise )
{
	UAVObjSetDataField(AltitudeHoldSettingsHandle(), (void*)NewPressureNoise, offsetof( AltitudeHoldSettingsData, PressureNoise), sizeof(float));
}
void AltitudeHoldSettingsPressureNoiseGet( float *NewPressureNoise )
{
	UAVObjGetDataField(AltitudeHoldSettingsHandle(), (void*)NewPressureNoise, offsetof( AltitudeHoldSettingsData, PressureNoise), sizeof(float));
}
void AltitudeHoldSettingsAccelNoiseSet( float *NewAccelNoise )
{
	UAVObjSetDataField(AltitudeHoldSettingsHandle(), (void*)NewAccelNoise, offsetof( AltitudeHoldSettingsData, AccelNoise), sizeof(float));
}
void AltitudeHoldSettingsAccelNoiseGet( float *NewAccelNoise )
{
	UAVObjGetDataField(AltitudeHoldSettingsHandle(), (void*)NewAccelNoise, offsetof( AltitudeHoldSettingsData, AccelNoise), sizeof(float));
}
void AltitudeHoldSettingsAccelDriftSet( float *NewAccelDrift )
{
	UAVObjSetDataField(AltitudeHoldSettingsHandle(), (void*)NewAccelDrift, offsetof( AltitudeHoldSettingsData, AccelDrift), sizeof(float));
}
void AltitudeHoldSettingsAccelDriftGet( float *NewAccelDrift )
{
	UAVObjGetDataField(AltitudeHoldSettingsHandle(), (void*)NewAccelDrift, offsetof( AltitudeHoldSettingsData, AccelDrift), sizeof(float));
}


/**
 * @}
 */

