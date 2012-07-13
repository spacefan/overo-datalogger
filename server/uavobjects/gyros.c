/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup Gyros Gyros
 * @brief The gyro data.
 *
 * Autogenerated files and functions for Gyros Object
 * @{ 
 *
 * @file       gyros.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Implementation of the Gyros object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: gyros.xml. 
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
#include "gyros.h"

// Private variables
static UAVObjHandle handle = NULL;

/**
 * Initialize object.
 * \return 0 Success
 * \return -1 Failure to initialize or -2 for already initialized
 */
int32_t GyrosInitialize(void)
{
	// Don't set the handle to null if already registered
	if(UAVObjGetByID(GYROS_OBJID) != NULL)
		return -2;
	
	// Register object with the object manager
	handle = UAVObjRegister(GYROS_OBJID,
			GYROS_ISSINGLEINST, GYROS_ISSETTINGS, GYROS_NUMBYTES, &GyrosSetDefaults);

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
void GyrosSetDefaults(UAVObjHandle obj, uint16_t instId)
{
	GyrosData data;
	UAVObjMetadata metadata;

	// Initialize object fields to their default values
	UAVObjGetInstanceData(obj, instId, &data);
	memset(&data, 0, sizeof(GyrosData));

	UAVObjSetInstanceData(obj, instId, &data);

	// Initialize object metadata to their default values
	metadata.flags =
		ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
		ACCESS_READWRITE << UAVOBJ_GCS_ACCESS_SHIFT |
		0 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
		0 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
		UPDATEMODE_PERIODIC << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
		UPDATEMODE_MANUAL << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT;
	metadata.telemetryUpdatePeriod = 1000;
	metadata.gcsTelemetryUpdatePeriod = 0;
	metadata.loggingUpdatePeriod = 0;
	UAVObjSetMetadata(obj, &metadata);
}

/**
 * Get object handle
 */
UAVObjHandle GyrosHandle()
{
	return handle;
}

/**
 * Get/Set object Functions
 */
void GyrosxSet( float *Newx )
{
	UAVObjSetDataField(GyrosHandle(), (void*)Newx, offsetof( GyrosData, x), sizeof(float));
}
void GyrosxGet( float *Newx )
{
	UAVObjGetDataField(GyrosHandle(), (void*)Newx, offsetof( GyrosData, x), sizeof(float));
}
void GyrosySet( float *Newy )
{
	UAVObjSetDataField(GyrosHandle(), (void*)Newy, offsetof( GyrosData, y), sizeof(float));
}
void GyrosyGet( float *Newy )
{
	UAVObjGetDataField(GyrosHandle(), (void*)Newy, offsetof( GyrosData, y), sizeof(float));
}
void GyroszSet( float *Newz )
{
	UAVObjSetDataField(GyrosHandle(), (void*)Newz, offsetof( GyrosData, z), sizeof(float));
}
void GyroszGet( float *Newz )
{
	UAVObjGetDataField(GyrosHandle(), (void*)Newz, offsetof( GyrosData, z), sizeof(float));
}
void GyrostemperatureSet( float *Newtemperature )
{
	UAVObjSetDataField(GyrosHandle(), (void*)Newtemperature, offsetof( GyrosData, temperature), sizeof(float));
}
void GyrostemperatureGet( float *Newtemperature )
{
	UAVObjGetDataField(GyrosHandle(), (void*)Newtemperature, offsetof( GyrosData, temperature), sizeof(float));
}


/**
 * @}
 */

