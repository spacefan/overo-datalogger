/**
 ******************************************************************************
 * @addtogroup UAVObjects UAVObject set for this firmware
 * @{
 * @addtogroup HoTTSettings HoTTSettings
 * @brief Settings for the @ref HoTT Telemetry Module
 *
 *
 * @file       hottsettings.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     Tau Labs, http://taulabs.org, Copyright (C) 2012-2013
 * @brief      Include files for the HoTTSettings object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: hottsettings.xml. 
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

#ifndef HOTTSETTINGS_H
#define HOTTSETTINGS_H

// Object constants
#define HOTTSETTINGS_OBJID 0x6CBC1102
#define HOTTSETTINGS_ISSINGLEINST 1
#define HOTTSETTINGS_ISSETTINGS 1
#define HOTTSETTINGS_NUMBYTES 141

// Generic interface functions
int32_t HoTTSettingsInitialize();
UAVObjHandle HoTTSettingsHandle();
void HoTTSettingsSetDefaults(UAVObjHandle obj, uint16_t instId);

// Object data
typedef struct {
    float Limit[27];
    uint8_t Sensor[5];
    uint8_t Warning[28];

} __attribute__((packed)) __attribute__((aligned(4))) HoTTSettingsData;

// Typesafe Object access functions
/**
 * @function HoTTSettingsGet(dataOut)
 * @brief Populate a HoTTSettingsData object
 * @param[out] dataOut 
 */
static inline int32_t HoTTSettingsGet(HoTTSettingsData *dataOut) { return UAVObjGetData(HoTTSettingsHandle(), dataOut); }

static inline int32_t HoTTSettingsSet(const HoTTSettingsData *dataIn) { return UAVObjSetData(HoTTSettingsHandle(), dataIn); }

static inline int32_t HoTTSettingsInstGet(uint16_t instId, HoTTSettingsData *dataOut) { return UAVObjGetInstanceData(HoTTSettingsHandle(), instId, dataOut); }

static inline int32_t HoTTSettingsInstSet(uint16_t instId, const HoTTSettingsData *dataIn) { return UAVObjSetInstanceData(HoTTSettingsHandle(), instId, dataIn); }

static inline int32_t HoTTSettingsConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(HoTTSettingsHandle(), queue, EV_MASK_ALL_UPDATES); }

static inline int32_t HoTTSettingsConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(HoTTSettingsHandle(), cb, EV_MASK_ALL_UPDATES); }

static inline uint16_t HoTTSettingsCreateInstance() { return UAVObjCreateInstance(HoTTSettingsHandle(), &HoTTSettingsSetDefaults); }

static inline void HoTTSettingsRequestUpdate() { UAVObjRequestUpdate(HoTTSettingsHandle()); }

static inline void HoTTSettingsRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(HoTTSettingsHandle(), instId); }

static inline void HoTTSettingsUpdated() { UAVObjUpdated(HoTTSettingsHandle()); }

static inline void HoTTSettingsInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(HoTTSettingsHandle(), instId); }

static inline int32_t HoTTSettingsGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(HoTTSettingsHandle(), dataOut); }

static inline int32_t HoTTSettingsSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(HoTTSettingsHandle(), dataIn); }

static inline int8_t HoTTSettingsReadOnly() { return UAVObjReadOnly(HoTTSettingsHandle()); }

static inline uint16_t HoTTSettingsGetNumInstances(){ return UAVObjGetNumInstances(HoTTSettingsHandle()); }

static inline uint32_t HoTTSettingsGetNumBytes(){ return UAVObjGetNumBytes(HoTTSettingsHandle()); }

// Field information
// Field Limit information
/* Array element names for field Limit */
typedef enum { HOTTSETTINGS_LIMIT_MINSPEED=0, HOTTSETTINGS_LIMIT_MAXSPEED=1, HOTTSETTINGS_LIMIT_NEGDIFFERENCE1=2, HOTTSETTINGS_LIMIT_POSDIFFERENCE1=3, HOTTSETTINGS_LIMIT_NEGDIFFERENCE2=4, HOTTSETTINGS_LIMIT_POSDIFFERENCE2=5, HOTTSETTINGS_LIMIT_MINHEIGHT=6, HOTTSETTINGS_LIMIT_MAXHEIGHT=7, HOTTSETTINGS_LIMIT_MAXDISTANCE=8, HOTTSETTINGS_LIMIT_MINPOWERVOLTAGE=9, HOTTSETTINGS_LIMIT_MAXPOWERVOLTAGE=10, HOTTSETTINGS_LIMIT_MINSENSOR1VOLTAGE=11, HOTTSETTINGS_LIMIT_MAXSENSOR1VOLTAGE=12, HOTTSETTINGS_LIMIT_MINSENSOR2VOLTAGE=13, HOTTSETTINGS_LIMIT_MAXSENSOR2VOLTAGE=14, HOTTSETTINGS_LIMIT_MINCELLVOLTAGE=15, HOTTSETTINGS_LIMIT_MAXCURRENT=16, HOTTSETTINGS_LIMIT_MAXUSEDCAPACITY=17, HOTTSETTINGS_LIMIT_MINSENSOR1TEMP=18, HOTTSETTINGS_LIMIT_MAXSENSOR1TEMP=19, HOTTSETTINGS_LIMIT_MINSENSOR2TEMP=20, HOTTSETTINGS_LIMIT_MAXSENSOR2TEMP=21, HOTTSETTINGS_LIMIT_MAXSERVOTEMP=22, HOTTSETTINGS_LIMIT_MINRPM=23, HOTTSETTINGS_LIMIT_MAXRPM=24, HOTTSETTINGS_LIMIT_MINFUEL=25, HOTTSETTINGS_LIMIT_MAXSERVODIFFERENCE=26 } __attribute__((packed)) HoTTSettingsLimitElem;
/* Number of elements for field Limit */
#define HOTTSETTINGS_LIMIT_NUMELEM 27
// Field Sensor information
/* Enumeration options for field Sensor */
typedef enum { HOTTSETTINGS_SENSOR_DISABLED=0, HOTTSETTINGS_SENSOR_ENABLED=1 }  __attribute__((packed)) HoTTSettingsSensorOptions;
/* Array element names for field Sensor */
typedef enum { HOTTSETTINGS_SENSOR_VARIO=0, HOTTSETTINGS_SENSOR_GPS=1, HOTTSETTINGS_SENSOR_EAM=2, HOTTSETTINGS_SENSOR_GAM=3, HOTTSETTINGS_SENSOR_ESC=4 } __attribute__((packed)) HoTTSettingsSensorElem;
/* Number of elements for field Sensor */
#define HOTTSETTINGS_SENSOR_NUMELEM 5
// Field Warning information
/* Enumeration options for field Warning */
typedef enum { HOTTSETTINGS_WARNING_DISABLED=0, HOTTSETTINGS_WARNING_ENABLED=1 }  __attribute__((packed)) HoTTSettingsWarningOptions;
/* Array element names for field Warning */
typedef enum { HOTTSETTINGS_WARNING_ALTITUDEBEEP=0, HOTTSETTINGS_WARNING_MINSPEED=1, HOTTSETTINGS_WARNING_MAXSPEED=2, HOTTSETTINGS_WARNING_NEGDIFFERENCE1=3, HOTTSETTINGS_WARNING_POSDIFFERENCE1=4, HOTTSETTINGS_WARNING_NEGDIFFERENCE2=5, HOTTSETTINGS_WARNING_POSDIFFERENCE2=6, HOTTSETTINGS_WARNING_MINHEIGHT=7, HOTTSETTINGS_WARNING_MAXHEIGHT=8, HOTTSETTINGS_WARNING_MAXDISTANCE=9, HOTTSETTINGS_WARNING_MINPOWERVOLTAGE=10, HOTTSETTINGS_WARNING_MAXPOWERVOLTAGE=11, HOTTSETTINGS_WARNING_MINSENSOR1VOLTAGE=12, HOTTSETTINGS_WARNING_MAXSENSOR1VOLTAGE=13, HOTTSETTINGS_WARNING_MINSENSOR2VOLTAGE=14, HOTTSETTINGS_WARNING_MAXSENSOR2VOLTAGE=15, HOTTSETTINGS_WARNING_MINCELLVOLTAGE=16, HOTTSETTINGS_WARNING_MAXCURRENT=17, HOTTSETTINGS_WARNING_MAXUSEDCAPACITY=18, HOTTSETTINGS_WARNING_MINSENSOR1TEMP=19, HOTTSETTINGS_WARNING_MAXSENSOR1TEMP=20, HOTTSETTINGS_WARNING_MINSENSOR2TEMP=21, HOTTSETTINGS_WARNING_MAXSENSOR2TEMP=22, HOTTSETTINGS_WARNING_MAXSERVOTEMP=23, HOTTSETTINGS_WARNING_MINRPM=24, HOTTSETTINGS_WARNING_MAXRPM=25, HOTTSETTINGS_WARNING_MINFUEL=26, HOTTSETTINGS_WARNING_MAXSERVODIFFERENCE=27 } __attribute__((packed)) HoTTSettingsWarningElem;
/* Number of elements for field Warning */
#define HOTTSETTINGS_WARNING_NUMELEM 28


// set/Get functions
extern void HoTTSettingsLimitSet( float *NewLimit );
extern void HoTTSettingsLimitGet( float *NewLimit );
extern void HoTTSettingsSensorSet( uint8_t *NewSensor );
extern void HoTTSettingsSensorGet( uint8_t *NewSensor );
extern void HoTTSettingsWarningSet( uint8_t *NewWarning );
extern void HoTTSettingsWarningGet( uint8_t *NewWarning );


#endif // HOTTSETTINGS_H

/**
 * @}
 * @}
 */