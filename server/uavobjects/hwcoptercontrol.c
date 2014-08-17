/**
 ******************************************************************************
 * @addtogroup TauLabsCore Tau Labs Core components
 * @{
 * @addtogroup UAVObjects UAVObject set for this firmware
 * @{
 *
 * @file       hwcoptercontrol.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     Tau Labs, http://taulabs.org, Copyright (C) 2012-2013
 * @brief      Implementation of the HwCopterControl object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: hwcoptercontrol.xml. 
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
#include "hwcoptercontrol.h"

// Private variables
static UAVObjHandle handle = NULL;

/**
 * Initialize object.
 * \return 0 Success
 * \return -1 Failure to initialize or -2 for already initialized
 */
int32_t HwCopterControlInitialize(void)
{
	// Don't set the handle to null if already registered
	if(UAVObjGetByID(HWCOPTERCONTROL_OBJID) != NULL)
		return -2;
	
	// Register object with the object manager
	handle = UAVObjRegister(HWCOPTERCONTROL_OBJID,
			HWCOPTERCONTROL_ISSINGLEINST, HWCOPTERCONTROL_ISSETTINGS, HWCOPTERCONTROL_NUMBYTES, &HwCopterControlSetDefaults);

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
void HwCopterControlSetDefaults(UAVObjHandle obj, uint16_t instId)
{
	HwCopterControlData data;
	UAVObjMetadata metadata;

	// Initialize object fields to their default values
	UAVObjGetInstanceData(obj, instId, &data);
	memset(&data, 0, sizeof(HwCopterControlData));
	data.RcvrPort = 1;
	data.MainPort = 1;
	data.FlexiPort = 0;
	data.USB_HIDPort = 0;
	data.USB_VCPPort = 3;
	data.DSMxBind = 0;
	data.GyroRange = 1;
	data.AccelRange = 2;
	data.MPU6000Rate = 2;
	data.MPU6000DLPF = 0;

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
UAVObjHandle HwCopterControlHandle()
{
	return handle;
}

/**
 * Get/Set object Functions
 */
void HwCopterControlRcvrPortSet( uint8_t *NewRcvrPort )
{
	UAVObjSetDataField(HwCopterControlHandle(), (void*)NewRcvrPort, offsetof( HwCopterControlData, RcvrPort), sizeof(uint8_t));
}
void HwCopterControlRcvrPortGet( uint8_t *NewRcvrPort )
{
	UAVObjGetDataField(HwCopterControlHandle(), (void*)NewRcvrPort, offsetof( HwCopterControlData, RcvrPort), sizeof(uint8_t));
}
void HwCopterControlMainPortSet( uint8_t *NewMainPort )
{
	UAVObjSetDataField(HwCopterControlHandle(), (void*)NewMainPort, offsetof( HwCopterControlData, MainPort), sizeof(uint8_t));
}
void HwCopterControlMainPortGet( uint8_t *NewMainPort )
{
	UAVObjGetDataField(HwCopterControlHandle(), (void*)NewMainPort, offsetof( HwCopterControlData, MainPort), sizeof(uint8_t));
}
void HwCopterControlFlexiPortSet( uint8_t *NewFlexiPort )
{
	UAVObjSetDataField(HwCopterControlHandle(), (void*)NewFlexiPort, offsetof( HwCopterControlData, FlexiPort), sizeof(uint8_t));
}
void HwCopterControlFlexiPortGet( uint8_t *NewFlexiPort )
{
	UAVObjGetDataField(HwCopterControlHandle(), (void*)NewFlexiPort, offsetof( HwCopterControlData, FlexiPort), sizeof(uint8_t));
}
void HwCopterControlUSB_HIDPortSet( uint8_t *NewUSB_HIDPort )
{
	UAVObjSetDataField(HwCopterControlHandle(), (void*)NewUSB_HIDPort, offsetof( HwCopterControlData, USB_HIDPort), sizeof(uint8_t));
}
void HwCopterControlUSB_HIDPortGet( uint8_t *NewUSB_HIDPort )
{
	UAVObjGetDataField(HwCopterControlHandle(), (void*)NewUSB_HIDPort, offsetof( HwCopterControlData, USB_HIDPort), sizeof(uint8_t));
}
void HwCopterControlUSB_VCPPortSet( uint8_t *NewUSB_VCPPort )
{
	UAVObjSetDataField(HwCopterControlHandle(), (void*)NewUSB_VCPPort, offsetof( HwCopterControlData, USB_VCPPort), sizeof(uint8_t));
}
void HwCopterControlUSB_VCPPortGet( uint8_t *NewUSB_VCPPort )
{
	UAVObjGetDataField(HwCopterControlHandle(), (void*)NewUSB_VCPPort, offsetof( HwCopterControlData, USB_VCPPort), sizeof(uint8_t));
}
void HwCopterControlDSMxBindSet( uint8_t *NewDSMxBind )
{
	UAVObjSetDataField(HwCopterControlHandle(), (void*)NewDSMxBind, offsetof( HwCopterControlData, DSMxBind), sizeof(uint8_t));
}
void HwCopterControlDSMxBindGet( uint8_t *NewDSMxBind )
{
	UAVObjGetDataField(HwCopterControlHandle(), (void*)NewDSMxBind, offsetof( HwCopterControlData, DSMxBind), sizeof(uint8_t));
}
void HwCopterControlGyroRangeSet( uint8_t *NewGyroRange )
{
	UAVObjSetDataField(HwCopterControlHandle(), (void*)NewGyroRange, offsetof( HwCopterControlData, GyroRange), sizeof(uint8_t));
}
void HwCopterControlGyroRangeGet( uint8_t *NewGyroRange )
{
	UAVObjGetDataField(HwCopterControlHandle(), (void*)NewGyroRange, offsetof( HwCopterControlData, GyroRange), sizeof(uint8_t));
}
void HwCopterControlAccelRangeSet( uint8_t *NewAccelRange )
{
	UAVObjSetDataField(HwCopterControlHandle(), (void*)NewAccelRange, offsetof( HwCopterControlData, AccelRange), sizeof(uint8_t));
}
void HwCopterControlAccelRangeGet( uint8_t *NewAccelRange )
{
	UAVObjGetDataField(HwCopterControlHandle(), (void*)NewAccelRange, offsetof( HwCopterControlData, AccelRange), sizeof(uint8_t));
}
void HwCopterControlMPU6000RateSet( uint8_t *NewMPU6000Rate )
{
	UAVObjSetDataField(HwCopterControlHandle(), (void*)NewMPU6000Rate, offsetof( HwCopterControlData, MPU6000Rate), sizeof(uint8_t));
}
void HwCopterControlMPU6000RateGet( uint8_t *NewMPU6000Rate )
{
	UAVObjGetDataField(HwCopterControlHandle(), (void*)NewMPU6000Rate, offsetof( HwCopterControlData, MPU6000Rate), sizeof(uint8_t));
}
void HwCopterControlMPU6000DLPFSet( uint8_t *NewMPU6000DLPF )
{
	UAVObjSetDataField(HwCopterControlHandle(), (void*)NewMPU6000DLPF, offsetof( HwCopterControlData, MPU6000DLPF), sizeof(uint8_t));
}
void HwCopterControlMPU6000DLPFGet( uint8_t *NewMPU6000DLPF )
{
	UAVObjGetDataField(HwCopterControlHandle(), (void*)NewMPU6000DLPF, offsetof( HwCopterControlData, MPU6000DLPF), sizeof(uint8_t));
}


/**
 * @}
 * @}
 */

