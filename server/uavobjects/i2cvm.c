/**
 ******************************************************************************
 * @addtogroup TauLabsCore Tau Labs Core components
 * @{
 * @addtogroup UAVObjects UAVObject set for this firmware
 * @{
 *
 * @file       i2cvm.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     Tau Labs, http://taulabs.org, Copyright (C) 2012-2015
 * @brief      Implementation of the I2CVM object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: i2cvm.xml. 
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
#include "i2cvm.h"

// Private variables
static UAVObjHandle handle = NULL;

/**
 * Initialize object.
 * \return 0 Success
 * \return -1 Failure to initialize or -2 for already initialized
 */
int32_t I2CVMInitialize(void)
{
	// Don't set the handle to null if already registered
	if(UAVObjGetByID(I2CVM_OBJID) != NULL)
		return -2;
	
	// Register object with the object manager
	handle = UAVObjRegister(I2CVM_OBJID,
			I2CVM_ISSINGLEINST, I2CVM_ISSETTINGS, I2CVM_NUMBYTES, &I2CVMSetDefaults);

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
void I2CVMSetDefaults(UAVObjHandle obj, uint16_t instId)
{
	I2CVMData data;

	// Initialize object fields to their default values
	UAVObjGetInstanceData(obj, instId, &data);
	memset(&data, 0, sizeof(I2CVMData));

	UAVObjSetInstanceData(obj, instId, &data);

	// Initialize object metadata to their default values
	if (instId == 0) {
		UAVObjMetadata metadata;
		metadata.flags =
			ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
			ACCESS_READONLY << UAVOBJ_GCS_ACCESS_SHIFT |
			0 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
			0 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
			UPDATEMODE_ONCHANGE << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
			UPDATEMODE_MANUAL << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT;
		metadata.telemetryUpdatePeriod = 100;
		metadata.gcsTelemetryUpdatePeriod = 0;
		metadata.loggingUpdatePeriod = 0;
		UAVObjSetMetadata(obj, &metadata);
	}
}

/**
 * Get object handle
 */
UAVObjHandle I2CVMHandle()
{
	return handle;
}

/**
 * Get/Set object Functions
 */
void I2CVMr0Set( int32_t *Newr0 )
{
	UAVObjSetDataField(I2CVMHandle(), (void*)Newr0, offsetof( I2CVMData, r0), sizeof(int32_t));
}
void I2CVMr0Get( int32_t *Newr0 )
{
	UAVObjGetDataField(I2CVMHandle(), (void*)Newr0, offsetof( I2CVMData, r0), sizeof(int32_t));
}
void I2CVMr1Set( int32_t *Newr1 )
{
	UAVObjSetDataField(I2CVMHandle(), (void*)Newr1, offsetof( I2CVMData, r1), sizeof(int32_t));
}
void I2CVMr1Get( int32_t *Newr1 )
{
	UAVObjGetDataField(I2CVMHandle(), (void*)Newr1, offsetof( I2CVMData, r1), sizeof(int32_t));
}
void I2CVMr2Set( int32_t *Newr2 )
{
	UAVObjSetDataField(I2CVMHandle(), (void*)Newr2, offsetof( I2CVMData, r2), sizeof(int32_t));
}
void I2CVMr2Get( int32_t *Newr2 )
{
	UAVObjGetDataField(I2CVMHandle(), (void*)Newr2, offsetof( I2CVMData, r2), sizeof(int32_t));
}
void I2CVMr3Set( int32_t *Newr3 )
{
	UAVObjSetDataField(I2CVMHandle(), (void*)Newr3, offsetof( I2CVMData, r3), sizeof(int32_t));
}
void I2CVMr3Get( int32_t *Newr3 )
{
	UAVObjGetDataField(I2CVMHandle(), (void*)Newr3, offsetof( I2CVMData, r3), sizeof(int32_t));
}
void I2CVMr4Set( int32_t *Newr4 )
{
	UAVObjSetDataField(I2CVMHandle(), (void*)Newr4, offsetof( I2CVMData, r4), sizeof(int32_t));
}
void I2CVMr4Get( int32_t *Newr4 )
{
	UAVObjGetDataField(I2CVMHandle(), (void*)Newr4, offsetof( I2CVMData, r4), sizeof(int32_t));
}
void I2CVMr5Set( int32_t *Newr5 )
{
	UAVObjSetDataField(I2CVMHandle(), (void*)Newr5, offsetof( I2CVMData, r5), sizeof(int32_t));
}
void I2CVMr5Get( int32_t *Newr5 )
{
	UAVObjGetDataField(I2CVMHandle(), (void*)Newr5, offsetof( I2CVMData, r5), sizeof(int32_t));
}
void I2CVMr6Set( int32_t *Newr6 )
{
	UAVObjSetDataField(I2CVMHandle(), (void*)Newr6, offsetof( I2CVMData, r6), sizeof(int32_t));
}
void I2CVMr6Get( int32_t *Newr6 )
{
	UAVObjGetDataField(I2CVMHandle(), (void*)Newr6, offsetof( I2CVMData, r6), sizeof(int32_t));
}
void I2CVMpcSet( uint16_t *Newpc )
{
	UAVObjSetDataField(I2CVMHandle(), (void*)Newpc, offsetof( I2CVMData, pc), sizeof(uint16_t));
}
void I2CVMpcGet( uint16_t *Newpc )
{
	UAVObjGetDataField(I2CVMHandle(), (void*)Newpc, offsetof( I2CVMData, pc), sizeof(uint16_t));
}
void I2CVMramSet( uint8_t *Newram )
{
	UAVObjSetDataField(I2CVMHandle(), (void*)Newram, offsetof( I2CVMData, ram), 8*sizeof(uint8_t));
}
void I2CVMramGet( uint8_t *Newram )
{
	UAVObjGetDataField(I2CVMHandle(), (void*)Newram, offsetof( I2CVMData, ram), 8*sizeof(uint8_t));
}


/**
 * @}
 * @}
 */

