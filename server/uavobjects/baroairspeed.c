/**
 ******************************************************************************
 * @addtogroup TauLabsCore Tau Labs Core components
 * @{
 * @addtogroup UAVObjects UAVObject set for this firmware
 * @{
 *
 * @file       baroairspeed.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     Tau Labs, http://taulabs.org, Copyright (C) 2012-2013
 * @brief      Implementation of the BaroAirspeed object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: baroairspeed.xml. 
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
#include "baroairspeed.h"

// Private variables
static UAVObjHandle handle = NULL;

/**
 * Initialize object.
 * \return 0 Success
 * \return -1 Failure to initialize or -2 for already initialized
 */
int32_t BaroAirspeedInitialize(void)
{
	// Don't set the handle to null if already registered
	if(UAVObjGetByID(BAROAIRSPEED_OBJID) != NULL)
		return -2;
	
	// Register object with the object manager
	handle = UAVObjRegister(BAROAIRSPEED_OBJID,
			BAROAIRSPEED_ISSINGLEINST, BAROAIRSPEED_ISSETTINGS, BAROAIRSPEED_NUMBYTES, &BaroAirspeedSetDefaults);

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
void BaroAirspeedSetDefaults(UAVObjHandle obj, uint16_t instId)
{
	BaroAirspeedData data;
	UAVObjMetadata metadata;

	// Initialize object fields to their default values
	UAVObjGetInstanceData(obj, instId, &data);
	memset(&data, 0, sizeof(BaroAirspeedData));

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
UAVObjHandle BaroAirspeedHandle()
{
	return handle;
}

/**
 * Get/Set object Functions
 */
void BaroAirspeedCalibratedAirspeedSet( float *NewCalibratedAirspeed )
{
	UAVObjSetDataField(BaroAirspeedHandle(), (void*)NewCalibratedAirspeed, offsetof( BaroAirspeedData, CalibratedAirspeed), sizeof(float));
}
void BaroAirspeedCalibratedAirspeedGet( float *NewCalibratedAirspeed )
{
	UAVObjGetDataField(BaroAirspeedHandle(), (void*)NewCalibratedAirspeed, offsetof( BaroAirspeedData, CalibratedAirspeed), sizeof(float));
}
void BaroAirspeedGPSAirspeedSet( float *NewGPSAirspeed )
{
	UAVObjSetDataField(BaroAirspeedHandle(), (void*)NewGPSAirspeed, offsetof( BaroAirspeedData, GPSAirspeed), sizeof(float));
}
void BaroAirspeedGPSAirspeedGet( float *NewGPSAirspeed )
{
	UAVObjGetDataField(BaroAirspeedHandle(), (void*)NewGPSAirspeed, offsetof( BaroAirspeedData, GPSAirspeed), sizeof(float));
}
void BaroAirspeedTrueAirspeedSet( float *NewTrueAirspeed )
{
	UAVObjSetDataField(BaroAirspeedHandle(), (void*)NewTrueAirspeed, offsetof( BaroAirspeedData, TrueAirspeed), sizeof(float));
}
void BaroAirspeedTrueAirspeedGet( float *NewTrueAirspeed )
{
	UAVObjGetDataField(BaroAirspeedHandle(), (void*)NewTrueAirspeed, offsetof( BaroAirspeedData, TrueAirspeed), sizeof(float));
}
void BaroAirspeedSensorValueSet( uint16_t *NewSensorValue )
{
	UAVObjSetDataField(BaroAirspeedHandle(), (void*)NewSensorValue, offsetof( BaroAirspeedData, SensorValue), sizeof(uint16_t));
}
void BaroAirspeedSensorValueGet( uint16_t *NewSensorValue )
{
	UAVObjGetDataField(BaroAirspeedHandle(), (void*)NewSensorValue, offsetof( BaroAirspeedData, SensorValue), sizeof(uint16_t));
}
void BaroAirspeedBaroConnectedSet( uint8_t *NewBaroConnected )
{
	UAVObjSetDataField(BaroAirspeedHandle(), (void*)NewBaroConnected, offsetof( BaroAirspeedData, BaroConnected), sizeof(uint8_t));
}
void BaroAirspeedBaroConnectedGet( uint8_t *NewBaroConnected )
{
	UAVObjGetDataField(BaroAirspeedHandle(), (void*)NewBaroConnected, offsetof( BaroAirspeedData, BaroConnected), sizeof(uint8_t));
}


/**
 * @}
 * @}
 */

