/**
 ******************************************************************************
 * @addtogroup TauLabsCore Tau Labs Core components
 * @{
 * @addtogroup UAVObjects UAVObject set for this firmware
 * @{
 *
 * @file       objectpersistence.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     Tau Labs, http://taulabs.org, Copyright (C) 2012-2013
 * @brief      Implementation of the ObjectPersistence object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: objectpersistence.xml. 
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
#include "objectpersistence.h"

// Private variables
static UAVObjHandle handle = NULL;

/**
 * Initialize object.
 * \return 0 Success
 * \return -1 Failure to initialize or -2 for already initialized
 */
int32_t ObjectPersistenceInitialize(void)
{
	// Don't set the handle to null if already registered
	if(UAVObjGetByID(OBJECTPERSISTENCE_OBJID) != NULL)
		return -2;
	
	// Register object with the object manager
	handle = UAVObjRegister(OBJECTPERSISTENCE_OBJID,
			OBJECTPERSISTENCE_ISSINGLEINST, OBJECTPERSISTENCE_ISSETTINGS, OBJECTPERSISTENCE_NUMBYTES, &ObjectPersistenceSetDefaults);

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
void ObjectPersistenceSetDefaults(UAVObjHandle obj, uint16_t instId)
{
	ObjectPersistenceData data;
	UAVObjMetadata metadata;

	// Initialize object fields to their default values
	UAVObjGetInstanceData(obj, instId, &data);
	memset(&data, 0, sizeof(ObjectPersistenceData));

	UAVObjSetInstanceData(obj, instId, &data);

	// Initialize object metadata to their default values
	metadata.flags =
		ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
		ACCESS_READWRITE << UAVOBJ_GCS_ACCESS_SHIFT |
		1 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
		1 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
		UPDATEMODE_ONCHANGE << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
		UPDATEMODE_MANUAL << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT;
	metadata.telemetryUpdatePeriod = 0;
	metadata.gcsTelemetryUpdatePeriod = 0;
	metadata.loggingUpdatePeriod = 0;
	UAVObjSetMetadata(obj, &metadata);
}

/**
 * Get object handle
 */
UAVObjHandle ObjectPersistenceHandle()
{
	return handle;
}

/**
 * Get/Set object Functions
 */
void ObjectPersistenceObjectIDSet( uint32_t *NewObjectID )
{
	UAVObjSetDataField(ObjectPersistenceHandle(), (void*)NewObjectID, offsetof( ObjectPersistenceData, ObjectID), sizeof(uint32_t));
}
void ObjectPersistenceObjectIDGet( uint32_t *NewObjectID )
{
	UAVObjGetDataField(ObjectPersistenceHandle(), (void*)NewObjectID, offsetof( ObjectPersistenceData, ObjectID), sizeof(uint32_t));
}
void ObjectPersistenceInstanceIDSet( uint32_t *NewInstanceID )
{
	UAVObjSetDataField(ObjectPersistenceHandle(), (void*)NewInstanceID, offsetof( ObjectPersistenceData, InstanceID), sizeof(uint32_t));
}
void ObjectPersistenceInstanceIDGet( uint32_t *NewInstanceID )
{
	UAVObjGetDataField(ObjectPersistenceHandle(), (void*)NewInstanceID, offsetof( ObjectPersistenceData, InstanceID), sizeof(uint32_t));
}
void ObjectPersistenceOperationSet( uint8_t *NewOperation )
{
	UAVObjSetDataField(ObjectPersistenceHandle(), (void*)NewOperation, offsetof( ObjectPersistenceData, Operation), sizeof(uint8_t));
}
void ObjectPersistenceOperationGet( uint8_t *NewOperation )
{
	UAVObjGetDataField(ObjectPersistenceHandle(), (void*)NewOperation, offsetof( ObjectPersistenceData, Operation), sizeof(uint8_t));
}
void ObjectPersistenceSelectionSet( uint8_t *NewSelection )
{
	UAVObjSetDataField(ObjectPersistenceHandle(), (void*)NewSelection, offsetof( ObjectPersistenceData, Selection), sizeof(uint8_t));
}
void ObjectPersistenceSelectionGet( uint8_t *NewSelection )
{
	UAVObjGetDataField(ObjectPersistenceHandle(), (void*)NewSelection, offsetof( ObjectPersistenceData, Selection), sizeof(uint8_t));
}


/**
 * @}
 * @}
 */

