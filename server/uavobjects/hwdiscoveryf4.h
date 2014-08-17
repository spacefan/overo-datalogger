/**
 ******************************************************************************
 * @addtogroup UAVObjects UAVObject set for this firmware
 * @{
 * @addtogroup HwDiscoveryF4 HwDiscoveryF4
 * @brief Selection of optional hardware configurations.
 *
 *
 * @file       hwdiscoveryf4.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     Tau Labs, http://taulabs.org, Copyright (C) 2012-2013
 * @brief      Include files for the HwDiscoveryF4 object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: hwdiscoveryf4.xml. 
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

#ifndef HWDISCOVERYF4_H
#define HWDISCOVERYF4_H

// Object constants
#define HWDISCOVERYF4_OBJID 0x416D89A8
#define HWDISCOVERYF4_ISSINGLEINST 1
#define HWDISCOVERYF4_ISSETTINGS 1
#define HWDISCOVERYF4_NUMBYTES 3

// Generic interface functions
int32_t HwDiscoveryF4Initialize();
UAVObjHandle HwDiscoveryF4Handle();
void HwDiscoveryF4SetDefaults(UAVObjHandle obj, uint16_t instId);

// Object data
typedef struct {
    uint8_t MainPort;
    uint8_t USB_HIDPort;
    uint8_t USB_VCPPort;

} __attribute__((packed)) __attribute__((aligned(4))) HwDiscoveryF4Data;

// Typesafe Object access functions
/**
 * @function HwDiscoveryF4Get(dataOut)
 * @brief Populate a HwDiscoveryF4Data object
 * @param[out] dataOut 
 */
static inline int32_t HwDiscoveryF4Get(HwDiscoveryF4Data *dataOut) { return UAVObjGetData(HwDiscoveryF4Handle(), dataOut); }

static inline int32_t HwDiscoveryF4Set(const HwDiscoveryF4Data *dataIn) { return UAVObjSetData(HwDiscoveryF4Handle(), dataIn); }

static inline int32_t HwDiscoveryF4InstGet(uint16_t instId, HwDiscoveryF4Data *dataOut) { return UAVObjGetInstanceData(HwDiscoveryF4Handle(), instId, dataOut); }

static inline int32_t HwDiscoveryF4InstSet(uint16_t instId, const HwDiscoveryF4Data *dataIn) { return UAVObjSetInstanceData(HwDiscoveryF4Handle(), instId, dataIn); }

static inline int32_t HwDiscoveryF4ConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(HwDiscoveryF4Handle(), queue, EV_MASK_ALL_UPDATES); }

static inline int32_t HwDiscoveryF4ConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(HwDiscoveryF4Handle(), cb, EV_MASK_ALL_UPDATES); }

static inline uint16_t HwDiscoveryF4CreateInstance() { return UAVObjCreateInstance(HwDiscoveryF4Handle(), &HwDiscoveryF4SetDefaults); }

static inline void HwDiscoveryF4RequestUpdate() { UAVObjRequestUpdate(HwDiscoveryF4Handle()); }

static inline void HwDiscoveryF4RequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(HwDiscoveryF4Handle(), instId); }

static inline void HwDiscoveryF4Updated() { UAVObjUpdated(HwDiscoveryF4Handle()); }

static inline void HwDiscoveryF4InstUpdated(uint16_t instId) { UAVObjInstanceUpdated(HwDiscoveryF4Handle(), instId); }

static inline int32_t HwDiscoveryF4GetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(HwDiscoveryF4Handle(), dataOut); }

static inline int32_t HwDiscoveryF4SetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(HwDiscoveryF4Handle(), dataIn); }

static inline int8_t HwDiscoveryF4ReadOnly() { return UAVObjReadOnly(HwDiscoveryF4Handle()); }

static inline uint16_t HwDiscoveryF4GetNumInstances(){ return UAVObjGetNumInstances(HwDiscoveryF4Handle()); }

static inline uint32_t HwDiscoveryF4GetNumBytes(){ return UAVObjGetNumBytes(HwDiscoveryF4Handle()); }

// Field information
// Field MainPort information
/* Enumeration options for field MainPort */
typedef enum { HWDISCOVERYF4_MAINPORT_DISABLED=0, HWDISCOVERYF4_MAINPORT_TELEMETRY=1, HWDISCOVERYF4_MAINPORT_DEBUGCONSOLE=2 }  __attribute__((packed)) HwDiscoveryF4MainPortOptions;
// Field USB_HIDPort information
/* Enumeration options for field USB_HIDPort */
typedef enum { HWDISCOVERYF4_USB_HIDPORT_USBTELEMETRY=0, HWDISCOVERYF4_USB_HIDPORT_RCTRANSMITTER=1, HWDISCOVERYF4_USB_HIDPORT_DISABLED=2 }  __attribute__((packed)) HwDiscoveryF4USB_HIDPortOptions;
// Field USB_VCPPort information
/* Enumeration options for field USB_VCPPort */
typedef enum { HWDISCOVERYF4_USB_VCPPORT_USBTELEMETRY=0, HWDISCOVERYF4_USB_VCPPORT_COMBRIDGE=1, HWDISCOVERYF4_USB_VCPPORT_DEBUGCONSOLE=2, HWDISCOVERYF4_USB_VCPPORT_DISABLED=3 }  __attribute__((packed)) HwDiscoveryF4USB_VCPPortOptions;


// set/Get functions
extern void HwDiscoveryF4MainPortSet( uint8_t *NewMainPort );
extern void HwDiscoveryF4MainPortGet( uint8_t *NewMainPort );
extern void HwDiscoveryF4USB_HIDPortSet( uint8_t *NewUSB_HIDPort );
extern void HwDiscoveryF4USB_HIDPortGet( uint8_t *NewUSB_HIDPort );
extern void HwDiscoveryF4USB_VCPPortSet( uint8_t *NewUSB_VCPPort );
extern void HwDiscoveryF4USB_VCPPortGet( uint8_t *NewUSB_VCPPort );


#endif // HWDISCOVERYF4_H

/**
 * @}
 * @}
 */
