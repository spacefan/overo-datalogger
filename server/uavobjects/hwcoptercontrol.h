/**
 ******************************************************************************
 * @addtogroup UAVObjects UAVObject set for this firmware
 * @{
 * @addtogroup HwCopterControl HwCopterControl
 * @brief Selection of optional hardware configurations.
 *
 *
 * @file       hwcoptercontrol.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     Tau Labs, http://taulabs.org, Copyright (C) 2012-2015
 * @brief      Include files for the HwCopterControl object. This file has been 
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

#ifndef HWCOPTERCONTROL_H
#define HWCOPTERCONTROL_H

#include "pios_queue.h"
#include "uavoversion.h"

#include <hwshared.h>


// Object constants
#define HWCOPTERCONTROL_OBJID 0x2C5D66EC
#define HWCOPTERCONTROL_ISSINGLEINST 1
#define HWCOPTERCONTROL_ISSETTINGS 1
#define HWCOPTERCONTROL_NUMBYTES 10

// Generic interface functions
int32_t HwCopterControlInitialize();
UAVObjHandle HwCopterControlHandle();
void HwCopterControlSetDefaults(UAVObjHandle obj, uint16_t instId);

// Object data
typedef struct {
    uint8_t RcvrPort;
    uint8_t MainPort;
    uint8_t FlexiPort;
    uint8_t USB_HIDPort;
    uint8_t USB_VCPPort;
    uint8_t DSMxMode;
    uint8_t GyroRange;
    uint8_t AccelRange;
    uint8_t MPU6000Rate;
    uint8_t MPU6000DLPF;

} __attribute__((packed)) __attribute__((aligned(4))) HwCopterControlData;

// Typesafe Object access functions
/**
 * @function HwCopterControlGet(dataOut)
 * @brief Populate a HwCopterControlData object
 * @param[out] dataOut 
 */
static inline int32_t HwCopterControlGet(HwCopterControlData *dataOut) { return UAVObjGetData(HwCopterControlHandle(), dataOut); }

static inline int32_t HwCopterControlSet(const HwCopterControlData *dataIn) { return UAVObjSetData(HwCopterControlHandle(), dataIn); }

static inline int32_t HwCopterControlInstGet(uint16_t instId, HwCopterControlData *dataOut) { return UAVObjGetInstanceData(HwCopterControlHandle(), instId, dataOut); }

static inline int32_t HwCopterControlInstSet(uint16_t instId, const HwCopterControlData *dataIn) { return UAVObjSetInstanceData(HwCopterControlHandle(), instId, dataIn); }

static inline int32_t HwCopterControlConnectQueue(struct pios_queue *queue) { return UAVObjConnectQueue(HwCopterControlHandle(), queue, EV_MASK_ALL_UPDATES); }

static inline int32_t HwCopterControlConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(HwCopterControlHandle(), cb, EV_MASK_ALL_UPDATES); }

static inline uint16_t HwCopterControlCreateInstance() { return UAVObjCreateInstance(HwCopterControlHandle(), &HwCopterControlSetDefaults); }

static inline void HwCopterControlRequestUpdate() { UAVObjRequestUpdate(HwCopterControlHandle()); }

static inline void HwCopterControlRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(HwCopterControlHandle(), instId); }

static inline void HwCopterControlUpdated() { UAVObjUpdated(HwCopterControlHandle()); }

static inline void HwCopterControlInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(HwCopterControlHandle(), instId); }

static inline int32_t HwCopterControlGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(HwCopterControlHandle(), dataOut); }

static inline int32_t HwCopterControlSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(HwCopterControlHandle(), dataIn); }

static inline int8_t HwCopterControlReadOnly() { return UAVObjReadOnly(HwCopterControlHandle()); }

static inline uint16_t HwCopterControlGetNumInstances(){ return UAVObjGetNumInstances(HwCopterControlHandle()); }

static inline uint32_t HwCopterControlGetNumBytes(){ return UAVObjGetNumBytes(HwCopterControlHandle()); }

// Field information
// Field RcvrPort information
/* Enumeration options for field RcvrPort */
typedef enum { HWCOPTERCONTROL_RCVRPORT_DISABLED=0, HWCOPTERCONTROL_RCVRPORT_PWM=1, HWCOPTERCONTROL_RCVRPORT_PPM=2, HWCOPTERCONTROL_RCVRPORT_PPMONPIN8=3, HWCOPTERCONTROL_RCVRPORT_PPMPWM=4, HWCOPTERCONTROL_RCVRPORT_PPMOUTPUTS=5, HWCOPTERCONTROL_RCVRPORT_OUTPUTS=6 }  __attribute__((packed)) HwCopterControlRcvrPortOptions;
/* Max value of any option in topmost parent RcvrPort of field RcvrPort */
#define HWCOPTERCONTROL_RCVRPORT_GLOBAL_MAXOPTVAL 6
/* Max value of any option in field RcvrPort */
#define HWCOPTERCONTROL_RCVRPORT_MAXOPTVAL 6
/* Ensure field RcvrPort contains valid data */
static inline bool HwCopterControlRcvrPortIsValid( uint8_t CurrentRcvrPort ) { return CurrentRcvrPort < HWCOPTERCONTROL_RCVRPORT_MAXOPTVAL; }
// Field MainPort information
/* Enumeration options for field MainPort */
typedef enum { HWCOPTERCONTROL_MAINPORT_DISABLED=HWSHARED_PORTTYPES_DISABLED, HWCOPTERCONTROL_MAINPORT_TELEMETRY=HWSHARED_PORTTYPES_TELEMETRY, HWCOPTERCONTROL_MAINPORT_GPS=HWSHARED_PORTTYPES_GPS, HWCOPTERCONTROL_MAINPORT_SBUS=HWSHARED_PORTTYPES_SBUS, HWCOPTERCONTROL_MAINPORT_DSM=HWSHARED_PORTTYPES_DSM, HWCOPTERCONTROL_MAINPORT_DEBUGCONSOLE=HWSHARED_PORTTYPES_DEBUGCONSOLE, HWCOPTERCONTROL_MAINPORT_COMBRIDGE=HWSHARED_PORTTYPES_COMBRIDGE, HWCOPTERCONTROL_MAINPORT_MAVLINKTX=HWSHARED_PORTTYPES_MAVLINKTX, HWCOPTERCONTROL_MAINPORT_MAVLINKTX_GPS_RX=HWSHARED_PORTTYPES_MAVLINKTX_GPS_RX, HWCOPTERCONTROL_MAINPORT_MSP=HWSHARED_PORTTYPES_MSP, HWCOPTERCONTROL_MAINPORT_FRSKYSENSORHUB=HWSHARED_PORTTYPES_FRSKYSENSORHUB, HWCOPTERCONTROL_MAINPORT_LIGHTTELEMETRYTX=HWSHARED_PORTTYPES_LIGHTTELEMETRYTX, HWCOPTERCONTROL_MAINPORT_HOTTSUMD=HWSHARED_PORTTYPES_HOTTSUMD, HWCOPTERCONTROL_MAINPORT_HOTTSUMH=HWSHARED_PORTTYPES_HOTTSUMH, HWCOPTERCONTROL_MAINPORT_DONTSWITCHONCHILDENUMS=255 }  __attribute__((packed)) HwCopterControlMainPortOptions;
/* Max value of any option in topmost parent PortTypes of field MainPort */
#define HWCOPTERCONTROL_MAINPORT_GLOBAL_MAXOPTVAL 20
/* Max value of any option in field MainPort */
#define HWCOPTERCONTROL_MAINPORT_MAXOPTVAL 15
/* Ensure field MainPort contains valid data */
static inline bool HwCopterControlMainPortIsValid( uint8_t CurrentMainPort ) { return CurrentMainPort < HWCOPTERCONTROL_MAINPORT_MAXOPTVAL; }
// Field FlexiPort information
/* Enumeration options for field FlexiPort */
typedef enum { HWCOPTERCONTROL_FLEXIPORT_DISABLED=HWSHARED_PORTTYPES_DISABLED, HWCOPTERCONTROL_FLEXIPORT_TELEMETRY=HWSHARED_PORTTYPES_TELEMETRY, HWCOPTERCONTROL_FLEXIPORT_GPS=HWSHARED_PORTTYPES_GPS, HWCOPTERCONTROL_FLEXIPORT_I2C=HWSHARED_PORTTYPES_I2C, HWCOPTERCONTROL_FLEXIPORT_DSM=HWSHARED_PORTTYPES_DSM, HWCOPTERCONTROL_FLEXIPORT_DEBUGCONSOLE=HWSHARED_PORTTYPES_DEBUGCONSOLE, HWCOPTERCONTROL_FLEXIPORT_COMBRIDGE=HWSHARED_PORTTYPES_COMBRIDGE, HWCOPTERCONTROL_FLEXIPORT_MAVLINKTX=HWSHARED_PORTTYPES_MAVLINKTX, HWCOPTERCONTROL_FLEXIPORT_FRSKYSENSORHUB=HWSHARED_PORTTYPES_FRSKYSENSORHUB, HWCOPTERCONTROL_FLEXIPORT_MSP=HWSHARED_PORTTYPES_MSP, HWCOPTERCONTROL_FLEXIPORT_LIGHTTELEMETRYTX=HWSHARED_PORTTYPES_LIGHTTELEMETRYTX, HWCOPTERCONTROL_FLEXIPORT_HOTTSUMD=HWSHARED_PORTTYPES_HOTTSUMD, HWCOPTERCONTROL_FLEXIPORT_HOTTSUMH=HWSHARED_PORTTYPES_HOTTSUMH, HWCOPTERCONTROL_FLEXIPORT_DONTSWITCHONCHILDENUMS=255 }  __attribute__((packed)) HwCopterControlFlexiPortOptions;
/* Max value of any option in topmost parent PortTypes of field FlexiPort */
#define HWCOPTERCONTROL_FLEXIPORT_GLOBAL_MAXOPTVAL 20
/* Max value of any option in field FlexiPort */
#define HWCOPTERCONTROL_FLEXIPORT_MAXOPTVAL 18
/* Ensure field FlexiPort contains valid data */
static inline bool HwCopterControlFlexiPortIsValid( uint8_t CurrentFlexiPort ) { return CurrentFlexiPort < HWCOPTERCONTROL_FLEXIPORT_MAXOPTVAL; }
// Field USB_HIDPort information
/* Enumeration options for field USB_HIDPort */
typedef enum { HWCOPTERCONTROL_USB_HIDPORT_USBTELEMETRY=HWSHARED_USB_HIDPORT_USBTELEMETRY, HWCOPTERCONTROL_USB_HIDPORT_DISABLED=HWSHARED_USB_HIDPORT_DISABLED, HWCOPTERCONTROL_USB_HIDPORT_DONTSWITCHONCHILDENUMS=255 }  __attribute__((packed)) HwCopterControlUSB_HIDPortOptions;
/* Max value of any option in topmost parent USB_HIDPort of field USB_HIDPort */
#define HWCOPTERCONTROL_USB_HIDPORT_GLOBAL_MAXOPTVAL 1
/* Max value of any option in field USB_HIDPort */
#define HWCOPTERCONTROL_USB_HIDPORT_MAXOPTVAL 1
/* Ensure field USB_HIDPort contains valid data */
static inline bool HwCopterControlUSB_HIDPortIsValid( uint8_t CurrentUSB_HIDPort ) { return CurrentUSB_HIDPort < HWCOPTERCONTROL_USB_HIDPORT_MAXOPTVAL; }
// Field USB_VCPPort information
/* Enumeration options for field USB_VCPPort */
typedef enum { HWCOPTERCONTROL_USB_VCPPORT_USBTELEMETRY=HWSHARED_USB_VCPPORT_USBTELEMETRY, HWCOPTERCONTROL_USB_VCPPORT_COMBRIDGE=HWSHARED_USB_VCPPORT_COMBRIDGE, HWCOPTERCONTROL_USB_VCPPORT_DEBUGCONSOLE=HWSHARED_USB_VCPPORT_DEBUGCONSOLE, HWCOPTERCONTROL_USB_VCPPORT_PICOC=HWSHARED_USB_VCPPORT_PICOC, HWCOPTERCONTROL_USB_VCPPORT_DISABLED=HWSHARED_USB_VCPPORT_DISABLED, HWCOPTERCONTROL_USB_VCPPORT_DONTSWITCHONCHILDENUMS=255 }  __attribute__((packed)) HwCopterControlUSB_VCPPortOptions;
/* Max value of any option in topmost parent USB_VCPPort of field USB_VCPPort */
#define HWCOPTERCONTROL_USB_VCPPORT_GLOBAL_MAXOPTVAL 4
/* Max value of any option in field USB_VCPPort */
#define HWCOPTERCONTROL_USB_VCPPORT_MAXOPTVAL 4
/* Ensure field USB_VCPPort contains valid data */
static inline bool HwCopterControlUSB_VCPPortIsValid( uint8_t CurrentUSB_VCPPort ) { return CurrentUSB_VCPPort < HWCOPTERCONTROL_USB_VCPPORT_MAXOPTVAL; }
// Field DSMxMode information
/* Enumeration options for field DSMxMode */
typedef enum { HWCOPTERCONTROL_DSMXMODE_AUTODETECT=HWSHARED_DSMXMODE_AUTODETECT, HWCOPTERCONTROL_DSMXMODE_FORCE10BIT=HWSHARED_DSMXMODE_FORCE10BIT, HWCOPTERCONTROL_DSMXMODE_FORCE11BIT=HWSHARED_DSMXMODE_FORCE11BIT, HWCOPTERCONTROL_DSMXMODE_BIND3PULSES=HWSHARED_DSMXMODE_BIND3PULSES, HWCOPTERCONTROL_DSMXMODE_BIND4PULSES=HWSHARED_DSMXMODE_BIND4PULSES, HWCOPTERCONTROL_DSMXMODE_BIND5PULSES=HWSHARED_DSMXMODE_BIND5PULSES, HWCOPTERCONTROL_DSMXMODE_BIND6PULSES=HWSHARED_DSMXMODE_BIND6PULSES, HWCOPTERCONTROL_DSMXMODE_BIND7PULSES=HWSHARED_DSMXMODE_BIND7PULSES, HWCOPTERCONTROL_DSMXMODE_BIND8PULSES=HWSHARED_DSMXMODE_BIND8PULSES, HWCOPTERCONTROL_DSMXMODE_BIND9PULSES=HWSHARED_DSMXMODE_BIND9PULSES, HWCOPTERCONTROL_DSMXMODE_BIND10PULSES=HWSHARED_DSMXMODE_BIND10PULSES, HWCOPTERCONTROL_DSMXMODE_DONTSWITCHONCHILDENUMS=255 }  __attribute__((packed)) HwCopterControlDSMxModeOptions;
/* Max value of any option in topmost parent DSMxMode of field DSMxMode */
#define HWCOPTERCONTROL_DSMXMODE_GLOBAL_MAXOPTVAL 10
/* Max value of any option in field DSMxMode */
#define HWCOPTERCONTROL_DSMXMODE_MAXOPTVAL 10
/* Ensure field DSMxMode contains valid data */
static inline bool HwCopterControlDSMxModeIsValid( uint8_t CurrentDSMxMode ) { return CurrentDSMxMode < HWCOPTERCONTROL_DSMXMODE_MAXOPTVAL; }
// Field GyroRange information
/* Enumeration options for field GyroRange */
typedef enum { HWCOPTERCONTROL_GYRORANGE_250=0, HWCOPTERCONTROL_GYRORANGE_500=1, HWCOPTERCONTROL_GYRORANGE_1000=2, HWCOPTERCONTROL_GYRORANGE_2000=3 }  __attribute__((packed)) HwCopterControlGyroRangeOptions;
/* Max value of any option in topmost parent GyroRange of field GyroRange */
#define HWCOPTERCONTROL_GYRORANGE_GLOBAL_MAXOPTVAL 3
/* Max value of any option in field GyroRange */
#define HWCOPTERCONTROL_GYRORANGE_MAXOPTVAL 3
/* Ensure field GyroRange contains valid data */
static inline bool HwCopterControlGyroRangeIsValid( uint8_t CurrentGyroRange ) { return CurrentGyroRange < HWCOPTERCONTROL_GYRORANGE_MAXOPTVAL; }
// Field AccelRange information
/* Enumeration options for field AccelRange */
typedef enum { HWCOPTERCONTROL_ACCELRANGE_2G=0, HWCOPTERCONTROL_ACCELRANGE_4G=1, HWCOPTERCONTROL_ACCELRANGE_8G=2, HWCOPTERCONTROL_ACCELRANGE_16G=3 }  __attribute__((packed)) HwCopterControlAccelRangeOptions;
/* Max value of any option in topmost parent AccelRange of field AccelRange */
#define HWCOPTERCONTROL_ACCELRANGE_GLOBAL_MAXOPTVAL 3
/* Max value of any option in field AccelRange */
#define HWCOPTERCONTROL_ACCELRANGE_MAXOPTVAL 3
/* Ensure field AccelRange contains valid data */
static inline bool HwCopterControlAccelRangeIsValid( uint8_t CurrentAccelRange ) { return CurrentAccelRange < HWCOPTERCONTROL_ACCELRANGE_MAXOPTVAL; }
// Field MPU6000Rate information
/* Enumeration options for field MPU6000Rate */
typedef enum { HWCOPTERCONTROL_MPU6000RATE_200=0, HWCOPTERCONTROL_MPU6000RATE_333=1, HWCOPTERCONTROL_MPU6000RATE_500=2, HWCOPTERCONTROL_MPU6000RATE_666=3, HWCOPTERCONTROL_MPU6000RATE_1000=4, HWCOPTERCONTROL_MPU6000RATE_2000=5, HWCOPTERCONTROL_MPU6000RATE_4000=6, HWCOPTERCONTROL_MPU6000RATE_8000=7 }  __attribute__((packed)) HwCopterControlMPU6000RateOptions;
/* Max value of any option in topmost parent MPU6000Rate of field MPU6000Rate */
#define HWCOPTERCONTROL_MPU6000RATE_GLOBAL_MAXOPTVAL 7
/* Max value of any option in field MPU6000Rate */
#define HWCOPTERCONTROL_MPU6000RATE_MAXOPTVAL 7
/* Ensure field MPU6000Rate contains valid data */
static inline bool HwCopterControlMPU6000RateIsValid( uint8_t CurrentMPU6000Rate ) { return CurrentMPU6000Rate < HWCOPTERCONTROL_MPU6000RATE_MAXOPTVAL; }
// Field MPU6000DLPF information
/* Enumeration options for field MPU6000DLPF */
typedef enum { HWCOPTERCONTROL_MPU6000DLPF_256=0, HWCOPTERCONTROL_MPU6000DLPF_188=1, HWCOPTERCONTROL_MPU6000DLPF_98=2, HWCOPTERCONTROL_MPU6000DLPF_42=3, HWCOPTERCONTROL_MPU6000DLPF_20=4, HWCOPTERCONTROL_MPU6000DLPF_10=5, HWCOPTERCONTROL_MPU6000DLPF_5=6 }  __attribute__((packed)) HwCopterControlMPU6000DLPFOptions;
/* Max value of any option in topmost parent MPU6000DLPF of field MPU6000DLPF */
#define HWCOPTERCONTROL_MPU6000DLPF_GLOBAL_MAXOPTVAL 6
/* Max value of any option in field MPU6000DLPF */
#define HWCOPTERCONTROL_MPU6000DLPF_MAXOPTVAL 6
/* Ensure field MPU6000DLPF contains valid data */
static inline bool HwCopterControlMPU6000DLPFIsValid( uint8_t CurrentMPU6000DLPF ) { return CurrentMPU6000DLPF < HWCOPTERCONTROL_MPU6000DLPF_MAXOPTVAL; }


// set/Get functions
extern void HwCopterControlRcvrPortSet( uint8_t *NewRcvrPort );
extern void HwCopterControlRcvrPortGet( uint8_t *NewRcvrPort );
extern void HwCopterControlMainPortSet( uint8_t *NewMainPort );
extern void HwCopterControlMainPortGet( uint8_t *NewMainPort );
extern void HwCopterControlFlexiPortSet( uint8_t *NewFlexiPort );
extern void HwCopterControlFlexiPortGet( uint8_t *NewFlexiPort );
extern void HwCopterControlUSB_HIDPortSet( uint8_t *NewUSB_HIDPort );
extern void HwCopterControlUSB_HIDPortGet( uint8_t *NewUSB_HIDPort );
extern void HwCopterControlUSB_VCPPortSet( uint8_t *NewUSB_VCPPort );
extern void HwCopterControlUSB_VCPPortGet( uint8_t *NewUSB_VCPPort );
extern void HwCopterControlDSMxModeSet( uint8_t *NewDSMxMode );
extern void HwCopterControlDSMxModeGet( uint8_t *NewDSMxMode );
extern void HwCopterControlGyroRangeSet( uint8_t *NewGyroRange );
extern void HwCopterControlGyroRangeGet( uint8_t *NewGyroRange );
extern void HwCopterControlAccelRangeSet( uint8_t *NewAccelRange );
extern void HwCopterControlAccelRangeGet( uint8_t *NewAccelRange );
extern void HwCopterControlMPU6000RateSet( uint8_t *NewMPU6000Rate );
extern void HwCopterControlMPU6000RateGet( uint8_t *NewMPU6000Rate );
extern void HwCopterControlMPU6000DLPFSet( uint8_t *NewMPU6000DLPF );
extern void HwCopterControlMPU6000DLPFGet( uint8_t *NewMPU6000DLPF );


#endif // HWCOPTERCONTROL_H

/**
 * @}
 * @}
 */
