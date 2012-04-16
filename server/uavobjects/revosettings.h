/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup RevoSettings RevoSettings 
 * @brief Settings for the revo to control the algorithm and what is updated
 *
 * Autogenerated files and functions for RevoSettings Object
 
 * @{ 
 *
 * @file       revosettings.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Implementation of the RevoSettings object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: revosettings.xml. 
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

#ifndef REVOSETTINGS_H
#define REVOSETTINGS_H

// Object constants
#define REVOSETTINGS_OBJID 0xE2DA70EA
#define REVOSETTINGS_NAME "RevoSettings"
#define REVOSETTINGS_METANAME "RevoSettingsMeta"
#define REVOSETTINGS_ISSINGLEINST 1
#define REVOSETTINGS_ISSETTINGS 1
#define REVOSETTINGS_NUMBYTES sizeof(RevoSettingsData)

// Object access macros
/**
 * @function RevoSettingsGet(dataOut)
 * @brief Populate a RevoSettingsData object
 * @param[out] dataOut 
 */
#define RevoSettingsGet(dataOut) UAVObjGetData(RevoSettingsHandle(), dataOut)
#define RevoSettingsSet(dataIn) UAVObjSetData(RevoSettingsHandle(), dataIn)
#define RevoSettingsInstGet(instId, dataOut) UAVObjGetInstanceData(RevoSettingsHandle(), instId, dataOut)
#define RevoSettingsInstSet(instId, dataIn) UAVObjSetInstanceData(RevoSettingsHandle(), instId, dataIn)
#define RevoSettingsConnectQueue(queue) UAVObjConnectQueue(RevoSettingsHandle(), queue, EV_MASK_ALL_UPDATES)
#define RevoSettingsConnectCallback(cb) UAVObjConnectCallback(RevoSettingsHandle(), cb, EV_MASK_ALL_UPDATES)
#define RevoSettingsCreateInstance() UAVObjCreateInstance(RevoSettingsHandle(),&RevoSettingsSetDefaults)
#define RevoSettingsRequestUpdate() UAVObjRequestUpdate(RevoSettingsHandle())
#define RevoSettingsRequestInstUpdate(instId) UAVObjRequestInstanceUpdate(RevoSettingsHandle(), instId)
#define RevoSettingsUpdated() UAVObjUpdated(RevoSettingsHandle())
#define RevoSettingsInstUpdated(instId) UAVObjUpdated(RevoSettingsHandle(), instId)
#define RevoSettingsGetMetadata(dataOut) UAVObjGetMetadata(RevoSettingsHandle(), dataOut)
#define RevoSettingsSetMetadata(dataIn) UAVObjSetMetadata(RevoSettingsHandle(), dataIn)
#define RevoSettingsReadOnly() UAVObjReadOnly(RevoSettingsHandle())

// Object data
typedef struct {
    uint8_t FusionAlgorithm;

} __attribute__((packed)) RevoSettingsData;

// Field information
// Field FusionAlgorithm information
/* Enumeration options for field FusionAlgorithm */
typedef enum { REVOSETTINGS_FUSIONALGORITHM_COMPLIMENTARY=0, REVOSETTINGS_FUSIONALGORITHM_INSINDOOR=1, REVOSETTINGS_FUSIONALGORITHM_INSOUTDOOR=2 } RevoSettingsFusionAlgorithmOptions;


// Generic interface functions
int32_t RevoSettingsInitialize();
UAVObjHandle RevoSettingsHandle();
void RevoSettingsSetDefaults(UAVObjHandle obj, uint16_t instId);

// set/Get functions
extern void RevoSettingsFusionAlgorithmSet( uint8_t *NewFusionAlgorithm );
extern void RevoSettingsFusionAlgorithmGet( uint8_t *NewFusionAlgorithm );


#endif // REVOSETTINGS_H

/**
 * @}
 * @}
 */
