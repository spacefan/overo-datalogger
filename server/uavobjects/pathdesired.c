/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup PathDesired PathDesired
 * @brief The endpoint or path the craft is trying to achieve.  Can come from @ref ManualControl or @ref PathPlanner 
 *
 * Autogenerated files and functions for PathDesired Object
 * @{ 
 *
 * @file       pathdesired.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Implementation of the PathDesired object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: pathdesired.xml. 
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
#include "pathdesired.h"

// Private variables
static UAVObjHandle handle = NULL;

/**
 * Initialize object.
 * \return 0 Success
 * \return -1 Failure to initialize or -2 for already initialized
 */
int32_t PathDesiredInitialize(void)
{
	// Don't set the handle to null if already registered
	if(UAVObjGetByID(PATHDESIRED_OBJID) != NULL)
		return -2;
	
	// Register object with the object manager
	handle = UAVObjRegister(PATHDESIRED_OBJID,
			PATHDESIRED_ISSINGLEINST, PATHDESIRED_ISSETTINGS, PATHDESIRED_NUMBYTES, &PathDesiredSetDefaults);

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
void PathDesiredSetDefaults(UAVObjHandle obj, uint16_t instId)
{
	PathDesiredData data;
	UAVObjMetadata metadata;

	// Initialize object fields to their default values
	UAVObjGetInstanceData(obj, instId, &data);
	memset(&data, 0, sizeof(PathDesiredData));

	UAVObjSetInstanceData(obj, instId, &data);

	// Initialize object metadata to their default values
	metadata.flags =
		ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
		ACCESS_READWRITE << UAVOBJ_GCS_ACCESS_SHIFT |
		0 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
		0 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
		UPDATEMODE_ONCHANGE << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
		UPDATEMODE_MANUAL << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT;
	metadata.telemetryUpdatePeriod = 1000;
	metadata.gcsTelemetryUpdatePeriod = 0;
	metadata.loggingUpdatePeriod = 0;
	UAVObjSetMetadata(obj, &metadata);
}

/**
 * Get object handle
 */
UAVObjHandle PathDesiredHandle()
{
	return handle;
}

/**
 * Get/Set object Functions
 */
void PathDesiredStartSet( float *NewStart )
{
	UAVObjSetDataField(PathDesiredHandle(), (void*)NewStart, offsetof( PathDesiredData, Start), 3*sizeof(float));
}
void PathDesiredStartGet( float *NewStart )
{
	UAVObjGetDataField(PathDesiredHandle(), (void*)NewStart, offsetof( PathDesiredData, Start), 3*sizeof(float));
}
void PathDesiredEndSet( float *NewEnd )
{
	UAVObjSetDataField(PathDesiredHandle(), (void*)NewEnd, offsetof( PathDesiredData, End), 3*sizeof(float));
}
void PathDesiredEndGet( float *NewEnd )
{
	UAVObjGetDataField(PathDesiredHandle(), (void*)NewEnd, offsetof( PathDesiredData, End), 3*sizeof(float));
}
void PathDesiredStartingVelocitySet( float *NewStartingVelocity )
{
	UAVObjSetDataField(PathDesiredHandle(), (void*)NewStartingVelocity, offsetof( PathDesiredData, StartingVelocity), sizeof(float));
}
void PathDesiredStartingVelocityGet( float *NewStartingVelocity )
{
	UAVObjGetDataField(PathDesiredHandle(), (void*)NewStartingVelocity, offsetof( PathDesiredData, StartingVelocity), sizeof(float));
}
void PathDesiredEndingVelocitySet( float *NewEndingVelocity )
{
	UAVObjSetDataField(PathDesiredHandle(), (void*)NewEndingVelocity, offsetof( PathDesiredData, EndingVelocity), sizeof(float));
}
void PathDesiredEndingVelocityGet( float *NewEndingVelocity )
{
	UAVObjGetDataField(PathDesiredHandle(), (void*)NewEndingVelocity, offsetof( PathDesiredData, EndingVelocity), sizeof(float));
}
void PathDesiredModeSet( uint8_t *NewMode )
{
	UAVObjSetDataField(PathDesiredHandle(), (void*)NewMode, offsetof( PathDesiredData, Mode), sizeof(uint8_t));
}
void PathDesiredModeGet( uint8_t *NewMode )
{
	UAVObjGetDataField(PathDesiredHandle(), (void*)NewMode, offsetof( PathDesiredData, Mode), sizeof(uint8_t));
}


/**
 * @}
 */

