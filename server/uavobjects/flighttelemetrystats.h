/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup FlightTelemetryStats FlightTelemetryStats 
 * @brief Maintains the telemetry statistics from the OpenPilot flight computer.
 *
 * Autogenerated files and functions for FlightTelemetryStats Object
 
 * @{ 
 *
 * @file       flighttelemetrystats.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Implementation of the FlightTelemetryStats object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: flighttelemetrystats.xml. 
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

#ifndef FLIGHTTELEMETRYSTATS_H
#define FLIGHTTELEMETRYSTATS_H

// Object constants
#define FLIGHTTELEMETRYSTATS_OBJID 0x2F7E2902
#define FLIGHTTELEMETRYSTATS_ISSINGLEINST 1
#define FLIGHTTELEMETRYSTATS_ISSETTINGS 0
#define FLIGHTTELEMETRYSTATS_NUMBYTES sizeof(FlightTelemetryStatsData)

// Object access macros
/**
 * @function FlightTelemetryStatsGet(dataOut)
 * @brief Populate a FlightTelemetryStatsData object
 * @param[out] dataOut 
 */
#define FlightTelemetryStatsGet(dataOut) UAVObjGetData(FlightTelemetryStatsHandle(), dataOut)
#define FlightTelemetryStatsSet(dataIn) UAVObjSetData(FlightTelemetryStatsHandle(), dataIn)
#define FlightTelemetryStatsInstGet(instId, dataOut) UAVObjGetInstanceData(FlightTelemetryStatsHandle(), instId, dataOut)
#define FlightTelemetryStatsInstSet(instId, dataIn) UAVObjSetInstanceData(FlightTelemetryStatsHandle(), instId, dataIn)
#define FlightTelemetryStatsConnectQueue(queue) UAVObjConnectQueue(FlightTelemetryStatsHandle(), queue, EV_MASK_ALL_UPDATES)
#define FlightTelemetryStatsConnectCallback(cb) UAVObjConnectCallback(FlightTelemetryStatsHandle(), cb, EV_MASK_ALL_UPDATES)
#define FlightTelemetryStatsCreateInstance() UAVObjCreateInstance(FlightTelemetryStatsHandle(),&FlightTelemetryStatsSetDefaults)
#define FlightTelemetryStatsRequestUpdate() UAVObjRequestUpdate(FlightTelemetryStatsHandle())
#define FlightTelemetryStatsRequestInstUpdate(instId) UAVObjRequestInstanceUpdate(FlightTelemetryStatsHandle(), instId)
#define FlightTelemetryStatsUpdated() UAVObjUpdated(FlightTelemetryStatsHandle())
#define FlightTelemetryStatsInstUpdated(instId) UAVObjUpdated(FlightTelemetryStatsHandle(), instId)
#define FlightTelemetryStatsGetMetadata(dataOut) UAVObjGetMetadata(FlightTelemetryStatsHandle(), dataOut)
#define FlightTelemetryStatsSetMetadata(dataIn) UAVObjSetMetadata(FlightTelemetryStatsHandle(), dataIn)
#define FlightTelemetryStatsReadOnly() UAVObjReadOnly(FlightTelemetryStatsHandle())

// Object data
typedef struct {
    float TxDataRate;
    float RxDataRate;
    uint32_t TxFailures;
    uint32_t RxFailures;
    uint32_t TxRetries;
    uint8_t Status;

} __attribute__((packed)) FlightTelemetryStatsData;

// Field information
// Field TxDataRate information
// Field RxDataRate information
// Field TxFailures information
// Field RxFailures information
// Field TxRetries information
// Field Status information
/* Enumeration options for field Status */
typedef enum { FLIGHTTELEMETRYSTATS_STATUS_DISCONNECTED=0, FLIGHTTELEMETRYSTATS_STATUS_HANDSHAKEREQ=1, FLIGHTTELEMETRYSTATS_STATUS_HANDSHAKEACK=2, FLIGHTTELEMETRYSTATS_STATUS_CONNECTED=3 } FlightTelemetryStatsStatusOptions;


// Generic interface functions
int32_t FlightTelemetryStatsInitialize();
UAVObjHandle FlightTelemetryStatsHandle();
void FlightTelemetryStatsSetDefaults(UAVObjHandle obj, uint16_t instId);

// set/Get functions
extern void FlightTelemetryStatsTxDataRateSet( float *NewTxDataRate );
extern void FlightTelemetryStatsTxDataRateGet( float *NewTxDataRate );
extern void FlightTelemetryStatsRxDataRateSet( float *NewRxDataRate );
extern void FlightTelemetryStatsRxDataRateGet( float *NewRxDataRate );
extern void FlightTelemetryStatsTxFailuresSet( uint32_t *NewTxFailures );
extern void FlightTelemetryStatsTxFailuresGet( uint32_t *NewTxFailures );
extern void FlightTelemetryStatsRxFailuresSet( uint32_t *NewRxFailures );
extern void FlightTelemetryStatsRxFailuresGet( uint32_t *NewRxFailures );
extern void FlightTelemetryStatsTxRetriesSet( uint32_t *NewTxRetries );
extern void FlightTelemetryStatsTxRetriesGet( uint32_t *NewTxRetries );
extern void FlightTelemetryStatsStatusSet( uint8_t *NewStatus );
extern void FlightTelemetryStatsStatusGet( uint8_t *NewStatus );


#endif // FLIGHTTELEMETRYSTATS_H

/**
 * @}
 * @}
 */
