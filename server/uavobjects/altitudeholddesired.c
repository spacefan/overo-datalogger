/**
 ******************************************************************************
 * @addtogroup TauLabsCore Tau Labs Core components
 * @{
 * @addtogroup UAVObjects UAVObject set for this firmware
 * @{
 *
 * @file       altitudeholddesired.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     Tau Labs, http://taulabs.org, Copyright (C) 2012-2013
 * @brief      Implementation of the AltitudeHoldDesired object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: altitudeholddesired.xml. 
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
#include "altitudeholddesired.h"

// Private variables
static UAVObjHandle handle = NULL;

/**
 * Initialize object.
 * \return 0 Success
 * \return -1 Failure to initialize or -2 for already initialized
 */
int32_t AltitudeHoldDesiredInitialize(void)
{
	// Don't set the handle to null if already registered
	if(UAVObjGetByID(ALTITUDEHOLDDESIRED_OBJID) != NULL)
		return -2;
	
	// Register object with the object manager
	handle = UAVObjRegister(ALTITUDEHOLDDESIRED_OBJID,
			ALTITUDEHOLDDESIRED_ISSINGLEINST, ALTITUDEHOLDDESIRED_ISSETTINGS, ALTITUDEHOLDDESIRED_NUMBYTES, &AltitudeHoldDesiredSetDefaults);

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
void AltitudeHoldDesiredSetDefaults(UAVObjHandle obj, uint16_t instId)
{
	AltitudeHoldDesiredData data;
	UAVObjMetadata metadata;

	// Initialize object fields to their default values
	UAVObjGetInstanceData(obj, instId, &data);
	memset(&data, 0, sizeof(AltitudeHoldDesiredData));

	UAVObjSetInstanceData(obj, instId, &data);

	// Initialize object metadata to their default values
	metadata.flags =
		ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
		ACCESS_READWRITE << UAVOBJ_GCS_ACCESS_SHIFT |
		0 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
		0 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
		UPDATEMODE_ONCHANGE << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
		UPDATEMODE_MANUAL << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT;
	metadata.telemetryUpdatePeriod = 0;
	metadata.gcsTelemetryUpdatePeriod = 0;
	metadata.loggingUpdatePeriod = 1000;
	UAVObjSetMetadata(obj, &metadata);
}

/**
 * Get object handle
 */
UAVObjHandle AltitudeHoldDesiredHandle()
{
	return handle;
}

/**
 * Get/Set object Functions
 */
void AltitudeHoldDesiredAltitudeSet( float *NewAltitude )
{
	UAVObjSetDataField(AltitudeHoldDesiredHandle(), (void*)NewAltitude, offsetof( AltitudeHoldDesiredData, Altitude), sizeof(float));
}
void AltitudeHoldDesiredAltitudeGet( float *NewAltitude )
{
	UAVObjGetDataField(AltitudeHoldDesiredHandle(), (void*)NewAltitude, offsetof( AltitudeHoldDesiredData, Altitude), sizeof(float));
}
void AltitudeHoldDesiredClimbRateSet( float *NewClimbRate )
{
	UAVObjSetDataField(AltitudeHoldDesiredHandle(), (void*)NewClimbRate, offsetof( AltitudeHoldDesiredData, ClimbRate), sizeof(float));
}
void AltitudeHoldDesiredClimbRateGet( float *NewClimbRate )
{
	UAVObjGetDataField(AltitudeHoldDesiredHandle(), (void*)NewClimbRate, offsetof( AltitudeHoldDesiredData, ClimbRate), sizeof(float));
}
void AltitudeHoldDesiredRollSet( float *NewRoll )
{
	UAVObjSetDataField(AltitudeHoldDesiredHandle(), (void*)NewRoll, offsetof( AltitudeHoldDesiredData, Roll), sizeof(float));
}
void AltitudeHoldDesiredRollGet( float *NewRoll )
{
	UAVObjGetDataField(AltitudeHoldDesiredHandle(), (void*)NewRoll, offsetof( AltitudeHoldDesiredData, Roll), sizeof(float));
}
void AltitudeHoldDesiredPitchSet( float *NewPitch )
{
	UAVObjSetDataField(AltitudeHoldDesiredHandle(), (void*)NewPitch, offsetof( AltitudeHoldDesiredData, Pitch), sizeof(float));
}
void AltitudeHoldDesiredPitchGet( float *NewPitch )
{
	UAVObjGetDataField(AltitudeHoldDesiredHandle(), (void*)NewPitch, offsetof( AltitudeHoldDesiredData, Pitch), sizeof(float));
}
void AltitudeHoldDesiredYawSet( float *NewYaw )
{
	UAVObjSetDataField(AltitudeHoldDesiredHandle(), (void*)NewYaw, offsetof( AltitudeHoldDesiredData, Yaw), sizeof(float));
}
void AltitudeHoldDesiredYawGet( float *NewYaw )
{
	UAVObjGetDataField(AltitudeHoldDesiredHandle(), (void*)NewYaw, offsetof( AltitudeHoldDesiredData, Yaw), sizeof(float));
}


/**
 * @}
 * @}
 */

