/**
 ******************************************************************************
 * @addtogroup TauLabsCore Tau Labs Core components
 * @{
 * @addtogroup UAVObjects UAVObject set for this firmware
 * @{
 *
 * @file       hwsparky2.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     Tau Labs, http://taulabs.org, Copyright (C) 2012-2013
 * @brief      Implementation of the HwSparky2 object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: hwsparky2.xml. 
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
#include "hwsparky2.h"

// Private variables
static UAVObjHandle handle = NULL;

/**
 * Initialize object.
 * \return 0 Success
 * \return -1 Failure to initialize or -2 for already initialized
 */
int32_t HwSparky2Initialize(void)
{
	// Don't set the handle to null if already registered
	if(UAVObjGetByID(HWSPARKY2_OBJID) != NULL)
		return -2;
	
	// Register object with the object manager
	handle = UAVObjRegister(HWSPARKY2_OBJID,
			HWSPARKY2_ISSINGLEINST, HWSPARKY2_ISSETTINGS, HWSPARKY2_NUMBYTES, &HwSparky2SetDefaults);

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
void HwSparky2SetDefaults(UAVObjHandle obj, uint16_t instId)
{
	HwSparky2Data data;
	UAVObjMetadata metadata;

	// Initialize object fields to their default values
	UAVObjGetInstanceData(obj, instId, &data);
	memset(&data, 0, sizeof(HwSparky2Data));
	data.RcvrPort = -1;
	data.MainPort = 1;
	data.FlexiPort = 0;
	data.RadioPort = 0;
	data.USB_HIDPort = 0;
	data.USB_VCPPort = 4;
	data.DSMxBind = 0;
	data.GyroRange = 1;
	data.AccelRange = 2;
	data.MPU9250Rate = 3;
	data.MPU9250DLPF = 0;

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
UAVObjHandle HwSparky2Handle()
{
	return handle;
}

/**
 * Get/Set object Functions
 */
void HwSparky2RcvrPortSet( uint8_t *NewRcvrPort )
{
	UAVObjSetDataField(HwSparky2Handle(), (void*)NewRcvrPort, offsetof( HwSparky2Data, RcvrPort), sizeof(uint8_t));
}
void HwSparky2RcvrPortGet( uint8_t *NewRcvrPort )
{
	UAVObjGetDataField(HwSparky2Handle(), (void*)NewRcvrPort, offsetof( HwSparky2Data, RcvrPort), sizeof(uint8_t));
}
void HwSparky2MainPortSet( uint8_t *NewMainPort )
{
	UAVObjSetDataField(HwSparky2Handle(), (void*)NewMainPort, offsetof( HwSparky2Data, MainPort), sizeof(uint8_t));
}
void HwSparky2MainPortGet( uint8_t *NewMainPort )
{
	UAVObjGetDataField(HwSparky2Handle(), (void*)NewMainPort, offsetof( HwSparky2Data, MainPort), sizeof(uint8_t));
}
void HwSparky2FlexiPortSet( uint8_t *NewFlexiPort )
{
	UAVObjSetDataField(HwSparky2Handle(), (void*)NewFlexiPort, offsetof( HwSparky2Data, FlexiPort), sizeof(uint8_t));
}
void HwSparky2FlexiPortGet( uint8_t *NewFlexiPort )
{
	UAVObjGetDataField(HwSparky2Handle(), (void*)NewFlexiPort, offsetof( HwSparky2Data, FlexiPort), sizeof(uint8_t));
}
void HwSparky2RadioPortSet( uint8_t *NewRadioPort )
{
	UAVObjSetDataField(HwSparky2Handle(), (void*)NewRadioPort, offsetof( HwSparky2Data, RadioPort), sizeof(uint8_t));
}
void HwSparky2RadioPortGet( uint8_t *NewRadioPort )
{
	UAVObjGetDataField(HwSparky2Handle(), (void*)NewRadioPort, offsetof( HwSparky2Data, RadioPort), sizeof(uint8_t));
}
void HwSparky2USB_HIDPortSet( uint8_t *NewUSB_HIDPort )
{
	UAVObjSetDataField(HwSparky2Handle(), (void*)NewUSB_HIDPort, offsetof( HwSparky2Data, USB_HIDPort), sizeof(uint8_t));
}
void HwSparky2USB_HIDPortGet( uint8_t *NewUSB_HIDPort )
{
	UAVObjGetDataField(HwSparky2Handle(), (void*)NewUSB_HIDPort, offsetof( HwSparky2Data, USB_HIDPort), sizeof(uint8_t));
}
void HwSparky2USB_VCPPortSet( uint8_t *NewUSB_VCPPort )
{
	UAVObjSetDataField(HwSparky2Handle(), (void*)NewUSB_VCPPort, offsetof( HwSparky2Data, USB_VCPPort), sizeof(uint8_t));
}
void HwSparky2USB_VCPPortGet( uint8_t *NewUSB_VCPPort )
{
	UAVObjGetDataField(HwSparky2Handle(), (void*)NewUSB_VCPPort, offsetof( HwSparky2Data, USB_VCPPort), sizeof(uint8_t));
}
void HwSparky2DSMxBindSet( uint8_t *NewDSMxBind )
{
	UAVObjSetDataField(HwSparky2Handle(), (void*)NewDSMxBind, offsetof( HwSparky2Data, DSMxBind), sizeof(uint8_t));
}
void HwSparky2DSMxBindGet( uint8_t *NewDSMxBind )
{
	UAVObjGetDataField(HwSparky2Handle(), (void*)NewDSMxBind, offsetof( HwSparky2Data, DSMxBind), sizeof(uint8_t));
}
void HwSparky2GyroRangeSet( uint8_t *NewGyroRange )
{
	UAVObjSetDataField(HwSparky2Handle(), (void*)NewGyroRange, offsetof( HwSparky2Data, GyroRange), sizeof(uint8_t));
}
void HwSparky2GyroRangeGet( uint8_t *NewGyroRange )
{
	UAVObjGetDataField(HwSparky2Handle(), (void*)NewGyroRange, offsetof( HwSparky2Data, GyroRange), sizeof(uint8_t));
}
void HwSparky2AccelRangeSet( uint8_t *NewAccelRange )
{
	UAVObjSetDataField(HwSparky2Handle(), (void*)NewAccelRange, offsetof( HwSparky2Data, AccelRange), sizeof(uint8_t));
}
void HwSparky2AccelRangeGet( uint8_t *NewAccelRange )
{
	UAVObjGetDataField(HwSparky2Handle(), (void*)NewAccelRange, offsetof( HwSparky2Data, AccelRange), sizeof(uint8_t));
}
void HwSparky2MPU9250RateSet( uint8_t *NewMPU9250Rate )
{
	UAVObjSetDataField(HwSparky2Handle(), (void*)NewMPU9250Rate, offsetof( HwSparky2Data, MPU9250Rate), sizeof(uint8_t));
}
void HwSparky2MPU9250RateGet( uint8_t *NewMPU9250Rate )
{
	UAVObjGetDataField(HwSparky2Handle(), (void*)NewMPU9250Rate, offsetof( HwSparky2Data, MPU9250Rate), sizeof(uint8_t));
}
void HwSparky2MPU9250DLPFSet( uint8_t *NewMPU9250DLPF )
{
	UAVObjSetDataField(HwSparky2Handle(), (void*)NewMPU9250DLPF, offsetof( HwSparky2Data, MPU9250DLPF), sizeof(uint8_t));
}
void HwSparky2MPU9250DLPFGet( uint8_t *NewMPU9250DLPF )
{
	UAVObjGetDataField(HwSparky2Handle(), (void*)NewMPU9250DLPF, offsetof( HwSparky2Data, MPU9250DLPF), sizeof(uint8_t));
}


/**
 * @}
 * @}
 */
