/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup FlightBatterySettings FlightBatterySettings 
 * @brief Flight Battery configuration.
 *
 * Autogenerated files and functions for FlightBatterySettings Object
 
 * @{ 
 *
 * @file       flightbatterysettings.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Implementation of the FlightBatterySettings object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: flightbatterysettings.xml. 
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

#ifndef FLIGHTBATTERYSETTINGS_H
#define FLIGHTBATTERYSETTINGS_H

// Object constants
#define FLIGHTBATTERYSETTINGS_OBJID 0x94AC6AD2
#define FLIGHTBATTERYSETTINGS_ISSINGLEINST 1
#define FLIGHTBATTERYSETTINGS_ISSETTINGS 1
#define FLIGHTBATTERYSETTINGS_NUMBYTES sizeof(FlightBatterySettingsData)

// Object access macros
/**
 * @function FlightBatterySettingsGet(dataOut)
 * @brief Populate a FlightBatterySettingsData object
 * @param[out] dataOut 
 */
#define FlightBatterySettingsGet(dataOut) UAVObjGetData(FlightBatterySettingsHandle(), dataOut)
#define FlightBatterySettingsSet(dataIn) UAVObjSetData(FlightBatterySettingsHandle(), dataIn)
#define FlightBatterySettingsInstGet(instId, dataOut) UAVObjGetInstanceData(FlightBatterySettingsHandle(), instId, dataOut)
#define FlightBatterySettingsInstSet(instId, dataIn) UAVObjSetInstanceData(FlightBatterySettingsHandle(), instId, dataIn)
#define FlightBatterySettingsConnectQueue(queue) UAVObjConnectQueue(FlightBatterySettingsHandle(), queue, EV_MASK_ALL_UPDATES)
#define FlightBatterySettingsConnectCallback(cb) UAVObjConnectCallback(FlightBatterySettingsHandle(), cb, EV_MASK_ALL_UPDATES)
#define FlightBatterySettingsCreateInstance() UAVObjCreateInstance(FlightBatterySettingsHandle(),&FlightBatterySettingsSetDefaults)
#define FlightBatterySettingsRequestUpdate() UAVObjRequestUpdate(FlightBatterySettingsHandle())
#define FlightBatterySettingsRequestInstUpdate(instId) UAVObjRequestInstanceUpdate(FlightBatterySettingsHandle(), instId)
#define FlightBatterySettingsUpdated() UAVObjUpdated(FlightBatterySettingsHandle())
#define FlightBatterySettingsInstUpdated(instId) UAVObjUpdated(FlightBatterySettingsHandle(), instId)
#define FlightBatterySettingsGetMetadata(dataOut) UAVObjGetMetadata(FlightBatterySettingsHandle(), dataOut)
#define FlightBatterySettingsSetMetadata(dataIn) UAVObjSetMetadata(FlightBatterySettingsHandle(), dataIn)
#define FlightBatterySettingsReadOnly() UAVObjReadOnly(FlightBatterySettingsHandle())

// Object data
typedef struct {
    uint32_t Capacity;
    float VoltageThresholds[2];
    float SensorCalibrations[2];
    uint8_t Type;
    uint8_t NbCells;
    uint8_t SensorType[3];

} __attribute__((packed)) FlightBatterySettingsData;

// Field information
// Field Capacity information
// Field VoltageThresholds information
/* Array element names for field VoltageThresholds */
typedef enum { FLIGHTBATTERYSETTINGS_VOLTAGETHRESHOLDS_WARNING=0, FLIGHTBATTERYSETTINGS_VOLTAGETHRESHOLDS_ALARM=1 } FlightBatterySettingsVoltageThresholdsElem;
/* Number of elements for field VoltageThresholds */
#define FLIGHTBATTERYSETTINGS_VOLTAGETHRESHOLDS_NUMELEM 2
// Field SensorCalibrations information
/* Array element names for field SensorCalibrations */
typedef enum { FLIGHTBATTERYSETTINGS_SENSORCALIBRATIONS_VOLTAGEFACTOR=0, FLIGHTBATTERYSETTINGS_SENSORCALIBRATIONS_CURRENTFACTOR=1 } FlightBatterySettingsSensorCalibrationsElem;
/* Number of elements for field SensorCalibrations */
#define FLIGHTBATTERYSETTINGS_SENSORCALIBRATIONS_NUMELEM 2
// Field Type information
/* Enumeration options for field Type */
typedef enum { FLIGHTBATTERYSETTINGS_TYPE_LIPO=0, FLIGHTBATTERYSETTINGS_TYPE_A123=1, FLIGHTBATTERYSETTINGS_TYPE_LICO=2, FLIGHTBATTERYSETTINGS_TYPE_LIFESO4=3, FLIGHTBATTERYSETTINGS_TYPE_NONE=4 } FlightBatterySettingsTypeOptions;
// Field NbCells information
// Field SensorType information
/* Enumeration options for field SensorType */
typedef enum { FLIGHTBATTERYSETTINGS_SENSORTYPE_DISABLED=0, FLIGHTBATTERYSETTINGS_SENSORTYPE_ENABLED=1 } FlightBatterySettingsSensorTypeOptions;
/* Array element names for field SensorType */
typedef enum { FLIGHTBATTERYSETTINGS_SENSORTYPE_BATTERYCURRENT=0, FLIGHTBATTERYSETTINGS_SENSORTYPE_BATTERYVOLTAGE=1, FLIGHTBATTERYSETTINGS_SENSORTYPE_BOARDVOLTAGE=2 } FlightBatterySettingsSensorTypeElem;
/* Number of elements for field SensorType */
#define FLIGHTBATTERYSETTINGS_SENSORTYPE_NUMELEM 3


// Generic interface functions
int32_t FlightBatterySettingsInitialize();
UAVObjHandle FlightBatterySettingsHandle();
void FlightBatterySettingsSetDefaults(UAVObjHandle obj, uint16_t instId);

// set/Get functions
extern void FlightBatterySettingsCapacitySet( uint32_t *NewCapacity );
extern void FlightBatterySettingsCapacityGet( uint32_t *NewCapacity );
extern void FlightBatterySettingsVoltageThresholdsSet( float *NewVoltageThresholds );
extern void FlightBatterySettingsVoltageThresholdsGet( float *NewVoltageThresholds );
extern void FlightBatterySettingsSensorCalibrationsSet( float *NewSensorCalibrations );
extern void FlightBatterySettingsSensorCalibrationsGet( float *NewSensorCalibrations );
extern void FlightBatterySettingsTypeSet( uint8_t *NewType );
extern void FlightBatterySettingsTypeGet( uint8_t *NewType );
extern void FlightBatterySettingsNbCellsSet( uint8_t *NewNbCells );
extern void FlightBatterySettingsNbCellsGet( uint8_t *NewNbCells );
extern void FlightBatterySettingsSensorTypeSet( uint8_t *NewSensorType );
extern void FlightBatterySettingsSensorTypeGet( uint8_t *NewSensorType );


#endif // FLIGHTBATTERYSETTINGS_H

/**
 * @}
 * @}
 */
