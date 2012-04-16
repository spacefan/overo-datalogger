/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup HomeLocation HomeLocation 
 * @brief HomeLocation setting which contains the constants to tranlate from longitutde and latitude to NED reference frame.  Automatically set by @ref GPSModule after acquiring a 3D lock.  Used by @ref AHRSCommsModule.
 *
 * Autogenerated files and functions for HomeLocation Object
 
 * @{ 
 *
 * @file       homelocation.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Implementation of the HomeLocation object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: homelocation.xml. 
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

#ifndef HOMELOCATION_H
#define HOMELOCATION_H

// Object constants
#define HOMELOCATION_OBJID 0x6185DC6E
#define HOMELOCATION_NAME "HomeLocation"
#define HOMELOCATION_METANAME "HomeLocationMeta"
#define HOMELOCATION_ISSINGLEINST 1
#define HOMELOCATION_ISSETTINGS 1
#define HOMELOCATION_NUMBYTES sizeof(HomeLocationData)

// Object access macros
/**
 * @function HomeLocationGet(dataOut)
 * @brief Populate a HomeLocationData object
 * @param[out] dataOut 
 */
#define HomeLocationGet(dataOut) UAVObjGetData(HomeLocationHandle(), dataOut)
#define HomeLocationSet(dataIn) UAVObjSetData(HomeLocationHandle(), dataIn)
#define HomeLocationInstGet(instId, dataOut) UAVObjGetInstanceData(HomeLocationHandle(), instId, dataOut)
#define HomeLocationInstSet(instId, dataIn) UAVObjSetInstanceData(HomeLocationHandle(), instId, dataIn)
#define HomeLocationConnectQueue(queue) UAVObjConnectQueue(HomeLocationHandle(), queue, EV_MASK_ALL_UPDATES)
#define HomeLocationConnectCallback(cb) UAVObjConnectCallback(HomeLocationHandle(), cb, EV_MASK_ALL_UPDATES)
#define HomeLocationCreateInstance() UAVObjCreateInstance(HomeLocationHandle(),&HomeLocationSetDefaults)
#define HomeLocationRequestUpdate() UAVObjRequestUpdate(HomeLocationHandle())
#define HomeLocationRequestInstUpdate(instId) UAVObjRequestInstanceUpdate(HomeLocationHandle(), instId)
#define HomeLocationUpdated() UAVObjUpdated(HomeLocationHandle())
#define HomeLocationInstUpdated(instId) UAVObjUpdated(HomeLocationHandle(), instId)
#define HomeLocationGetMetadata(dataOut) UAVObjGetMetadata(HomeLocationHandle(), dataOut)
#define HomeLocationSetMetadata(dataIn) UAVObjSetMetadata(HomeLocationHandle(), dataIn)
#define HomeLocationReadOnly() UAVObjReadOnly(HomeLocationHandle())

// Object data
typedef struct {
    int32_t Latitude;
    int32_t Longitude;
    float Altitude;
    float Be[3];
    float g_e;
    uint8_t Set;

} __attribute__((packed)) HomeLocationData;

// Field information
// Field Latitude information
// Field Longitude information
// Field Altitude information
// Field Be information
/* Number of elements for field Be */
#define HOMELOCATION_BE_NUMELEM 3
// Field g_e information
// Field Set information
/* Enumeration options for field Set */
typedef enum { HOMELOCATION_SET_FALSE=0, HOMELOCATION_SET_TRUE=1 } HomeLocationSetOptions;


// Generic interface functions
int32_t HomeLocationInitialize();
UAVObjHandle HomeLocationHandle();
void HomeLocationSetDefaults(UAVObjHandle obj, uint16_t instId);

// set/Get functions
extern void HomeLocationLatitudeSet( int32_t *NewLatitude );
extern void HomeLocationLatitudeGet( int32_t *NewLatitude );
extern void HomeLocationLongitudeSet( int32_t *NewLongitude );
extern void HomeLocationLongitudeGet( int32_t *NewLongitude );
extern void HomeLocationAltitudeSet( float *NewAltitude );
extern void HomeLocationAltitudeGet( float *NewAltitude );
extern void HomeLocationBeSet( float *NewBe );
extern void HomeLocationBeGet( float *NewBe );
extern void HomeLocationg_eSet( float *Newg_e );
extern void HomeLocationg_eGet( float *Newg_e );
extern void HomeLocationSetSet( uint8_t *NewSet );
extern void HomeLocationSetGet( uint8_t *NewSet );


#endif // HOMELOCATION_H

/**
 * @}
 * @}
 */
