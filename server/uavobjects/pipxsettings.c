/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup PipXSettings PipXSettings
 * @brief PipXtreme configurations options.
 *
 * Autogenerated files and functions for PipXSettings Object
 * @{ 
 *
 * @file       pipxsettings.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Implementation of the PipXSettings object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: pipxsettings.xml. 
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
#include "pipxsettings.h"

// Private variables
static UAVObjHandle handle = NULL;

/**
 * Initialize object.
 * \return 0 Success
 * \return -1 Failure to initialize or -2 for already initialized
 */
int32_t PipXSettingsInitialize(void)
{
	// Don't set the handle to null if already registered
	if(UAVObjGetByID(PIPXSETTINGS_OBJID) != NULL)
		return -2;
	
	// Register object with the object manager
	handle = UAVObjRegister(PIPXSETTINGS_OBJID,
			PIPXSETTINGS_ISSINGLEINST, PIPXSETTINGS_ISSETTINGS, PIPXSETTINGS_NUMBYTES, &PipXSettingsSetDefaults);

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
void PipXSettingsSetDefaults(UAVObjHandle obj, uint16_t instId)
{
	PipXSettingsData data;
	UAVObjMetadata metadata;

	// Initialize object fields to their default values
	UAVObjGetInstanceData(obj, instId, &data);
	memset(&data, 0, sizeof(PipXSettingsData));
	data.PairID = 0;
	data.Frequency = 434000000;
	data.SendTimeout = 50;
	data.TelemetryConfig = 2;
	data.TelemetrySpeed = 5;
	data.FlexiConfig = 0;
	data.FlexiSpeed = 5;
	data.VCPConfig = 0;
	data.VCPSpeed = 5;
	data.RFSpeed = 6;
	data.MaxRFPower = 7;
	data.MinPacketSize = 50;
	data.FrequencyCalibration = 127;
	data.AESKey[0] = 0;
	data.AESKey[1] = 0;
	data.AESKey[2] = 0;
	data.AESKey[3] = 0;
	data.AESKey[4] = 0;
	data.AESKey[5] = 0;
	data.AESKey[6] = 0;
	data.AESKey[7] = 0;
	data.AESKey[8] = 0;
	data.AESKey[9] = 0;
	data.AESKey[10] = 0;
	data.AESKey[11] = 0;
	data.AESKey[12] = 0;
	data.AESKey[13] = 0;
	data.AESKey[14] = 0;
	data.AESKey[15] = 0;
	data.AESKey[16] = 0;
	data.AESKey[17] = 0;
	data.AESKey[18] = 0;
	data.AESKey[19] = 0;
	data.AESKey[20] = 0;
	data.AESKey[21] = 0;
	data.AESKey[22] = 0;
	data.AESKey[23] = 0;
	data.AESKey[24] = 0;
	data.AESKey[25] = 0;
	data.AESKey[26] = 0;
	data.AESKey[27] = 0;
	data.AESKey[28] = 0;
	data.AESKey[29] = 0;
	data.AESKey[30] = 0;
	data.AESKey[31] = 0;

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
UAVObjHandle PipXSettingsHandle()
{
	return handle;
}

/**
 * Get/Set object Functions
 */
void PipXSettingsPairIDSet( uint32_t *NewPairID )
{
	UAVObjSetDataField(PipXSettingsHandle(), (void*)NewPairID, offsetof( PipXSettingsData, PairID), sizeof(uint32_t));
}
void PipXSettingsPairIDGet( uint32_t *NewPairID )
{
	UAVObjGetDataField(PipXSettingsHandle(), (void*)NewPairID, offsetof( PipXSettingsData, PairID), sizeof(uint32_t));
}
void PipXSettingsFrequencySet( uint32_t *NewFrequency )
{
	UAVObjSetDataField(PipXSettingsHandle(), (void*)NewFrequency, offsetof( PipXSettingsData, Frequency), sizeof(uint32_t));
}
void PipXSettingsFrequencyGet( uint32_t *NewFrequency )
{
	UAVObjGetDataField(PipXSettingsHandle(), (void*)NewFrequency, offsetof( PipXSettingsData, Frequency), sizeof(uint32_t));
}
void PipXSettingsSendTimeoutSet( uint16_t *NewSendTimeout )
{
	UAVObjSetDataField(PipXSettingsHandle(), (void*)NewSendTimeout, offsetof( PipXSettingsData, SendTimeout), sizeof(uint16_t));
}
void PipXSettingsSendTimeoutGet( uint16_t *NewSendTimeout )
{
	UAVObjGetDataField(PipXSettingsHandle(), (void*)NewSendTimeout, offsetof( PipXSettingsData, SendTimeout), sizeof(uint16_t));
}
void PipXSettingsTelemetryConfigSet( uint8_t *NewTelemetryConfig )
{
	UAVObjSetDataField(PipXSettingsHandle(), (void*)NewTelemetryConfig, offsetof( PipXSettingsData, TelemetryConfig), sizeof(uint8_t));
}
void PipXSettingsTelemetryConfigGet( uint8_t *NewTelemetryConfig )
{
	UAVObjGetDataField(PipXSettingsHandle(), (void*)NewTelemetryConfig, offsetof( PipXSettingsData, TelemetryConfig), sizeof(uint8_t));
}
void PipXSettingsTelemetrySpeedSet( uint8_t *NewTelemetrySpeed )
{
	UAVObjSetDataField(PipXSettingsHandle(), (void*)NewTelemetrySpeed, offsetof( PipXSettingsData, TelemetrySpeed), sizeof(uint8_t));
}
void PipXSettingsTelemetrySpeedGet( uint8_t *NewTelemetrySpeed )
{
	UAVObjGetDataField(PipXSettingsHandle(), (void*)NewTelemetrySpeed, offsetof( PipXSettingsData, TelemetrySpeed), sizeof(uint8_t));
}
void PipXSettingsFlexiConfigSet( uint8_t *NewFlexiConfig )
{
	UAVObjSetDataField(PipXSettingsHandle(), (void*)NewFlexiConfig, offsetof( PipXSettingsData, FlexiConfig), sizeof(uint8_t));
}
void PipXSettingsFlexiConfigGet( uint8_t *NewFlexiConfig )
{
	UAVObjGetDataField(PipXSettingsHandle(), (void*)NewFlexiConfig, offsetof( PipXSettingsData, FlexiConfig), sizeof(uint8_t));
}
void PipXSettingsFlexiSpeedSet( uint8_t *NewFlexiSpeed )
{
	UAVObjSetDataField(PipXSettingsHandle(), (void*)NewFlexiSpeed, offsetof( PipXSettingsData, FlexiSpeed), sizeof(uint8_t));
}
void PipXSettingsFlexiSpeedGet( uint8_t *NewFlexiSpeed )
{
	UAVObjGetDataField(PipXSettingsHandle(), (void*)NewFlexiSpeed, offsetof( PipXSettingsData, FlexiSpeed), sizeof(uint8_t));
}
void PipXSettingsVCPConfigSet( uint8_t *NewVCPConfig )
{
	UAVObjSetDataField(PipXSettingsHandle(), (void*)NewVCPConfig, offsetof( PipXSettingsData, VCPConfig), sizeof(uint8_t));
}
void PipXSettingsVCPConfigGet( uint8_t *NewVCPConfig )
{
	UAVObjGetDataField(PipXSettingsHandle(), (void*)NewVCPConfig, offsetof( PipXSettingsData, VCPConfig), sizeof(uint8_t));
}
void PipXSettingsVCPSpeedSet( uint8_t *NewVCPSpeed )
{
	UAVObjSetDataField(PipXSettingsHandle(), (void*)NewVCPSpeed, offsetof( PipXSettingsData, VCPSpeed), sizeof(uint8_t));
}
void PipXSettingsVCPSpeedGet( uint8_t *NewVCPSpeed )
{
	UAVObjGetDataField(PipXSettingsHandle(), (void*)NewVCPSpeed, offsetof( PipXSettingsData, VCPSpeed), sizeof(uint8_t));
}
void PipXSettingsRFSpeedSet( uint8_t *NewRFSpeed )
{
	UAVObjSetDataField(PipXSettingsHandle(), (void*)NewRFSpeed, offsetof( PipXSettingsData, RFSpeed), sizeof(uint8_t));
}
void PipXSettingsRFSpeedGet( uint8_t *NewRFSpeed )
{
	UAVObjGetDataField(PipXSettingsHandle(), (void*)NewRFSpeed, offsetof( PipXSettingsData, RFSpeed), sizeof(uint8_t));
}
void PipXSettingsMaxRFPowerSet( uint8_t *NewMaxRFPower )
{
	UAVObjSetDataField(PipXSettingsHandle(), (void*)NewMaxRFPower, offsetof( PipXSettingsData, MaxRFPower), sizeof(uint8_t));
}
void PipXSettingsMaxRFPowerGet( uint8_t *NewMaxRFPower )
{
	UAVObjGetDataField(PipXSettingsHandle(), (void*)NewMaxRFPower, offsetof( PipXSettingsData, MaxRFPower), sizeof(uint8_t));
}
void PipXSettingsMinPacketSizeSet( uint8_t *NewMinPacketSize )
{
	UAVObjSetDataField(PipXSettingsHandle(), (void*)NewMinPacketSize, offsetof( PipXSettingsData, MinPacketSize), sizeof(uint8_t));
}
void PipXSettingsMinPacketSizeGet( uint8_t *NewMinPacketSize )
{
	UAVObjGetDataField(PipXSettingsHandle(), (void*)NewMinPacketSize, offsetof( PipXSettingsData, MinPacketSize), sizeof(uint8_t));
}
void PipXSettingsFrequencyCalibrationSet( uint8_t *NewFrequencyCalibration )
{
	UAVObjSetDataField(PipXSettingsHandle(), (void*)NewFrequencyCalibration, offsetof( PipXSettingsData, FrequencyCalibration), sizeof(uint8_t));
}
void PipXSettingsFrequencyCalibrationGet( uint8_t *NewFrequencyCalibration )
{
	UAVObjGetDataField(PipXSettingsHandle(), (void*)NewFrequencyCalibration, offsetof( PipXSettingsData, FrequencyCalibration), sizeof(uint8_t));
}
void PipXSettingsAESKeySet( uint8_t *NewAESKey )
{
	UAVObjSetDataField(PipXSettingsHandle(), (void*)NewAESKey, offsetof( PipXSettingsData, AESKey), 32*sizeof(uint8_t));
}
void PipXSettingsAESKeyGet( uint8_t *NewAESKey )
{
	UAVObjGetDataField(PipXSettingsHandle(), (void*)NewAESKey, offsetof( PipXSettingsData, AESKey), 32*sizeof(uint8_t));
}


/**
 * @}
 */
