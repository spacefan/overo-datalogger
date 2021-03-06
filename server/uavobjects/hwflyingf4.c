/**
 ******************************************************************************
 * @addtogroup TauLabsCore Tau Labs Core components
 * @{
 * @addtogroup UAVObjects UAVObject set for this firmware
 * @{
 *
 * @file       hwflyingf4.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     Tau Labs, http://taulabs.org, Copyright (C) 2012-2015
 * @brief      Implementation of the HwFlyingF4 object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: hwflyingf4.xml. 
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
#include "hwflyingf4.h"

// Private variables
static UAVObjHandle handle = NULL;

/**
 * Initialize object.
 * \return 0 Success
 * \return -1 Failure to initialize or -2 for already initialized
 */
int32_t HwFlyingF4Initialize(void)
{
	// Don't set the handle to null if already registered
	if(UAVObjGetByID(HWFLYINGF4_OBJID) != NULL)
		return -2;
	
	// Register object with the object manager
	handle = UAVObjRegister(HWFLYINGF4_OBJID,
			HWFLYINGF4_ISSINGLEINST, HWFLYINGF4_ISSETTINGS, HWFLYINGF4_NUMBYTES, &HwFlyingF4SetDefaults);

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
void HwFlyingF4SetDefaults(UAVObjHandle obj, uint16_t instId)
{
	HwFlyingF4Data data;

	// Initialize object fields to their default values
	UAVObjGetInstanceData(obj, instId, &data);
	memset(&data, 0, sizeof(HwFlyingF4Data));
	data.RcvrPort = 1;
	data.Uart1 = 0;
	data.Uart2 = 0;
	data.Uart3 = 0;
	data.Uart4 = 0;
	data.Uart5 = 0;
	data.USB_HIDPort = 0;
	data.USB_VCPPort = 4;
	data.DSMxMode = 0;
	data.GyroRange = 1;
	data.AccelRange = 2;
	data.MPU6050Rate = 3;
	data.MPU6050DLPF = 0;
	data.Magnetometer = 0;
	data.ExtMagOrientation = 0;

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
UAVObjHandle HwFlyingF4Handle()
{
	return handle;
}

/**
 * Get/Set object Functions
 */
void HwFlyingF4RcvrPortSet( uint8_t *NewRcvrPort )
{
	UAVObjSetDataField(HwFlyingF4Handle(), (void*)NewRcvrPort, offsetof( HwFlyingF4Data, RcvrPort), sizeof(uint8_t));
}
void HwFlyingF4RcvrPortGet( uint8_t *NewRcvrPort )
{
	UAVObjGetDataField(HwFlyingF4Handle(), (void*)NewRcvrPort, offsetof( HwFlyingF4Data, RcvrPort), sizeof(uint8_t));
}
void HwFlyingF4Uart1Set( uint8_t *NewUart1 )
{
	UAVObjSetDataField(HwFlyingF4Handle(), (void*)NewUart1, offsetof( HwFlyingF4Data, Uart1), sizeof(uint8_t));
}
void HwFlyingF4Uart1Get( uint8_t *NewUart1 )
{
	UAVObjGetDataField(HwFlyingF4Handle(), (void*)NewUart1, offsetof( HwFlyingF4Data, Uart1), sizeof(uint8_t));
}
void HwFlyingF4Uart2Set( uint8_t *NewUart2 )
{
	UAVObjSetDataField(HwFlyingF4Handle(), (void*)NewUart2, offsetof( HwFlyingF4Data, Uart2), sizeof(uint8_t));
}
void HwFlyingF4Uart2Get( uint8_t *NewUart2 )
{
	UAVObjGetDataField(HwFlyingF4Handle(), (void*)NewUart2, offsetof( HwFlyingF4Data, Uart2), sizeof(uint8_t));
}
void HwFlyingF4Uart3Set( uint8_t *NewUart3 )
{
	UAVObjSetDataField(HwFlyingF4Handle(), (void*)NewUart3, offsetof( HwFlyingF4Data, Uart3), sizeof(uint8_t));
}
void HwFlyingF4Uart3Get( uint8_t *NewUart3 )
{
	UAVObjGetDataField(HwFlyingF4Handle(), (void*)NewUart3, offsetof( HwFlyingF4Data, Uart3), sizeof(uint8_t));
}
void HwFlyingF4Uart4Set( uint8_t *NewUart4 )
{
	UAVObjSetDataField(HwFlyingF4Handle(), (void*)NewUart4, offsetof( HwFlyingF4Data, Uart4), sizeof(uint8_t));
}
void HwFlyingF4Uart4Get( uint8_t *NewUart4 )
{
	UAVObjGetDataField(HwFlyingF4Handle(), (void*)NewUart4, offsetof( HwFlyingF4Data, Uart4), sizeof(uint8_t));
}
void HwFlyingF4Uart5Set( uint8_t *NewUart5 )
{
	UAVObjSetDataField(HwFlyingF4Handle(), (void*)NewUart5, offsetof( HwFlyingF4Data, Uart5), sizeof(uint8_t));
}
void HwFlyingF4Uart5Get( uint8_t *NewUart5 )
{
	UAVObjGetDataField(HwFlyingF4Handle(), (void*)NewUart5, offsetof( HwFlyingF4Data, Uart5), sizeof(uint8_t));
}
void HwFlyingF4USB_HIDPortSet( uint8_t *NewUSB_HIDPort )
{
	UAVObjSetDataField(HwFlyingF4Handle(), (void*)NewUSB_HIDPort, offsetof( HwFlyingF4Data, USB_HIDPort), sizeof(uint8_t));
}
void HwFlyingF4USB_HIDPortGet( uint8_t *NewUSB_HIDPort )
{
	UAVObjGetDataField(HwFlyingF4Handle(), (void*)NewUSB_HIDPort, offsetof( HwFlyingF4Data, USB_HIDPort), sizeof(uint8_t));
}
void HwFlyingF4USB_VCPPortSet( uint8_t *NewUSB_VCPPort )
{
	UAVObjSetDataField(HwFlyingF4Handle(), (void*)NewUSB_VCPPort, offsetof( HwFlyingF4Data, USB_VCPPort), sizeof(uint8_t));
}
void HwFlyingF4USB_VCPPortGet( uint8_t *NewUSB_VCPPort )
{
	UAVObjGetDataField(HwFlyingF4Handle(), (void*)NewUSB_VCPPort, offsetof( HwFlyingF4Data, USB_VCPPort), sizeof(uint8_t));
}
void HwFlyingF4DSMxModeSet( uint8_t *NewDSMxMode )
{
	UAVObjSetDataField(HwFlyingF4Handle(), (void*)NewDSMxMode, offsetof( HwFlyingF4Data, DSMxMode), sizeof(uint8_t));
}
void HwFlyingF4DSMxModeGet( uint8_t *NewDSMxMode )
{
	UAVObjGetDataField(HwFlyingF4Handle(), (void*)NewDSMxMode, offsetof( HwFlyingF4Data, DSMxMode), sizeof(uint8_t));
}
void HwFlyingF4GyroRangeSet( uint8_t *NewGyroRange )
{
	UAVObjSetDataField(HwFlyingF4Handle(), (void*)NewGyroRange, offsetof( HwFlyingF4Data, GyroRange), sizeof(uint8_t));
}
void HwFlyingF4GyroRangeGet( uint8_t *NewGyroRange )
{
	UAVObjGetDataField(HwFlyingF4Handle(), (void*)NewGyroRange, offsetof( HwFlyingF4Data, GyroRange), sizeof(uint8_t));
}
void HwFlyingF4AccelRangeSet( uint8_t *NewAccelRange )
{
	UAVObjSetDataField(HwFlyingF4Handle(), (void*)NewAccelRange, offsetof( HwFlyingF4Data, AccelRange), sizeof(uint8_t));
}
void HwFlyingF4AccelRangeGet( uint8_t *NewAccelRange )
{
	UAVObjGetDataField(HwFlyingF4Handle(), (void*)NewAccelRange, offsetof( HwFlyingF4Data, AccelRange), sizeof(uint8_t));
}
void HwFlyingF4MPU6050RateSet( uint8_t *NewMPU6050Rate )
{
	UAVObjSetDataField(HwFlyingF4Handle(), (void*)NewMPU6050Rate, offsetof( HwFlyingF4Data, MPU6050Rate), sizeof(uint8_t));
}
void HwFlyingF4MPU6050RateGet( uint8_t *NewMPU6050Rate )
{
	UAVObjGetDataField(HwFlyingF4Handle(), (void*)NewMPU6050Rate, offsetof( HwFlyingF4Data, MPU6050Rate), sizeof(uint8_t));
}
void HwFlyingF4MPU6050DLPFSet( uint8_t *NewMPU6050DLPF )
{
	UAVObjSetDataField(HwFlyingF4Handle(), (void*)NewMPU6050DLPF, offsetof( HwFlyingF4Data, MPU6050DLPF), sizeof(uint8_t));
}
void HwFlyingF4MPU6050DLPFGet( uint8_t *NewMPU6050DLPF )
{
	UAVObjGetDataField(HwFlyingF4Handle(), (void*)NewMPU6050DLPF, offsetof( HwFlyingF4Data, MPU6050DLPF), sizeof(uint8_t));
}
void HwFlyingF4MagnetometerSet( uint8_t *NewMagnetometer )
{
	UAVObjSetDataField(HwFlyingF4Handle(), (void*)NewMagnetometer, offsetof( HwFlyingF4Data, Magnetometer), sizeof(uint8_t));
}
void HwFlyingF4MagnetometerGet( uint8_t *NewMagnetometer )
{
	UAVObjGetDataField(HwFlyingF4Handle(), (void*)NewMagnetometer, offsetof( HwFlyingF4Data, Magnetometer), sizeof(uint8_t));
}
void HwFlyingF4ExtMagOrientationSet( uint8_t *NewExtMagOrientation )
{
	UAVObjSetDataField(HwFlyingF4Handle(), (void*)NewExtMagOrientation, offsetof( HwFlyingF4Data, ExtMagOrientation), sizeof(uint8_t));
}
void HwFlyingF4ExtMagOrientationGet( uint8_t *NewExtMagOrientation )
{
	UAVObjGetDataField(HwFlyingF4Handle(), (void*)NewExtMagOrientation, offsetof( HwFlyingF4Data, ExtMagOrientation), sizeof(uint8_t));
}


/**
 * @}
 * @}
 */

