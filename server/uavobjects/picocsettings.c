/**
 ******************************************************************************
 * @addtogroup TauLabsCore Tau Labs Core components
 * @{
 * @addtogroup UAVObjects UAVObject set for this firmware
 * @{
 *
 * @file       picocsettings.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     Tau Labs, http://taulabs.org, Copyright (C) 2012-2015
 * @brief      Implementation of the PicoCSettings object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: picocsettings.xml. 
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

#include <string.h>
#include "uavobjectmanager.h"
#include "picocsettings.h"

// Private variables
static UAVObjHandle handle = NULL;

/**
 * Initialize object.
 * \return 0 Success
 * \return -1 Failure to initialize or -2 for already initialized
 */
int32_t PicoCSettingsInitialize(void)
{
	// Don't set the handle to null if already registered
	if(UAVObjGetByID(PICOCSETTINGS_OBJID) != NULL)
		return -2;
	
	// Register object with the object manager
	handle = UAVObjRegister(PICOCSETTINGS_OBJID,
			PICOCSETTINGS_ISSINGLEINST, PICOCSETTINGS_ISSETTINGS, PICOCSETTINGS_NUMBYTES, &PicoCSettingsSetDefaults);

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
void PicoCSettingsSetDefaults(UAVObjHandle obj, uint16_t instId)
{
	PicoCSettingsData data;

	// Initialize object fields to their default values
	UAVObjGetInstanceData(obj, instId, &data);
	memset(&data, 0, sizeof(PicoCSettingsData));
	data.MaxFileSize = 2048;
	data.TaskStackSize = 16384;
	data.PicoCStackSize = 16384;
	data.BootFileID = 0;
	data.Startup = 0;
	data.Source = 0;
	data.ComSpeed = 6;

	UAVObjSetInstanceData(obj, instId, &data);

	// Initialize object metadata to their default values
	if (instId == 0) {
		UAVObjMetadata metadata;
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
}

/**
 * Get object handle
 */
UAVObjHandle PicoCSettingsHandle()
{
	return handle;
}

/**
 * Get/Set object Functions
 */
void PicoCSettingsMaxFileSizeSet( uint32_t *NewMaxFileSize )
{
	UAVObjSetDataField(PicoCSettingsHandle(), (void*)NewMaxFileSize, offsetof( PicoCSettingsData, MaxFileSize), sizeof(uint32_t));
}
void PicoCSettingsMaxFileSizeGet( uint32_t *NewMaxFileSize )
{
	UAVObjGetDataField(PicoCSettingsHandle(), (void*)NewMaxFileSize, offsetof( PicoCSettingsData, MaxFileSize), sizeof(uint32_t));
}
void PicoCSettingsTaskStackSizeSet( uint32_t *NewTaskStackSize )
{
	UAVObjSetDataField(PicoCSettingsHandle(), (void*)NewTaskStackSize, offsetof( PicoCSettingsData, TaskStackSize), sizeof(uint32_t));
}
void PicoCSettingsTaskStackSizeGet( uint32_t *NewTaskStackSize )
{
	UAVObjGetDataField(PicoCSettingsHandle(), (void*)NewTaskStackSize, offsetof( PicoCSettingsData, TaskStackSize), sizeof(uint32_t));
}
void PicoCSettingsPicoCStackSizeSet( uint32_t *NewPicoCStackSize )
{
	UAVObjSetDataField(PicoCSettingsHandle(), (void*)NewPicoCStackSize, offsetof( PicoCSettingsData, PicoCStackSize), sizeof(uint32_t));
}
void PicoCSettingsPicoCStackSizeGet( uint32_t *NewPicoCStackSize )
{
	UAVObjGetDataField(PicoCSettingsHandle(), (void*)NewPicoCStackSize, offsetof( PicoCSettingsData, PicoCStackSize), sizeof(uint32_t));
}
void PicoCSettingsBootFileIDSet( uint8_t *NewBootFileID )
{
	UAVObjSetDataField(PicoCSettingsHandle(), (void*)NewBootFileID, offsetof( PicoCSettingsData, BootFileID), sizeof(uint8_t));
}
void PicoCSettingsBootFileIDGet( uint8_t *NewBootFileID )
{
	UAVObjGetDataField(PicoCSettingsHandle(), (void*)NewBootFileID, offsetof( PicoCSettingsData, BootFileID), sizeof(uint8_t));
}
void PicoCSettingsStartupSet( uint8_t *NewStartup )
{
	UAVObjSetDataField(PicoCSettingsHandle(), (void*)NewStartup, offsetof( PicoCSettingsData, Startup), sizeof(uint8_t));
}
void PicoCSettingsStartupGet( uint8_t *NewStartup )
{
	UAVObjGetDataField(PicoCSettingsHandle(), (void*)NewStartup, offsetof( PicoCSettingsData, Startup), sizeof(uint8_t));
}
void PicoCSettingsSourceSet( uint8_t *NewSource )
{
	UAVObjSetDataField(PicoCSettingsHandle(), (void*)NewSource, offsetof( PicoCSettingsData, Source), sizeof(uint8_t));
}
void PicoCSettingsSourceGet( uint8_t *NewSource )
{
	UAVObjGetDataField(PicoCSettingsHandle(), (void*)NewSource, offsetof( PicoCSettingsData, Source), sizeof(uint8_t));
}
void PicoCSettingsComSpeedSet( uint8_t *NewComSpeed )
{
	UAVObjSetDataField(PicoCSettingsHandle(), (void*)NewComSpeed, offsetof( PicoCSettingsData, ComSpeed), sizeof(uint8_t));
}
void PicoCSettingsComSpeedGet( uint8_t *NewComSpeed )
{
	UAVObjGetDataField(PicoCSettingsHandle(), (void*)NewComSpeed, offsetof( PicoCSettingsData, ComSpeed), sizeof(uint8_t));
}


/**
 * @}
 * @}
 */

