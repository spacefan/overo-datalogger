/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup MixerSettings MixerSettings
 * @brief Settings for the @ref ActuatorModule that controls the channel assignments for the mixer based on AircraftType
 *
 * Autogenerated files and functions for MixerSettings Object
 * @{ 
 *
 * @file       mixersettings.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Implementation of the MixerSettings object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: mixersettings.xml. 
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
#include "mixersettings.h"

// Private variables
static UAVObjHandle handle = NULL;

/**
 * Initialize object.
 * \return 0 Success
 * \return -1 Failure to initialize or -2 for already initialized
 */
int32_t MixerSettingsInitialize(void)
{
	// Don't set the handle to null if already registered
	if(UAVObjGetByID(MIXERSETTINGS_OBJID) != NULL)
		return -2;
	
	// Register object with the object manager
	handle = UAVObjRegister(MIXERSETTINGS_OBJID,
			MIXERSETTINGS_ISSINGLEINST, MIXERSETTINGS_ISSETTINGS, MIXERSETTINGS_NUMBYTES, &MixerSettingsSetDefaults);

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
void MixerSettingsSetDefaults(UAVObjHandle obj, uint16_t instId)
{
	MixerSettingsData data;
	UAVObjMetadata metadata;

	// Initialize object fields to their default values
	UAVObjGetInstanceData(obj, instId, &data);
	memset(&data, 0, sizeof(MixerSettingsData));
	data.MaxAccel = 1000;
	data.FeedForward = 0;
	data.AccelTime = 0;
	data.DecelTime = 0;
	data.ThrottleCurve1[0] = 0;
	data.ThrottleCurve1[1] = 0;
	data.ThrottleCurve1[2] = 0;
	data.ThrottleCurve1[3] = 0;
	data.ThrottleCurve1[4] = 0;
	data.ThrottleCurve2[0] = 0;
	data.ThrottleCurve2[1] = 0.25;
	data.ThrottleCurve2[2] = 0.5;
	data.ThrottleCurve2[3] = 0.75;
	data.ThrottleCurve2[4] = 1;
	data.Curve2Source = 0;
	data.Mixer1Type = 0;
	data.Mixer1Vector[0] = 0;
	data.Mixer1Vector[1] = 0;
	data.Mixer1Vector[2] = 0;
	data.Mixer1Vector[3] = 0;
	data.Mixer1Vector[4] = 0;
	data.Mixer2Type = 0;
	data.Mixer2Vector[0] = 0;
	data.Mixer2Vector[1] = 0;
	data.Mixer2Vector[2] = 0;
	data.Mixer2Vector[3] = 0;
	data.Mixer2Vector[4] = 0;
	data.Mixer3Type = 0;
	data.Mixer3Vector[0] = 0;
	data.Mixer3Vector[1] = 0;
	data.Mixer3Vector[2] = 0;
	data.Mixer3Vector[3] = 0;
	data.Mixer3Vector[4] = 0;
	data.Mixer4Type = 0;
	data.Mixer4Vector[0] = 0;
	data.Mixer4Vector[1] = 0;
	data.Mixer4Vector[2] = 0;
	data.Mixer4Vector[3] = 0;
	data.Mixer4Vector[4] = 0;
	data.Mixer5Type = 0;
	data.Mixer5Vector[0] = 0;
	data.Mixer5Vector[1] = 0;
	data.Mixer5Vector[2] = 0;
	data.Mixer5Vector[3] = 0;
	data.Mixer5Vector[4] = 0;
	data.Mixer6Type = 0;
	data.Mixer6Vector[0] = 0;
	data.Mixer6Vector[1] = 0;
	data.Mixer6Vector[2] = 0;
	data.Mixer6Vector[3] = 0;
	data.Mixer6Vector[4] = 0;
	data.Mixer7Type = 0;
	data.Mixer7Vector[0] = 0;
	data.Mixer7Vector[1] = 0;
	data.Mixer7Vector[2] = 0;
	data.Mixer7Vector[3] = 0;
	data.Mixer7Vector[4] = 0;
	data.Mixer8Type = 0;
	data.Mixer8Vector[0] = 0;
	data.Mixer8Vector[1] = 0;
	data.Mixer8Vector[2] = 0;
	data.Mixer8Vector[3] = 0;
	data.Mixer8Vector[4] = 0;
	data.Mixer9Type = 0;
	data.Mixer9Vector[0] = 0;
	data.Mixer9Vector[1] = 0;
	data.Mixer9Vector[2] = 0;
	data.Mixer9Vector[3] = 0;
	data.Mixer9Vector[4] = 0;
	data.Mixer10Type = 0;
	data.Mixer10Vector[0] = 0;
	data.Mixer10Vector[1] = 0;
	data.Mixer10Vector[2] = 0;
	data.Mixer10Vector[3] = 0;
	data.Mixer10Vector[4] = 0;

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
UAVObjHandle MixerSettingsHandle()
{
	return handle;
}

/**
 * Get/Set object Functions
 */
void MixerSettingsMaxAccelSet( float *NewMaxAccel )
{
	UAVObjSetDataField(MixerSettingsHandle(), (void*)NewMaxAccel, offsetof( MixerSettingsData, MaxAccel), sizeof(float));
}
void MixerSettingsMaxAccelGet( float *NewMaxAccel )
{
	UAVObjGetDataField(MixerSettingsHandle(), (void*)NewMaxAccel, offsetof( MixerSettingsData, MaxAccel), sizeof(float));
}
void MixerSettingsFeedForwardSet( float *NewFeedForward )
{
	UAVObjSetDataField(MixerSettingsHandle(), (void*)NewFeedForward, offsetof( MixerSettingsData, FeedForward), sizeof(float));
}
void MixerSettingsFeedForwardGet( float *NewFeedForward )
{
	UAVObjGetDataField(MixerSettingsHandle(), (void*)NewFeedForward, offsetof( MixerSettingsData, FeedForward), sizeof(float));
}
void MixerSettingsAccelTimeSet( float *NewAccelTime )
{
	UAVObjSetDataField(MixerSettingsHandle(), (void*)NewAccelTime, offsetof( MixerSettingsData, AccelTime), sizeof(float));
}
void MixerSettingsAccelTimeGet( float *NewAccelTime )
{
	UAVObjGetDataField(MixerSettingsHandle(), (void*)NewAccelTime, offsetof( MixerSettingsData, AccelTime), sizeof(float));
}
void MixerSettingsDecelTimeSet( float *NewDecelTime )
{
	UAVObjSetDataField(MixerSettingsHandle(), (void*)NewDecelTime, offsetof( MixerSettingsData, DecelTime), sizeof(float));
}
void MixerSettingsDecelTimeGet( float *NewDecelTime )
{
	UAVObjGetDataField(MixerSettingsHandle(), (void*)NewDecelTime, offsetof( MixerSettingsData, DecelTime), sizeof(float));
}
void MixerSettingsThrottleCurve1Set( float *NewThrottleCurve1 )
{
	UAVObjSetDataField(MixerSettingsHandle(), (void*)NewThrottleCurve1, offsetof( MixerSettingsData, ThrottleCurve1), 5*sizeof(float));
}
void MixerSettingsThrottleCurve1Get( float *NewThrottleCurve1 )
{
	UAVObjGetDataField(MixerSettingsHandle(), (void*)NewThrottleCurve1, offsetof( MixerSettingsData, ThrottleCurve1), 5*sizeof(float));
}
void MixerSettingsThrottleCurve2Set( float *NewThrottleCurve2 )
{
	UAVObjSetDataField(MixerSettingsHandle(), (void*)NewThrottleCurve2, offsetof( MixerSettingsData, ThrottleCurve2), 5*sizeof(float));
}
void MixerSettingsThrottleCurve2Get( float *NewThrottleCurve2 )
{
	UAVObjGetDataField(MixerSettingsHandle(), (void*)NewThrottleCurve2, offsetof( MixerSettingsData, ThrottleCurve2), 5*sizeof(float));
}
void MixerSettingsCurve2SourceSet( uint8_t *NewCurve2Source )
{
	UAVObjSetDataField(MixerSettingsHandle(), (void*)NewCurve2Source, offsetof( MixerSettingsData, Curve2Source), sizeof(uint8_t));
}
void MixerSettingsCurve2SourceGet( uint8_t *NewCurve2Source )
{
	UAVObjGetDataField(MixerSettingsHandle(), (void*)NewCurve2Source, offsetof( MixerSettingsData, Curve2Source), sizeof(uint8_t));
}
void MixerSettingsMixer1TypeSet( uint8_t *NewMixer1Type )
{
	UAVObjSetDataField(MixerSettingsHandle(), (void*)NewMixer1Type, offsetof( MixerSettingsData, Mixer1Type), sizeof(uint8_t));
}
void MixerSettingsMixer1TypeGet( uint8_t *NewMixer1Type )
{
	UAVObjGetDataField(MixerSettingsHandle(), (void*)NewMixer1Type, offsetof( MixerSettingsData, Mixer1Type), sizeof(uint8_t));
}
void MixerSettingsMixer1VectorSet( int8_t *NewMixer1Vector )
{
	UAVObjSetDataField(MixerSettingsHandle(), (void*)NewMixer1Vector, offsetof( MixerSettingsData, Mixer1Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer1VectorGet( int8_t *NewMixer1Vector )
{
	UAVObjGetDataField(MixerSettingsHandle(), (void*)NewMixer1Vector, offsetof( MixerSettingsData, Mixer1Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer2TypeSet( uint8_t *NewMixer2Type )
{
	UAVObjSetDataField(MixerSettingsHandle(), (void*)NewMixer2Type, offsetof( MixerSettingsData, Mixer2Type), sizeof(uint8_t));
}
void MixerSettingsMixer2TypeGet( uint8_t *NewMixer2Type )
{
	UAVObjGetDataField(MixerSettingsHandle(), (void*)NewMixer2Type, offsetof( MixerSettingsData, Mixer2Type), sizeof(uint8_t));
}
void MixerSettingsMixer2VectorSet( int8_t *NewMixer2Vector )
{
	UAVObjSetDataField(MixerSettingsHandle(), (void*)NewMixer2Vector, offsetof( MixerSettingsData, Mixer2Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer2VectorGet( int8_t *NewMixer2Vector )
{
	UAVObjGetDataField(MixerSettingsHandle(), (void*)NewMixer2Vector, offsetof( MixerSettingsData, Mixer2Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer3TypeSet( uint8_t *NewMixer3Type )
{
	UAVObjSetDataField(MixerSettingsHandle(), (void*)NewMixer3Type, offsetof( MixerSettingsData, Mixer3Type), sizeof(uint8_t));
}
void MixerSettingsMixer3TypeGet( uint8_t *NewMixer3Type )
{
	UAVObjGetDataField(MixerSettingsHandle(), (void*)NewMixer3Type, offsetof( MixerSettingsData, Mixer3Type), sizeof(uint8_t));
}
void MixerSettingsMixer3VectorSet( int8_t *NewMixer3Vector )
{
	UAVObjSetDataField(MixerSettingsHandle(), (void*)NewMixer3Vector, offsetof( MixerSettingsData, Mixer3Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer3VectorGet( int8_t *NewMixer3Vector )
{
	UAVObjGetDataField(MixerSettingsHandle(), (void*)NewMixer3Vector, offsetof( MixerSettingsData, Mixer3Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer4TypeSet( uint8_t *NewMixer4Type )
{
	UAVObjSetDataField(MixerSettingsHandle(), (void*)NewMixer4Type, offsetof( MixerSettingsData, Mixer4Type), sizeof(uint8_t));
}
void MixerSettingsMixer4TypeGet( uint8_t *NewMixer4Type )
{
	UAVObjGetDataField(MixerSettingsHandle(), (void*)NewMixer4Type, offsetof( MixerSettingsData, Mixer4Type), sizeof(uint8_t));
}
void MixerSettingsMixer4VectorSet( int8_t *NewMixer4Vector )
{
	UAVObjSetDataField(MixerSettingsHandle(), (void*)NewMixer4Vector, offsetof( MixerSettingsData, Mixer4Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer4VectorGet( int8_t *NewMixer4Vector )
{
	UAVObjGetDataField(MixerSettingsHandle(), (void*)NewMixer4Vector, offsetof( MixerSettingsData, Mixer4Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer5TypeSet( uint8_t *NewMixer5Type )
{
	UAVObjSetDataField(MixerSettingsHandle(), (void*)NewMixer5Type, offsetof( MixerSettingsData, Mixer5Type), sizeof(uint8_t));
}
void MixerSettingsMixer5TypeGet( uint8_t *NewMixer5Type )
{
	UAVObjGetDataField(MixerSettingsHandle(), (void*)NewMixer5Type, offsetof( MixerSettingsData, Mixer5Type), sizeof(uint8_t));
}
void MixerSettingsMixer5VectorSet( int8_t *NewMixer5Vector )
{
	UAVObjSetDataField(MixerSettingsHandle(), (void*)NewMixer5Vector, offsetof( MixerSettingsData, Mixer5Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer5VectorGet( int8_t *NewMixer5Vector )
{
	UAVObjGetDataField(MixerSettingsHandle(), (void*)NewMixer5Vector, offsetof( MixerSettingsData, Mixer5Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer6TypeSet( uint8_t *NewMixer6Type )
{
	UAVObjSetDataField(MixerSettingsHandle(), (void*)NewMixer6Type, offsetof( MixerSettingsData, Mixer6Type), sizeof(uint8_t));
}
void MixerSettingsMixer6TypeGet( uint8_t *NewMixer6Type )
{
	UAVObjGetDataField(MixerSettingsHandle(), (void*)NewMixer6Type, offsetof( MixerSettingsData, Mixer6Type), sizeof(uint8_t));
}
void MixerSettingsMixer6VectorSet( int8_t *NewMixer6Vector )
{
	UAVObjSetDataField(MixerSettingsHandle(), (void*)NewMixer6Vector, offsetof( MixerSettingsData, Mixer6Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer6VectorGet( int8_t *NewMixer6Vector )
{
	UAVObjGetDataField(MixerSettingsHandle(), (void*)NewMixer6Vector, offsetof( MixerSettingsData, Mixer6Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer7TypeSet( uint8_t *NewMixer7Type )
{
	UAVObjSetDataField(MixerSettingsHandle(), (void*)NewMixer7Type, offsetof( MixerSettingsData, Mixer7Type), sizeof(uint8_t));
}
void MixerSettingsMixer7TypeGet( uint8_t *NewMixer7Type )
{
	UAVObjGetDataField(MixerSettingsHandle(), (void*)NewMixer7Type, offsetof( MixerSettingsData, Mixer7Type), sizeof(uint8_t));
}
void MixerSettingsMixer7VectorSet( int8_t *NewMixer7Vector )
{
	UAVObjSetDataField(MixerSettingsHandle(), (void*)NewMixer7Vector, offsetof( MixerSettingsData, Mixer7Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer7VectorGet( int8_t *NewMixer7Vector )
{
	UAVObjGetDataField(MixerSettingsHandle(), (void*)NewMixer7Vector, offsetof( MixerSettingsData, Mixer7Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer8TypeSet( uint8_t *NewMixer8Type )
{
	UAVObjSetDataField(MixerSettingsHandle(), (void*)NewMixer8Type, offsetof( MixerSettingsData, Mixer8Type), sizeof(uint8_t));
}
void MixerSettingsMixer8TypeGet( uint8_t *NewMixer8Type )
{
	UAVObjGetDataField(MixerSettingsHandle(), (void*)NewMixer8Type, offsetof( MixerSettingsData, Mixer8Type), sizeof(uint8_t));
}
void MixerSettingsMixer8VectorSet( int8_t *NewMixer8Vector )
{
	UAVObjSetDataField(MixerSettingsHandle(), (void*)NewMixer8Vector, offsetof( MixerSettingsData, Mixer8Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer8VectorGet( int8_t *NewMixer8Vector )
{
	UAVObjGetDataField(MixerSettingsHandle(), (void*)NewMixer8Vector, offsetof( MixerSettingsData, Mixer8Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer9TypeSet( uint8_t *NewMixer9Type )
{
	UAVObjSetDataField(MixerSettingsHandle(), (void*)NewMixer9Type, offsetof( MixerSettingsData, Mixer9Type), sizeof(uint8_t));
}
void MixerSettingsMixer9TypeGet( uint8_t *NewMixer9Type )
{
	UAVObjGetDataField(MixerSettingsHandle(), (void*)NewMixer9Type, offsetof( MixerSettingsData, Mixer9Type), sizeof(uint8_t));
}
void MixerSettingsMixer9VectorSet( int8_t *NewMixer9Vector )
{
	UAVObjSetDataField(MixerSettingsHandle(), (void*)NewMixer9Vector, offsetof( MixerSettingsData, Mixer9Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer9VectorGet( int8_t *NewMixer9Vector )
{
	UAVObjGetDataField(MixerSettingsHandle(), (void*)NewMixer9Vector, offsetof( MixerSettingsData, Mixer9Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer10TypeSet( uint8_t *NewMixer10Type )
{
	UAVObjSetDataField(MixerSettingsHandle(), (void*)NewMixer10Type, offsetof( MixerSettingsData, Mixer10Type), sizeof(uint8_t));
}
void MixerSettingsMixer10TypeGet( uint8_t *NewMixer10Type )
{
	UAVObjGetDataField(MixerSettingsHandle(), (void*)NewMixer10Type, offsetof( MixerSettingsData, Mixer10Type), sizeof(uint8_t));
}
void MixerSettingsMixer10VectorSet( int8_t *NewMixer10Vector )
{
	UAVObjSetDataField(MixerSettingsHandle(), (void*)NewMixer10Vector, offsetof( MixerSettingsData, Mixer10Vector), 5*sizeof(int8_t));
}
void MixerSettingsMixer10VectorGet( int8_t *NewMixer10Vector )
{
	UAVObjGetDataField(MixerSettingsHandle(), (void*)NewMixer10Vector, offsetof( MixerSettingsData, Mixer10Vector), 5*sizeof(int8_t));
}


/**
 * @}
 */

