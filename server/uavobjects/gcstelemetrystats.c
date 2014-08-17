/**
 ******************************************************************************
 * @addtogroup TauLabsCore Tau Labs Core components
 * @{
 * @addtogroup UAVObjects UAVObject set for this firmware
 * @{
 *
 * @file       gcstelemetrystats.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     Tau Labs, http://taulabs.org, Copyright (C) 2012-2013
 * @brief      Implementation of the GCSTelemetryStats object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: gcstelemetrystats.xml. 
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
#include "gcstelemetrystats.h"

// Private variables
static UAVObjHandle handle = NULL;

/**
 * Initialize object.
 * \return 0 Success
 * \return -1 Failure to initialize or -2 for already initialized
 */
int32_t GCSTelemetryStatsInitialize(void)
{
	// Don't set the handle to null if already registered
	if(UAVObjGetByID(GCSTELEMETRYSTATS_OBJID) != NULL)
		return -2;
	
	// Register object with the object manager
	handle = UAVObjRegister(GCSTELEMETRYSTATS_OBJID,
			GCSTELEMETRYSTATS_ISSINGLEINST, GCSTELEMETRYSTATS_ISSETTINGS, GCSTELEMETRYSTATS_NUMBYTES, &GCSTelemetryStatsSetDefaults);

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
void GCSTelemetryStatsSetDefaults(UAVObjHandle obj, uint16_t instId)
{
	GCSTelemetryStatsData data;
	UAVObjMetadata metadata;

	// Initialize object fields to their default values
	UAVObjGetInstanceData(obj, instId, &data);
	memset(&data, 0, sizeof(GCSTelemetryStatsData));

	UAVObjSetInstanceData(obj, instId, &data);

	// Initialize object metadata to their default values
	metadata.flags =
		ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
		ACCESS_READWRITE << UAVOBJ_GCS_ACCESS_SHIFT |
		0 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
		0 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
		UPDATEMODE_MANUAL << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
		UPDATEMODE_PERIODIC << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT;
	metadata.telemetryUpdatePeriod = 0;
	metadata.gcsTelemetryUpdatePeriod = 5000;
	metadata.loggingUpdatePeriod = 0;
	UAVObjSetMetadata(obj, &metadata);
}

/**
 * Get object handle
 */
UAVObjHandle GCSTelemetryStatsHandle()
{
	return handle;
}

/**
 * Get/Set object Functions
 */
void GCSTelemetryStatsTxDataRateSet( float *NewTxDataRate )
{
	UAVObjSetDataField(GCSTelemetryStatsHandle(), (void*)NewTxDataRate, offsetof( GCSTelemetryStatsData, TxDataRate), sizeof(float));
}
void GCSTelemetryStatsTxDataRateGet( float *NewTxDataRate )
{
	UAVObjGetDataField(GCSTelemetryStatsHandle(), (void*)NewTxDataRate, offsetof( GCSTelemetryStatsData, TxDataRate), sizeof(float));
}
void GCSTelemetryStatsRxDataRateSet( float *NewRxDataRate )
{
	UAVObjSetDataField(GCSTelemetryStatsHandle(), (void*)NewRxDataRate, offsetof( GCSTelemetryStatsData, RxDataRate), sizeof(float));
}
void GCSTelemetryStatsRxDataRateGet( float *NewRxDataRate )
{
	UAVObjGetDataField(GCSTelemetryStatsHandle(), (void*)NewRxDataRate, offsetof( GCSTelemetryStatsData, RxDataRate), sizeof(float));
}
void GCSTelemetryStatsTxFailuresSet( uint32_t *NewTxFailures )
{
	UAVObjSetDataField(GCSTelemetryStatsHandle(), (void*)NewTxFailures, offsetof( GCSTelemetryStatsData, TxFailures), sizeof(uint32_t));
}
void GCSTelemetryStatsTxFailuresGet( uint32_t *NewTxFailures )
{
	UAVObjGetDataField(GCSTelemetryStatsHandle(), (void*)NewTxFailures, offsetof( GCSTelemetryStatsData, TxFailures), sizeof(uint32_t));
}
void GCSTelemetryStatsRxFailuresSet( uint32_t *NewRxFailures )
{
	UAVObjSetDataField(GCSTelemetryStatsHandle(), (void*)NewRxFailures, offsetof( GCSTelemetryStatsData, RxFailures), sizeof(uint32_t));
}
void GCSTelemetryStatsRxFailuresGet( uint32_t *NewRxFailures )
{
	UAVObjGetDataField(GCSTelemetryStatsHandle(), (void*)NewRxFailures, offsetof( GCSTelemetryStatsData, RxFailures), sizeof(uint32_t));
}
void GCSTelemetryStatsTxRetriesSet( uint32_t *NewTxRetries )
{
	UAVObjSetDataField(GCSTelemetryStatsHandle(), (void*)NewTxRetries, offsetof( GCSTelemetryStatsData, TxRetries), sizeof(uint32_t));
}
void GCSTelemetryStatsTxRetriesGet( uint32_t *NewTxRetries )
{
	UAVObjGetDataField(GCSTelemetryStatsHandle(), (void*)NewTxRetries, offsetof( GCSTelemetryStatsData, TxRetries), sizeof(uint32_t));
}
void GCSTelemetryStatsStatusSet( uint8_t *NewStatus )
{
	UAVObjSetDataField(GCSTelemetryStatsHandle(), (void*)NewStatus, offsetof( GCSTelemetryStatsData, Status), sizeof(uint8_t));
}
void GCSTelemetryStatsStatusGet( uint8_t *NewStatus )
{
	UAVObjGetDataField(GCSTelemetryStatsHandle(), (void*)NewStatus, offsetof( GCSTelemetryStatsData, Status), sizeof(uint8_t));
}


/**
 * @}
 * @}
 */

