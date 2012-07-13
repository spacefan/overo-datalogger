/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup GPSSatellites GPSSatellites 
 * @brief Contains information about the GPS satellites in view from @ref GPSModule.
 *
 * Autogenerated files and functions for GPSSatellites Object
 
 * @{ 
 *
 * @file       gpssatellites.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Implementation of the GPSSatellites object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: gpssatellites.xml. 
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

#ifndef GPSSATELLITES_H
#define GPSSATELLITES_H

// Object constants
#define GPSSATELLITES_OBJID 0x920D998
#define GPSSATELLITES_ISSINGLEINST 1
#define GPSSATELLITES_ISSETTINGS 0
#define GPSSATELLITES_NUMBYTES sizeof(GPSSatellitesData)

// Object access macros
/**
 * @function GPSSatellitesGet(dataOut)
 * @brief Populate a GPSSatellitesData object
 * @param[out] dataOut 
 */
#define GPSSatellitesGet(dataOut) UAVObjGetData(GPSSatellitesHandle(), dataOut)
#define GPSSatellitesSet(dataIn) UAVObjSetData(GPSSatellitesHandle(), dataIn)
#define GPSSatellitesInstGet(instId, dataOut) UAVObjGetInstanceData(GPSSatellitesHandle(), instId, dataOut)
#define GPSSatellitesInstSet(instId, dataIn) UAVObjSetInstanceData(GPSSatellitesHandle(), instId, dataIn)
#define GPSSatellitesConnectQueue(queue) UAVObjConnectQueue(GPSSatellitesHandle(), queue, EV_MASK_ALL_UPDATES)
#define GPSSatellitesConnectCallback(cb) UAVObjConnectCallback(GPSSatellitesHandle(), cb, EV_MASK_ALL_UPDATES)
#define GPSSatellitesCreateInstance() UAVObjCreateInstance(GPSSatellitesHandle(),&GPSSatellitesSetDefaults)
#define GPSSatellitesRequestUpdate() UAVObjRequestUpdate(GPSSatellitesHandle())
#define GPSSatellitesRequestInstUpdate(instId) UAVObjRequestInstanceUpdate(GPSSatellitesHandle(), instId)
#define GPSSatellitesUpdated() UAVObjUpdated(GPSSatellitesHandle())
#define GPSSatellitesInstUpdated(instId) UAVObjUpdated(GPSSatellitesHandle(), instId)
#define GPSSatellitesGetMetadata(dataOut) UAVObjGetMetadata(GPSSatellitesHandle(), dataOut)
#define GPSSatellitesSetMetadata(dataIn) UAVObjSetMetadata(GPSSatellitesHandle(), dataIn)
#define GPSSatellitesReadOnly() UAVObjReadOnly(GPSSatellitesHandle())

// Object data
typedef struct {
    float Elevation[16];
    float Azimuth[16];
    int8_t SatsInView;
    int8_t PRN[16];
    int8_t SNR[16];

} __attribute__((packed)) GPSSatellitesData;

// Field information
// Field Elevation information
/* Number of elements for field Elevation */
#define GPSSATELLITES_ELEVATION_NUMELEM 16
// Field Azimuth information
/* Number of elements for field Azimuth */
#define GPSSATELLITES_AZIMUTH_NUMELEM 16
// Field SatsInView information
// Field PRN information
/* Number of elements for field PRN */
#define GPSSATELLITES_PRN_NUMELEM 16
// Field SNR information
/* Number of elements for field SNR */
#define GPSSATELLITES_SNR_NUMELEM 16


// Generic interface functions
int32_t GPSSatellitesInitialize();
UAVObjHandle GPSSatellitesHandle();
void GPSSatellitesSetDefaults(UAVObjHandle obj, uint16_t instId);

// set/Get functions
extern void GPSSatellitesElevationSet( float *NewElevation );
extern void GPSSatellitesElevationGet( float *NewElevation );
extern void GPSSatellitesAzimuthSet( float *NewAzimuth );
extern void GPSSatellitesAzimuthGet( float *NewAzimuth );
extern void GPSSatellitesSatsInViewSet( int8_t *NewSatsInView );
extern void GPSSatellitesSatsInViewGet( int8_t *NewSatsInView );
extern void GPSSatellitesPRNSet( int8_t *NewPRN );
extern void GPSSatellitesPRNGet( int8_t *NewPRN );
extern void GPSSatellitesSNRSet( int8_t *NewSNR );
extern void GPSSatellitesSNRGet( int8_t *NewSNR );


#endif // GPSSATELLITES_H

/**
 * @}
 * @}
 */
