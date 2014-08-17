/**
 ******************************************************************************
 * @addtogroup UAVObjects UAVObject set for this firmware
 * @{
 * @addtogroup OnScreenDisplayPageSettings4 OnScreenDisplayPageSettings4
 * @brief On Sreen Display Page Settings
 *
 *
 * @file       onscreendisplaypagesettings4.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     Tau Labs, http://taulabs.org, Copyright (C) 2012-2013
 * @brief      Include files for the OnScreenDisplayPageSettings4 object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: onscreendisplaypagesettings4.xml. 
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

#ifndef ONSCREENDISPLAYPAGESETTINGS4_H
#define ONSCREENDISPLAYPAGESETTINGS4_H

// Object constants
#define ONSCREENDISPLAYPAGESETTINGS4_OBJID 0xD24CAB1A
#define ONSCREENDISPLAYPAGESETTINGS4_ISSINGLEINST 1
#define ONSCREENDISPLAYPAGESETTINGS4_ISSETTINGS 1
#define ONSCREENDISPLAYPAGESETTINGS4_NUMBYTES 106

// Generic interface functions
int32_t OnScreenDisplayPageSettings4Initialize();
UAVObjHandle OnScreenDisplayPageSettings4Handle();
void OnScreenDisplayPageSettings4SetDefaults(UAVObjHandle obj, uint16_t instId);

// Object data
typedef struct {
    int16_t AlarmPosX;
    int16_t AlarmPosY;
    int16_t AltitudeScalePos;
    int16_t ArmStatusPosX;
    int16_t ArmStatusPosY;
    int16_t BatteryVoltPosX;
    int16_t BatteryVoltPosY;
    int16_t BatteryCurrentPosX;
    int16_t BatteryCurrentPosY;
    int16_t BatteryConsumedPosX;
    int16_t BatteryConsumedPosY;
    int16_t CompassPos;
    int16_t CpuPosX;
    int16_t CpuPosY;
    int16_t FlightModePosX;
    int16_t FlightModePosY;
    int16_t GpsStatusPosX;
    int16_t GpsStatusPosY;
    int16_t GpsLatPosX;
    int16_t GpsLatPosY;
    int16_t GpsLonPosX;
    int16_t GpsLonPosY;
    int16_t HomeDistancePosX;
    int16_t HomeDistancePosY;
    int16_t RssiPosX;
    int16_t RssiPosY;
    int16_t SpeedScalePos;
    int16_t TimePosX;
    int16_t TimePosY;
    uint8_t Alarm;
    uint8_t AlarmFont;
    uint8_t AlarmAlign;
    uint8_t AltitudeScale;
    uint8_t AltitudeScaleAlign;
    uint8_t AltitudeScaleSource;
    uint8_t ArmStatus;
    uint8_t ArmStatusFont;
    uint8_t ArmStatusAlign;
    uint8_t ArtificialHorizon;
    uint8_t BatteryVolt;
    uint8_t BatteryVoltFont;
    uint8_t BatteryVoltAlign;
    uint8_t BatteryCurrent;
    uint8_t BatteryCurrentFont;
    uint8_t BatteryCurrentAlign;
    uint8_t BatteryConsumed;
    uint8_t BatteryConsumedFont;
    uint8_t BatteryConsumedAlign;
    uint8_t Compass;
    uint8_t CompassHomeDir;
    uint8_t Cpu;
    uint8_t CpuFont;
    uint8_t CpuAlign;
    uint8_t FlightMode;
    uint8_t FlightModeFont;
    uint8_t FlightModeAlign;
    uint8_t GpsStatus;
    uint8_t GpsStatusFont;
    uint8_t GpsStatusAlign;
    uint8_t GpsLat;
    uint8_t GpsLatFont;
    uint8_t GpsLatAlign;
    uint8_t GpsLon;
    uint8_t GpsLonFont;
    uint8_t GpsLonAlign;
    uint8_t HomeDistance;
    uint8_t HomeDistanceFont;
    uint8_t HomeDistanceAlign;
    uint8_t Rssi;
    uint8_t RssiFont;
    uint8_t RssiAlign;
    uint8_t SpeedScale;
    uint8_t SpeedScaleAlign;
    uint8_t SpeedScaleSource;
    uint8_t Time;
    uint8_t TimeFont;
    uint8_t TimeAlign;

} __attribute__((packed)) __attribute__((aligned(4))) OnScreenDisplayPageSettings4Data;

// Typesafe Object access functions
/**
 * @function OnScreenDisplayPageSettings4Get(dataOut)
 * @brief Populate a OnScreenDisplayPageSettings4Data object
 * @param[out] dataOut 
 */
static inline int32_t OnScreenDisplayPageSettings4Get(OnScreenDisplayPageSettings4Data *dataOut) { return UAVObjGetData(OnScreenDisplayPageSettings4Handle(), dataOut); }

static inline int32_t OnScreenDisplayPageSettings4Set(const OnScreenDisplayPageSettings4Data *dataIn) { return UAVObjSetData(OnScreenDisplayPageSettings4Handle(), dataIn); }

static inline int32_t OnScreenDisplayPageSettings4InstGet(uint16_t instId, OnScreenDisplayPageSettings4Data *dataOut) { return UAVObjGetInstanceData(OnScreenDisplayPageSettings4Handle(), instId, dataOut); }

static inline int32_t OnScreenDisplayPageSettings4InstSet(uint16_t instId, const OnScreenDisplayPageSettings4Data *dataIn) { return UAVObjSetInstanceData(OnScreenDisplayPageSettings4Handle(), instId, dataIn); }

static inline int32_t OnScreenDisplayPageSettings4ConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(OnScreenDisplayPageSettings4Handle(), queue, EV_MASK_ALL_UPDATES); }

static inline int32_t OnScreenDisplayPageSettings4ConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(OnScreenDisplayPageSettings4Handle(), cb, EV_MASK_ALL_UPDATES); }

static inline uint16_t OnScreenDisplayPageSettings4CreateInstance() { return UAVObjCreateInstance(OnScreenDisplayPageSettings4Handle(), &OnScreenDisplayPageSettings4SetDefaults); }

static inline void OnScreenDisplayPageSettings4RequestUpdate() { UAVObjRequestUpdate(OnScreenDisplayPageSettings4Handle()); }

static inline void OnScreenDisplayPageSettings4RequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(OnScreenDisplayPageSettings4Handle(), instId); }

static inline void OnScreenDisplayPageSettings4Updated() { UAVObjUpdated(OnScreenDisplayPageSettings4Handle()); }

static inline void OnScreenDisplayPageSettings4InstUpdated(uint16_t instId) { UAVObjInstanceUpdated(OnScreenDisplayPageSettings4Handle(), instId); }

static inline int32_t OnScreenDisplayPageSettings4GetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(OnScreenDisplayPageSettings4Handle(), dataOut); }

static inline int32_t OnScreenDisplayPageSettings4SetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(OnScreenDisplayPageSettings4Handle(), dataIn); }

static inline int8_t OnScreenDisplayPageSettings4ReadOnly() { return UAVObjReadOnly(OnScreenDisplayPageSettings4Handle()); }

static inline uint16_t OnScreenDisplayPageSettings4GetNumInstances(){ return UAVObjGetNumInstances(OnScreenDisplayPageSettings4Handle()); }

static inline uint32_t OnScreenDisplayPageSettings4GetNumBytes(){ return UAVObjGetNumBytes(OnScreenDisplayPageSettings4Handle()); }

// Field information
// Field AlarmPosX information
// Field AlarmPosY information
// Field AltitudeScalePos information
// Field ArmStatusPosX information
// Field ArmStatusPosY information
// Field BatteryVoltPosX information
// Field BatteryVoltPosY information
// Field BatteryCurrentPosX information
// Field BatteryCurrentPosY information
// Field BatteryConsumedPosX information
// Field BatteryConsumedPosY information
// Field CompassPos information
// Field CpuPosX information
// Field CpuPosY information
// Field FlightModePosX information
// Field FlightModePosY information
// Field GpsStatusPosX information
// Field GpsStatusPosY information
// Field GpsLatPosX information
// Field GpsLatPosY information
// Field GpsLonPosX information
// Field GpsLonPosY information
// Field HomeDistancePosX information
// Field HomeDistancePosY information
// Field RssiPosX information
// Field RssiPosY information
// Field SpeedScalePos information
// Field TimePosX information
// Field TimePosY information
// Field Alarm information
/* Enumeration options for field Alarm */
typedef enum { ONSCREENDISPLAYPAGESETTINGS4_ALARM_DISABLED=0, ONSCREENDISPLAYPAGESETTINGS4_ALARM_ENABLED=1 }  __attribute__((packed)) OnScreenDisplayPageSettings4AlarmOptions;
// Field AlarmFont information
/* Enumeration options for field AlarmFont */
typedef enum { ONSCREENDISPLAYPAGESETTINGS4_ALARMFONT_SMALL=0, ONSCREENDISPLAYPAGESETTINGS4_ALARMFONT_NORMAL=1, ONSCREENDISPLAYPAGESETTINGS4_ALARMFONT_LARGE=2 }  __attribute__((packed)) OnScreenDisplayPageSettings4AlarmFontOptions;
// Field AlarmAlign information
/* Enumeration options for field AlarmAlign */
typedef enum { ONSCREENDISPLAYPAGESETTINGS4_ALARMALIGN_LEFT=0, ONSCREENDISPLAYPAGESETTINGS4_ALARMALIGN_CENTER=1, ONSCREENDISPLAYPAGESETTINGS4_ALARMALIGN_RIGHT=2 }  __attribute__((packed)) OnScreenDisplayPageSettings4AlarmAlignOptions;
// Field AltitudeScale information
/* Enumeration options for field AltitudeScale */
typedef enum { ONSCREENDISPLAYPAGESETTINGS4_ALTITUDESCALE_DISABLED=0, ONSCREENDISPLAYPAGESETTINGS4_ALTITUDESCALE_ENABLED=1 }  __attribute__((packed)) OnScreenDisplayPageSettings4AltitudeScaleOptions;
// Field AltitudeScaleAlign information
/* Enumeration options for field AltitudeScaleAlign */
typedef enum { ONSCREENDISPLAYPAGESETTINGS4_ALTITUDESCALEALIGN_LEFT=0, ONSCREENDISPLAYPAGESETTINGS4_ALTITUDESCALEALIGN_RIGHT=1 }  __attribute__((packed)) OnScreenDisplayPageSettings4AltitudeScaleAlignOptions;
// Field AltitudeScaleSource information
/* Enumeration options for field AltitudeScaleSource */
typedef enum { ONSCREENDISPLAYPAGESETTINGS4_ALTITUDESCALESOURCE_BARO=0, ONSCREENDISPLAYPAGESETTINGS4_ALTITUDESCALESOURCE_NAV=1 }  __attribute__((packed)) OnScreenDisplayPageSettings4AltitudeScaleSourceOptions;
// Field ArmStatus information
/* Enumeration options for field ArmStatus */
typedef enum { ONSCREENDISPLAYPAGESETTINGS4_ARMSTATUS_DISABLED=0, ONSCREENDISPLAYPAGESETTINGS4_ARMSTATUS_ENABLED=1 }  __attribute__((packed)) OnScreenDisplayPageSettings4ArmStatusOptions;
// Field ArmStatusFont information
/* Enumeration options for field ArmStatusFont */
typedef enum { ONSCREENDISPLAYPAGESETTINGS4_ARMSTATUSFONT_SMALL=0, ONSCREENDISPLAYPAGESETTINGS4_ARMSTATUSFONT_NORMAL=1, ONSCREENDISPLAYPAGESETTINGS4_ARMSTATUSFONT_LARGE=2 }  __attribute__((packed)) OnScreenDisplayPageSettings4ArmStatusFontOptions;
// Field ArmStatusAlign information
/* Enumeration options for field ArmStatusAlign */
typedef enum { ONSCREENDISPLAYPAGESETTINGS4_ARMSTATUSALIGN_LEFT=0, ONSCREENDISPLAYPAGESETTINGS4_ARMSTATUSALIGN_CENTER=1, ONSCREENDISPLAYPAGESETTINGS4_ARMSTATUSALIGN_RIGHT=2 }  __attribute__((packed)) OnScreenDisplayPageSettings4ArmStatusAlignOptions;
// Field ArtificialHorizon information
/* Enumeration options for field ArtificialHorizon */
typedef enum { ONSCREENDISPLAYPAGESETTINGS4_ARTIFICIALHORIZON_DISABLED=0, ONSCREENDISPLAYPAGESETTINGS4_ARTIFICIALHORIZON_ENABLED=1 }  __attribute__((packed)) OnScreenDisplayPageSettings4ArtificialHorizonOptions;
// Field BatteryVolt information
/* Enumeration options for field BatteryVolt */
typedef enum { ONSCREENDISPLAYPAGESETTINGS4_BATTERYVOLT_DISABLED=0, ONSCREENDISPLAYPAGESETTINGS4_BATTERYVOLT_ENABLED=1 }  __attribute__((packed)) OnScreenDisplayPageSettings4BatteryVoltOptions;
// Field BatteryVoltFont information
/* Enumeration options for field BatteryVoltFont */
typedef enum { ONSCREENDISPLAYPAGESETTINGS4_BATTERYVOLTFONT_SMALL=0, ONSCREENDISPLAYPAGESETTINGS4_BATTERYVOLTFONT_NORMAL=1, ONSCREENDISPLAYPAGESETTINGS4_BATTERYVOLTFONT_LARGE=2 }  __attribute__((packed)) OnScreenDisplayPageSettings4BatteryVoltFontOptions;
// Field BatteryVoltAlign information
/* Enumeration options for field BatteryVoltAlign */
typedef enum { ONSCREENDISPLAYPAGESETTINGS4_BATTERYVOLTALIGN_LEFT=0, ONSCREENDISPLAYPAGESETTINGS4_BATTERYVOLTALIGN_CENTER=1, ONSCREENDISPLAYPAGESETTINGS4_BATTERYVOLTALIGN_RIGHT=2 }  __attribute__((packed)) OnScreenDisplayPageSettings4BatteryVoltAlignOptions;
// Field BatteryCurrent information
/* Enumeration options for field BatteryCurrent */
typedef enum { ONSCREENDISPLAYPAGESETTINGS4_BATTERYCURRENT_DISABLED=0, ONSCREENDISPLAYPAGESETTINGS4_BATTERYCURRENT_ENABLED=1 }  __attribute__((packed)) OnScreenDisplayPageSettings4BatteryCurrentOptions;
// Field BatteryCurrentFont information
/* Enumeration options for field BatteryCurrentFont */
typedef enum { ONSCREENDISPLAYPAGESETTINGS4_BATTERYCURRENTFONT_SMALL=0, ONSCREENDISPLAYPAGESETTINGS4_BATTERYCURRENTFONT_NORMAL=1, ONSCREENDISPLAYPAGESETTINGS4_BATTERYCURRENTFONT_LARGE=2 }  __attribute__((packed)) OnScreenDisplayPageSettings4BatteryCurrentFontOptions;
// Field BatteryCurrentAlign information
/* Enumeration options for field BatteryCurrentAlign */
typedef enum { ONSCREENDISPLAYPAGESETTINGS4_BATTERYCURRENTALIGN_LEFT=0, ONSCREENDISPLAYPAGESETTINGS4_BATTERYCURRENTALIGN_CENTER=1, ONSCREENDISPLAYPAGESETTINGS4_BATTERYCURRENTALIGN_RIGHT=2 }  __attribute__((packed)) OnScreenDisplayPageSettings4BatteryCurrentAlignOptions;
// Field BatteryConsumed information
/* Enumeration options for field BatteryConsumed */
typedef enum { ONSCREENDISPLAYPAGESETTINGS4_BATTERYCONSUMED_DISABLED=0, ONSCREENDISPLAYPAGESETTINGS4_BATTERYCONSUMED_ENABLED=1 }  __attribute__((packed)) OnScreenDisplayPageSettings4BatteryConsumedOptions;
// Field BatteryConsumedFont information
/* Enumeration options for field BatteryConsumedFont */
typedef enum { ONSCREENDISPLAYPAGESETTINGS4_BATTERYCONSUMEDFONT_SMALL=0, ONSCREENDISPLAYPAGESETTINGS4_BATTERYCONSUMEDFONT_NORMAL=1, ONSCREENDISPLAYPAGESETTINGS4_BATTERYCONSUMEDFONT_LARGE=2 }  __attribute__((packed)) OnScreenDisplayPageSettings4BatteryConsumedFontOptions;
// Field BatteryConsumedAlign information
/* Enumeration options for field BatteryConsumedAlign */
typedef enum { ONSCREENDISPLAYPAGESETTINGS4_BATTERYCONSUMEDALIGN_LEFT=0, ONSCREENDISPLAYPAGESETTINGS4_BATTERYCONSUMEDALIGN_CENTER=1, ONSCREENDISPLAYPAGESETTINGS4_BATTERYCONSUMEDALIGN_RIGHT=2 }  __attribute__((packed)) OnScreenDisplayPageSettings4BatteryConsumedAlignOptions;
// Field Compass information
/* Enumeration options for field Compass */
typedef enum { ONSCREENDISPLAYPAGESETTINGS4_COMPASS_DISABLED=0, ONSCREENDISPLAYPAGESETTINGS4_COMPASS_ENABLED=1 }  __attribute__((packed)) OnScreenDisplayPageSettings4CompassOptions;
// Field CompassHomeDir information
/* Enumeration options for field CompassHomeDir */
typedef enum { ONSCREENDISPLAYPAGESETTINGS4_COMPASSHOMEDIR_DISABLED=0, ONSCREENDISPLAYPAGESETTINGS4_COMPASSHOMEDIR_ENABLED=1 }  __attribute__((packed)) OnScreenDisplayPageSettings4CompassHomeDirOptions;
// Field Cpu information
/* Enumeration options for field Cpu */
typedef enum { ONSCREENDISPLAYPAGESETTINGS4_CPU_DISABLED=0, ONSCREENDISPLAYPAGESETTINGS4_CPU_ENABLED=1 }  __attribute__((packed)) OnScreenDisplayPageSettings4CpuOptions;
// Field CpuFont information
/* Enumeration options for field CpuFont */
typedef enum { ONSCREENDISPLAYPAGESETTINGS4_CPUFONT_SMALL=0, ONSCREENDISPLAYPAGESETTINGS4_CPUFONT_NORMAL=1, ONSCREENDISPLAYPAGESETTINGS4_CPUFONT_LARGE=2 }  __attribute__((packed)) OnScreenDisplayPageSettings4CpuFontOptions;
// Field CpuAlign information
/* Enumeration options for field CpuAlign */
typedef enum { ONSCREENDISPLAYPAGESETTINGS4_CPUALIGN_LEFT=0, ONSCREENDISPLAYPAGESETTINGS4_CPUALIGN_CENTER=1, ONSCREENDISPLAYPAGESETTINGS4_CPUALIGN_RIGHT=2 }  __attribute__((packed)) OnScreenDisplayPageSettings4CpuAlignOptions;
// Field FlightMode information
/* Enumeration options for field FlightMode */
typedef enum { ONSCREENDISPLAYPAGESETTINGS4_FLIGHTMODE_DISABLED=0, ONSCREENDISPLAYPAGESETTINGS4_FLIGHTMODE_ENABLED=1 }  __attribute__((packed)) OnScreenDisplayPageSettings4FlightModeOptions;
// Field FlightModeFont information
/* Enumeration options for field FlightModeFont */
typedef enum { ONSCREENDISPLAYPAGESETTINGS4_FLIGHTMODEFONT_SMALL=0, ONSCREENDISPLAYPAGESETTINGS4_FLIGHTMODEFONT_NORMAL=1, ONSCREENDISPLAYPAGESETTINGS4_FLIGHTMODEFONT_LARGE=2 }  __attribute__((packed)) OnScreenDisplayPageSettings4FlightModeFontOptions;
// Field FlightModeAlign information
/* Enumeration options for field FlightModeAlign */
typedef enum { ONSCREENDISPLAYPAGESETTINGS4_FLIGHTMODEALIGN_LEFT=0, ONSCREENDISPLAYPAGESETTINGS4_FLIGHTMODEALIGN_CENTER=1, ONSCREENDISPLAYPAGESETTINGS4_FLIGHTMODEALIGN_RIGHT=2 }  __attribute__((packed)) OnScreenDisplayPageSettings4FlightModeAlignOptions;
// Field GpsStatus information
/* Enumeration options for field GpsStatus */
typedef enum { ONSCREENDISPLAYPAGESETTINGS4_GPSSTATUS_DISABLED=0, ONSCREENDISPLAYPAGESETTINGS4_GPSSTATUS_ENABLED=1 }  __attribute__((packed)) OnScreenDisplayPageSettings4GpsStatusOptions;
// Field GpsStatusFont information
/* Enumeration options for field GpsStatusFont */
typedef enum { ONSCREENDISPLAYPAGESETTINGS4_GPSSTATUSFONT_SMALL=0, ONSCREENDISPLAYPAGESETTINGS4_GPSSTATUSFONT_NORMAL=1, ONSCREENDISPLAYPAGESETTINGS4_GPSSTATUSFONT_LARGE=2 }  __attribute__((packed)) OnScreenDisplayPageSettings4GpsStatusFontOptions;
// Field GpsStatusAlign information
/* Enumeration options for field GpsStatusAlign */
typedef enum { ONSCREENDISPLAYPAGESETTINGS4_GPSSTATUSALIGN_LEFT=0, ONSCREENDISPLAYPAGESETTINGS4_GPSSTATUSALIGN_CENTER=1, ONSCREENDISPLAYPAGESETTINGS4_GPSSTATUSALIGN_RIGHT=2 }  __attribute__((packed)) OnScreenDisplayPageSettings4GpsStatusAlignOptions;
// Field GpsLat information
/* Enumeration options for field GpsLat */
typedef enum { ONSCREENDISPLAYPAGESETTINGS4_GPSLAT_DISABLED=0, ONSCREENDISPLAYPAGESETTINGS4_GPSLAT_ENABLED=1 }  __attribute__((packed)) OnScreenDisplayPageSettings4GpsLatOptions;
// Field GpsLatFont information
/* Enumeration options for field GpsLatFont */
typedef enum { ONSCREENDISPLAYPAGESETTINGS4_GPSLATFONT_SMALL=0, ONSCREENDISPLAYPAGESETTINGS4_GPSLATFONT_NORMAL=1, ONSCREENDISPLAYPAGESETTINGS4_GPSLATFONT_LARGE=2 }  __attribute__((packed)) OnScreenDisplayPageSettings4GpsLatFontOptions;
// Field GpsLatAlign information
/* Enumeration options for field GpsLatAlign */
typedef enum { ONSCREENDISPLAYPAGESETTINGS4_GPSLATALIGN_LEFT=0, ONSCREENDISPLAYPAGESETTINGS4_GPSLATALIGN_CENTER=1, ONSCREENDISPLAYPAGESETTINGS4_GPSLATALIGN_RIGHT=2 }  __attribute__((packed)) OnScreenDisplayPageSettings4GpsLatAlignOptions;
// Field GpsLon information
/* Enumeration options for field GpsLon */
typedef enum { ONSCREENDISPLAYPAGESETTINGS4_GPSLON_DISABLED=0, ONSCREENDISPLAYPAGESETTINGS4_GPSLON_ENABLED=1 }  __attribute__((packed)) OnScreenDisplayPageSettings4GpsLonOptions;
// Field GpsLonFont information
/* Enumeration options for field GpsLonFont */
typedef enum { ONSCREENDISPLAYPAGESETTINGS4_GPSLONFONT_SMALL=0, ONSCREENDISPLAYPAGESETTINGS4_GPSLONFONT_NORMAL=1, ONSCREENDISPLAYPAGESETTINGS4_GPSLONFONT_LARGE=2 }  __attribute__((packed)) OnScreenDisplayPageSettings4GpsLonFontOptions;
// Field GpsLonAlign information
/* Enumeration options for field GpsLonAlign */
typedef enum { ONSCREENDISPLAYPAGESETTINGS4_GPSLONALIGN_LEFT=0, ONSCREENDISPLAYPAGESETTINGS4_GPSLONALIGN_CENTER=1, ONSCREENDISPLAYPAGESETTINGS4_GPSLONALIGN_RIGHT=2 }  __attribute__((packed)) OnScreenDisplayPageSettings4GpsLonAlignOptions;
// Field HomeDistance information
/* Enumeration options for field HomeDistance */
typedef enum { ONSCREENDISPLAYPAGESETTINGS4_HOMEDISTANCE_DISABLED=0, ONSCREENDISPLAYPAGESETTINGS4_HOMEDISTANCE_ENABLED=1 }  __attribute__((packed)) OnScreenDisplayPageSettings4HomeDistanceOptions;
// Field HomeDistanceFont information
/* Enumeration options for field HomeDistanceFont */
typedef enum { ONSCREENDISPLAYPAGESETTINGS4_HOMEDISTANCEFONT_SMALL=0, ONSCREENDISPLAYPAGESETTINGS4_HOMEDISTANCEFONT_NORMAL=1, ONSCREENDISPLAYPAGESETTINGS4_HOMEDISTANCEFONT_LARGE=2 }  __attribute__((packed)) OnScreenDisplayPageSettings4HomeDistanceFontOptions;
// Field HomeDistanceAlign information
/* Enumeration options for field HomeDistanceAlign */
typedef enum { ONSCREENDISPLAYPAGESETTINGS4_HOMEDISTANCEALIGN_LEFT=0, ONSCREENDISPLAYPAGESETTINGS4_HOMEDISTANCEALIGN_CENTER=1, ONSCREENDISPLAYPAGESETTINGS4_HOMEDISTANCEALIGN_RIGHT=2 }  __attribute__((packed)) OnScreenDisplayPageSettings4HomeDistanceAlignOptions;
// Field Rssi information
/* Enumeration options for field Rssi */
typedef enum { ONSCREENDISPLAYPAGESETTINGS4_RSSI_DISABLED=0, ONSCREENDISPLAYPAGESETTINGS4_RSSI_ENABLED=1 }  __attribute__((packed)) OnScreenDisplayPageSettings4RssiOptions;
// Field RssiFont information
/* Enumeration options for field RssiFont */
typedef enum { ONSCREENDISPLAYPAGESETTINGS4_RSSIFONT_SMALL=0, ONSCREENDISPLAYPAGESETTINGS4_RSSIFONT_NORMAL=1, ONSCREENDISPLAYPAGESETTINGS4_RSSIFONT_LARGE=2 }  __attribute__((packed)) OnScreenDisplayPageSettings4RssiFontOptions;
// Field RssiAlign information
/* Enumeration options for field RssiAlign */
typedef enum { ONSCREENDISPLAYPAGESETTINGS4_RSSIALIGN_LEFT=0, ONSCREENDISPLAYPAGESETTINGS4_RSSIALIGN_CENTER=1, ONSCREENDISPLAYPAGESETTINGS4_RSSIALIGN_RIGHT=2 }  __attribute__((packed)) OnScreenDisplayPageSettings4RssiAlignOptions;
// Field SpeedScale information
/* Enumeration options for field SpeedScale */
typedef enum { ONSCREENDISPLAYPAGESETTINGS4_SPEEDSCALE_DISABLED=0, ONSCREENDISPLAYPAGESETTINGS4_SPEEDSCALE_ENABLED=1 }  __attribute__((packed)) OnScreenDisplayPageSettings4SpeedScaleOptions;
// Field SpeedScaleAlign information
/* Enumeration options for field SpeedScaleAlign */
typedef enum { ONSCREENDISPLAYPAGESETTINGS4_SPEEDSCALEALIGN_LEFT=0, ONSCREENDISPLAYPAGESETTINGS4_SPEEDSCALEALIGN_RIGHT=1 }  __attribute__((packed)) OnScreenDisplayPageSettings4SpeedScaleAlignOptions;
// Field SpeedScaleSource information
/* Enumeration options for field SpeedScaleSource */
typedef enum { ONSCREENDISPLAYPAGESETTINGS4_SPEEDSCALESOURCE_GPS=0, ONSCREENDISPLAYPAGESETTINGS4_SPEEDSCALESOURCE_NAV=1, ONSCREENDISPLAYPAGESETTINGS4_SPEEDSCALESOURCE_AIRSPEED=2 }  __attribute__((packed)) OnScreenDisplayPageSettings4SpeedScaleSourceOptions;
// Field Time information
/* Enumeration options for field Time */
typedef enum { ONSCREENDISPLAYPAGESETTINGS4_TIME_DISABLED=0, ONSCREENDISPLAYPAGESETTINGS4_TIME_ENABLED=1 }  __attribute__((packed)) OnScreenDisplayPageSettings4TimeOptions;
// Field TimeFont information
/* Enumeration options for field TimeFont */
typedef enum { ONSCREENDISPLAYPAGESETTINGS4_TIMEFONT_SMALL=0, ONSCREENDISPLAYPAGESETTINGS4_TIMEFONT_NORMAL=1, ONSCREENDISPLAYPAGESETTINGS4_TIMEFONT_LARGE=2 }  __attribute__((packed)) OnScreenDisplayPageSettings4TimeFontOptions;
// Field TimeAlign information
/* Enumeration options for field TimeAlign */
typedef enum { ONSCREENDISPLAYPAGESETTINGS4_TIMEALIGN_LEFT=0, ONSCREENDISPLAYPAGESETTINGS4_TIMEALIGN_CENTER=1, ONSCREENDISPLAYPAGESETTINGS4_TIMEALIGN_RIGHT=2 }  __attribute__((packed)) OnScreenDisplayPageSettings4TimeAlignOptions;


// set/Get functions
extern void OnScreenDisplayPageSettings4AlarmPosXSet( int16_t *NewAlarmPosX );
extern void OnScreenDisplayPageSettings4AlarmPosXGet( int16_t *NewAlarmPosX );
extern void OnScreenDisplayPageSettings4AlarmPosYSet( int16_t *NewAlarmPosY );
extern void OnScreenDisplayPageSettings4AlarmPosYGet( int16_t *NewAlarmPosY );
extern void OnScreenDisplayPageSettings4AltitudeScalePosSet( int16_t *NewAltitudeScalePos );
extern void OnScreenDisplayPageSettings4AltitudeScalePosGet( int16_t *NewAltitudeScalePos );
extern void OnScreenDisplayPageSettings4ArmStatusPosXSet( int16_t *NewArmStatusPosX );
extern void OnScreenDisplayPageSettings4ArmStatusPosXGet( int16_t *NewArmStatusPosX );
extern void OnScreenDisplayPageSettings4ArmStatusPosYSet( int16_t *NewArmStatusPosY );
extern void OnScreenDisplayPageSettings4ArmStatusPosYGet( int16_t *NewArmStatusPosY );
extern void OnScreenDisplayPageSettings4BatteryVoltPosXSet( int16_t *NewBatteryVoltPosX );
extern void OnScreenDisplayPageSettings4BatteryVoltPosXGet( int16_t *NewBatteryVoltPosX );
extern void OnScreenDisplayPageSettings4BatteryVoltPosYSet( int16_t *NewBatteryVoltPosY );
extern void OnScreenDisplayPageSettings4BatteryVoltPosYGet( int16_t *NewBatteryVoltPosY );
extern void OnScreenDisplayPageSettings4BatteryCurrentPosXSet( int16_t *NewBatteryCurrentPosX );
extern void OnScreenDisplayPageSettings4BatteryCurrentPosXGet( int16_t *NewBatteryCurrentPosX );
extern void OnScreenDisplayPageSettings4BatteryCurrentPosYSet( int16_t *NewBatteryCurrentPosY );
extern void OnScreenDisplayPageSettings4BatteryCurrentPosYGet( int16_t *NewBatteryCurrentPosY );
extern void OnScreenDisplayPageSettings4BatteryConsumedPosXSet( int16_t *NewBatteryConsumedPosX );
extern void OnScreenDisplayPageSettings4BatteryConsumedPosXGet( int16_t *NewBatteryConsumedPosX );
extern void OnScreenDisplayPageSettings4BatteryConsumedPosYSet( int16_t *NewBatteryConsumedPosY );
extern void OnScreenDisplayPageSettings4BatteryConsumedPosYGet( int16_t *NewBatteryConsumedPosY );
extern void OnScreenDisplayPageSettings4CompassPosSet( int16_t *NewCompassPos );
extern void OnScreenDisplayPageSettings4CompassPosGet( int16_t *NewCompassPos );
extern void OnScreenDisplayPageSettings4CpuPosXSet( int16_t *NewCpuPosX );
extern void OnScreenDisplayPageSettings4CpuPosXGet( int16_t *NewCpuPosX );
extern void OnScreenDisplayPageSettings4CpuPosYSet( int16_t *NewCpuPosY );
extern void OnScreenDisplayPageSettings4CpuPosYGet( int16_t *NewCpuPosY );
extern void OnScreenDisplayPageSettings4FlightModePosXSet( int16_t *NewFlightModePosX );
extern void OnScreenDisplayPageSettings4FlightModePosXGet( int16_t *NewFlightModePosX );
extern void OnScreenDisplayPageSettings4FlightModePosYSet( int16_t *NewFlightModePosY );
extern void OnScreenDisplayPageSettings4FlightModePosYGet( int16_t *NewFlightModePosY );
extern void OnScreenDisplayPageSettings4GpsStatusPosXSet( int16_t *NewGpsStatusPosX );
extern void OnScreenDisplayPageSettings4GpsStatusPosXGet( int16_t *NewGpsStatusPosX );
extern void OnScreenDisplayPageSettings4GpsStatusPosYSet( int16_t *NewGpsStatusPosY );
extern void OnScreenDisplayPageSettings4GpsStatusPosYGet( int16_t *NewGpsStatusPosY );
extern void OnScreenDisplayPageSettings4GpsLatPosXSet( int16_t *NewGpsLatPosX );
extern void OnScreenDisplayPageSettings4GpsLatPosXGet( int16_t *NewGpsLatPosX );
extern void OnScreenDisplayPageSettings4GpsLatPosYSet( int16_t *NewGpsLatPosY );
extern void OnScreenDisplayPageSettings4GpsLatPosYGet( int16_t *NewGpsLatPosY );
extern void OnScreenDisplayPageSettings4GpsLonPosXSet( int16_t *NewGpsLonPosX );
extern void OnScreenDisplayPageSettings4GpsLonPosXGet( int16_t *NewGpsLonPosX );
extern void OnScreenDisplayPageSettings4GpsLonPosYSet( int16_t *NewGpsLonPosY );
extern void OnScreenDisplayPageSettings4GpsLonPosYGet( int16_t *NewGpsLonPosY );
extern void OnScreenDisplayPageSettings4HomeDistancePosXSet( int16_t *NewHomeDistancePosX );
extern void OnScreenDisplayPageSettings4HomeDistancePosXGet( int16_t *NewHomeDistancePosX );
extern void OnScreenDisplayPageSettings4HomeDistancePosYSet( int16_t *NewHomeDistancePosY );
extern void OnScreenDisplayPageSettings4HomeDistancePosYGet( int16_t *NewHomeDistancePosY );
extern void OnScreenDisplayPageSettings4RssiPosXSet( int16_t *NewRssiPosX );
extern void OnScreenDisplayPageSettings4RssiPosXGet( int16_t *NewRssiPosX );
extern void OnScreenDisplayPageSettings4RssiPosYSet( int16_t *NewRssiPosY );
extern void OnScreenDisplayPageSettings4RssiPosYGet( int16_t *NewRssiPosY );
extern void OnScreenDisplayPageSettings4SpeedScalePosSet( int16_t *NewSpeedScalePos );
extern void OnScreenDisplayPageSettings4SpeedScalePosGet( int16_t *NewSpeedScalePos );
extern void OnScreenDisplayPageSettings4TimePosXSet( int16_t *NewTimePosX );
extern void OnScreenDisplayPageSettings4TimePosXGet( int16_t *NewTimePosX );
extern void OnScreenDisplayPageSettings4TimePosYSet( int16_t *NewTimePosY );
extern void OnScreenDisplayPageSettings4TimePosYGet( int16_t *NewTimePosY );
extern void OnScreenDisplayPageSettings4AlarmSet( uint8_t *NewAlarm );
extern void OnScreenDisplayPageSettings4AlarmGet( uint8_t *NewAlarm );
extern void OnScreenDisplayPageSettings4AlarmFontSet( uint8_t *NewAlarmFont );
extern void OnScreenDisplayPageSettings4AlarmFontGet( uint8_t *NewAlarmFont );
extern void OnScreenDisplayPageSettings4AlarmAlignSet( uint8_t *NewAlarmAlign );
extern void OnScreenDisplayPageSettings4AlarmAlignGet( uint8_t *NewAlarmAlign );
extern void OnScreenDisplayPageSettings4AltitudeScaleSet( uint8_t *NewAltitudeScale );
extern void OnScreenDisplayPageSettings4AltitudeScaleGet( uint8_t *NewAltitudeScale );
extern void OnScreenDisplayPageSettings4AltitudeScaleAlignSet( uint8_t *NewAltitudeScaleAlign );
extern void OnScreenDisplayPageSettings4AltitudeScaleAlignGet( uint8_t *NewAltitudeScaleAlign );
extern void OnScreenDisplayPageSettings4AltitudeScaleSourceSet( uint8_t *NewAltitudeScaleSource );
extern void OnScreenDisplayPageSettings4AltitudeScaleSourceGet( uint8_t *NewAltitudeScaleSource );
extern void OnScreenDisplayPageSettings4ArmStatusSet( uint8_t *NewArmStatus );
extern void OnScreenDisplayPageSettings4ArmStatusGet( uint8_t *NewArmStatus );
extern void OnScreenDisplayPageSettings4ArmStatusFontSet( uint8_t *NewArmStatusFont );
extern void OnScreenDisplayPageSettings4ArmStatusFontGet( uint8_t *NewArmStatusFont );
extern void OnScreenDisplayPageSettings4ArmStatusAlignSet( uint8_t *NewArmStatusAlign );
extern void OnScreenDisplayPageSettings4ArmStatusAlignGet( uint8_t *NewArmStatusAlign );
extern void OnScreenDisplayPageSettings4ArtificialHorizonSet( uint8_t *NewArtificialHorizon );
extern void OnScreenDisplayPageSettings4ArtificialHorizonGet( uint8_t *NewArtificialHorizon );
extern void OnScreenDisplayPageSettings4BatteryVoltSet( uint8_t *NewBatteryVolt );
extern void OnScreenDisplayPageSettings4BatteryVoltGet( uint8_t *NewBatteryVolt );
extern void OnScreenDisplayPageSettings4BatteryVoltFontSet( uint8_t *NewBatteryVoltFont );
extern void OnScreenDisplayPageSettings4BatteryVoltFontGet( uint8_t *NewBatteryVoltFont );
extern void OnScreenDisplayPageSettings4BatteryVoltAlignSet( uint8_t *NewBatteryVoltAlign );
extern void OnScreenDisplayPageSettings4BatteryVoltAlignGet( uint8_t *NewBatteryVoltAlign );
extern void OnScreenDisplayPageSettings4BatteryCurrentSet( uint8_t *NewBatteryCurrent );
extern void OnScreenDisplayPageSettings4BatteryCurrentGet( uint8_t *NewBatteryCurrent );
extern void OnScreenDisplayPageSettings4BatteryCurrentFontSet( uint8_t *NewBatteryCurrentFont );
extern void OnScreenDisplayPageSettings4BatteryCurrentFontGet( uint8_t *NewBatteryCurrentFont );
extern void OnScreenDisplayPageSettings4BatteryCurrentAlignSet( uint8_t *NewBatteryCurrentAlign );
extern void OnScreenDisplayPageSettings4BatteryCurrentAlignGet( uint8_t *NewBatteryCurrentAlign );
extern void OnScreenDisplayPageSettings4BatteryConsumedSet( uint8_t *NewBatteryConsumed );
extern void OnScreenDisplayPageSettings4BatteryConsumedGet( uint8_t *NewBatteryConsumed );
extern void OnScreenDisplayPageSettings4BatteryConsumedFontSet( uint8_t *NewBatteryConsumedFont );
extern void OnScreenDisplayPageSettings4BatteryConsumedFontGet( uint8_t *NewBatteryConsumedFont );
extern void OnScreenDisplayPageSettings4BatteryConsumedAlignSet( uint8_t *NewBatteryConsumedAlign );
extern void OnScreenDisplayPageSettings4BatteryConsumedAlignGet( uint8_t *NewBatteryConsumedAlign );
extern void OnScreenDisplayPageSettings4CompassSet( uint8_t *NewCompass );
extern void OnScreenDisplayPageSettings4CompassGet( uint8_t *NewCompass );
extern void OnScreenDisplayPageSettings4CompassHomeDirSet( uint8_t *NewCompassHomeDir );
extern void OnScreenDisplayPageSettings4CompassHomeDirGet( uint8_t *NewCompassHomeDir );
extern void OnScreenDisplayPageSettings4CpuSet( uint8_t *NewCpu );
extern void OnScreenDisplayPageSettings4CpuGet( uint8_t *NewCpu );
extern void OnScreenDisplayPageSettings4CpuFontSet( uint8_t *NewCpuFont );
extern void OnScreenDisplayPageSettings4CpuFontGet( uint8_t *NewCpuFont );
extern void OnScreenDisplayPageSettings4CpuAlignSet( uint8_t *NewCpuAlign );
extern void OnScreenDisplayPageSettings4CpuAlignGet( uint8_t *NewCpuAlign );
extern void OnScreenDisplayPageSettings4FlightModeSet( uint8_t *NewFlightMode );
extern void OnScreenDisplayPageSettings4FlightModeGet( uint8_t *NewFlightMode );
extern void OnScreenDisplayPageSettings4FlightModeFontSet( uint8_t *NewFlightModeFont );
extern void OnScreenDisplayPageSettings4FlightModeFontGet( uint8_t *NewFlightModeFont );
extern void OnScreenDisplayPageSettings4FlightModeAlignSet( uint8_t *NewFlightModeAlign );
extern void OnScreenDisplayPageSettings4FlightModeAlignGet( uint8_t *NewFlightModeAlign );
extern void OnScreenDisplayPageSettings4GpsStatusSet( uint8_t *NewGpsStatus );
extern void OnScreenDisplayPageSettings4GpsStatusGet( uint8_t *NewGpsStatus );
extern void OnScreenDisplayPageSettings4GpsStatusFontSet( uint8_t *NewGpsStatusFont );
extern void OnScreenDisplayPageSettings4GpsStatusFontGet( uint8_t *NewGpsStatusFont );
extern void OnScreenDisplayPageSettings4GpsStatusAlignSet( uint8_t *NewGpsStatusAlign );
extern void OnScreenDisplayPageSettings4GpsStatusAlignGet( uint8_t *NewGpsStatusAlign );
extern void OnScreenDisplayPageSettings4GpsLatSet( uint8_t *NewGpsLat );
extern void OnScreenDisplayPageSettings4GpsLatGet( uint8_t *NewGpsLat );
extern void OnScreenDisplayPageSettings4GpsLatFontSet( uint8_t *NewGpsLatFont );
extern void OnScreenDisplayPageSettings4GpsLatFontGet( uint8_t *NewGpsLatFont );
extern void OnScreenDisplayPageSettings4GpsLatAlignSet( uint8_t *NewGpsLatAlign );
extern void OnScreenDisplayPageSettings4GpsLatAlignGet( uint8_t *NewGpsLatAlign );
extern void OnScreenDisplayPageSettings4GpsLonSet( uint8_t *NewGpsLon );
extern void OnScreenDisplayPageSettings4GpsLonGet( uint8_t *NewGpsLon );
extern void OnScreenDisplayPageSettings4GpsLonFontSet( uint8_t *NewGpsLonFont );
extern void OnScreenDisplayPageSettings4GpsLonFontGet( uint8_t *NewGpsLonFont );
extern void OnScreenDisplayPageSettings4GpsLonAlignSet( uint8_t *NewGpsLonAlign );
extern void OnScreenDisplayPageSettings4GpsLonAlignGet( uint8_t *NewGpsLonAlign );
extern void OnScreenDisplayPageSettings4HomeDistanceSet( uint8_t *NewHomeDistance );
extern void OnScreenDisplayPageSettings4HomeDistanceGet( uint8_t *NewHomeDistance );
extern void OnScreenDisplayPageSettings4HomeDistanceFontSet( uint8_t *NewHomeDistanceFont );
extern void OnScreenDisplayPageSettings4HomeDistanceFontGet( uint8_t *NewHomeDistanceFont );
extern void OnScreenDisplayPageSettings4HomeDistanceAlignSet( uint8_t *NewHomeDistanceAlign );
extern void OnScreenDisplayPageSettings4HomeDistanceAlignGet( uint8_t *NewHomeDistanceAlign );
extern void OnScreenDisplayPageSettings4RssiSet( uint8_t *NewRssi );
extern void OnScreenDisplayPageSettings4RssiGet( uint8_t *NewRssi );
extern void OnScreenDisplayPageSettings4RssiFontSet( uint8_t *NewRssiFont );
extern void OnScreenDisplayPageSettings4RssiFontGet( uint8_t *NewRssiFont );
extern void OnScreenDisplayPageSettings4RssiAlignSet( uint8_t *NewRssiAlign );
extern void OnScreenDisplayPageSettings4RssiAlignGet( uint8_t *NewRssiAlign );
extern void OnScreenDisplayPageSettings4SpeedScaleSet( uint8_t *NewSpeedScale );
extern void OnScreenDisplayPageSettings4SpeedScaleGet( uint8_t *NewSpeedScale );
extern void OnScreenDisplayPageSettings4SpeedScaleAlignSet( uint8_t *NewSpeedScaleAlign );
extern void OnScreenDisplayPageSettings4SpeedScaleAlignGet( uint8_t *NewSpeedScaleAlign );
extern void OnScreenDisplayPageSettings4SpeedScaleSourceSet( uint8_t *NewSpeedScaleSource );
extern void OnScreenDisplayPageSettings4SpeedScaleSourceGet( uint8_t *NewSpeedScaleSource );
extern void OnScreenDisplayPageSettings4TimeSet( uint8_t *NewTime );
extern void OnScreenDisplayPageSettings4TimeGet( uint8_t *NewTime );
extern void OnScreenDisplayPageSettings4TimeFontSet( uint8_t *NewTimeFont );
extern void OnScreenDisplayPageSettings4TimeFontGet( uint8_t *NewTimeFont );
extern void OnScreenDisplayPageSettings4TimeAlignSet( uint8_t *NewTimeAlign );
extern void OnScreenDisplayPageSettings4TimeAlignGet( uint8_t *NewTimeAlign );


#endif // ONSCREENDISPLAYPAGESETTINGS4_H

/**
 * @}
 * @}
 */
