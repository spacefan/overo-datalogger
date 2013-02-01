/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup InertialSensorSettings InertialSensorSettings
 * @brief Settings for the @ref Attitude module
 *
 * Autogenerated files and functions for InertialSensorSettings Object
 * @{ 
 *
 * @file       inertialsensorsettings.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Implementation of the InertialSensorSettings object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: inertialsensorsettings.xml. 
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
#include "inertialsensorsettings.h"

// Private variables
static UAVObjHandle handle = NULL;

/**
 * Initialize object.
 * \return 0 Success
 * \return -1 Failure to initialize or -2 for already initialized
 */
int32_t InertialSensorSettingsInitialize(void)
{
	// Don't set the handle to null if already registered
	if(UAVObjGetByID(INERTIALSENSORSETTINGS_OBJID) != NULL)
		return -2;
	
	// Register object with the object manager
	handle = UAVObjRegister(INERTIALSENSORSETTINGS_OBJID,
			INERTIALSENSORSETTINGS_ISSINGLEINST, INERTIALSENSORSETTINGS_ISSETTINGS, INERTIALSENSORSETTINGS_NUMBYTES, &InertialSensorSettingsSetDefaults);

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
void InertialSensorSettingsSetDefaults(UAVObjHandle obj, uint16_t instId)
{
	InertialSensorSettingsData data;
	UAVObjMetadata metadata;

	// Initialize object fields to their default values
	UAVObjGetInstanceData(obj, instId, &data);
	memset(&data, 0, sizeof(InertialSensorSettingsData));
	data.AccelBias[0] = 0;
	data.AccelBias[1] = 0;
	data.AccelBias[2] = 0;
	data.AccelScale[0] = 1;
	data.AccelScale[1] = 1;
	data.AccelScale[2] = 1;
	data.InitialGyroBias[0] = 0;
	data.InitialGyroBias[1] = 0;
	data.InitialGyroBias[2] = 0;
	data.GyroScale[0] = 1;
	data.GyroScale[1] = 1;
	data.GyroScale[2] = 1;
	data.GyroTempCoeff[0] = 1;
	data.GyroTempCoeff[1] = 1;
	data.GyroTempCoeff[2] = 1;

	UAVObjSetInstanceData(obj, instId, &data);

	// Initialize object metadata to their default values
	metadata.flags =
		ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
		ACCESS_READWRITE << UAVOBJ_GCS_ACCESS_SHIFT |
		1 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
		1 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
		UPDATEMODE_ONCHANGE << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
		UPDATEMODE_ONCHANGE << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT;
	metadata.telemetryUpdatePeriod = 0;
	metadata.gcsTelemetryUpdatePeriod = 0;
	metadata.loggingUpdatePeriod = 0;
	UAVObjSetMetadata(obj, &metadata);
}

/**
 * Get object handle
 */
UAVObjHandle InertialSensorSettingsHandle()
{
	return handle;
}

/**
 * Get/Set object Functions
 */
void InertialSensorSettingsAccelBiasSet( float *NewAccelBias )
{
	UAVObjSetDataField(InertialSensorSettingsHandle(), (void*)NewAccelBias, offsetof( InertialSensorSettingsData, AccelBias), 3*sizeof(float));
}
void InertialSensorSettingsAccelBiasGet( float *NewAccelBias )
{
	UAVObjGetDataField(InertialSensorSettingsHandle(), (void*)NewAccelBias, offsetof( InertialSensorSettingsData, AccelBias), 3*sizeof(float));
}
void InertialSensorSettingsAccelScaleSet( float *NewAccelScale )
{
	UAVObjSetDataField(InertialSensorSettingsHandle(), (void*)NewAccelScale, offsetof( InertialSensorSettingsData, AccelScale), 3*sizeof(float));
}
void InertialSensorSettingsAccelScaleGet( float *NewAccelScale )
{
	UAVObjGetDataField(InertialSensorSettingsHandle(), (void*)NewAccelScale, offsetof( InertialSensorSettingsData, AccelScale), 3*sizeof(float));
}
void InertialSensorSettingsInitialGyroBiasSet( float *NewInitialGyroBias )
{
	UAVObjSetDataField(InertialSensorSettingsHandle(), (void*)NewInitialGyroBias, offsetof( InertialSensorSettingsData, InitialGyroBias), 3*sizeof(float));
}
void InertialSensorSettingsInitialGyroBiasGet( float *NewInitialGyroBias )
{
	UAVObjGetDataField(InertialSensorSettingsHandle(), (void*)NewInitialGyroBias, offsetof( InertialSensorSettingsData, InitialGyroBias), 3*sizeof(float));
}
void InertialSensorSettingsGyroScaleSet( float *NewGyroScale )
{
	UAVObjSetDataField(InertialSensorSettingsHandle(), (void*)NewGyroScale, offsetof( InertialSensorSettingsData, GyroScale), 3*sizeof(float));
}
void InertialSensorSettingsGyroScaleGet( float *NewGyroScale )
{
	UAVObjGetDataField(InertialSensorSettingsHandle(), (void*)NewGyroScale, offsetof( InertialSensorSettingsData, GyroScale), 3*sizeof(float));
}
void InertialSensorSettingsGyroTempCoeffSet( float *NewGyroTempCoeff )
{
	UAVObjSetDataField(InertialSensorSettingsHandle(), (void*)NewGyroTempCoeff, offsetof( InertialSensorSettingsData, GyroTempCoeff), 3*sizeof(float));
}
void InertialSensorSettingsGyroTempCoeffGet( float *NewGyroTempCoeff )
{
	UAVObjGetDataField(InertialSensorSettingsHandle(), (void*)NewGyroTempCoeff, offsetof( InertialSensorSettingsData, GyroTempCoeff), 3*sizeof(float));
}


/**
 * @}
 */
