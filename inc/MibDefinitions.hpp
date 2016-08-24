/*
 * MibDefinitions.hpp
 * This OID taken from Nemsta VM for Sanur B/Jogja [172.19.12.29]
 *
 *  Created on: Aug 23, 2016
 *      Author: Ari Suarkadipa
 */

#ifndef INC_MIBDEFINITIONS_HPP_
#define INC_MIBDEFINITIONS_HPP_



// Dhcp Server start time
#define DHCP_MIB_PAR_DHCP_START_TIME ".1.3.6.1.4.1.311.1.3.1.1"

// The total number of Messages delivered to the SNMP entity from the transport service.
#define RFC1213_MIB_SNMP_IN_PKTS ".1.3.6.1.2.1.11.1"

// The total number of SNMP Trap PDUs which have been accepted and processed by the SNMP protocol entity.
#define RFC1213_MIB_SNMP_IN_TRAPS ".1.3.6.1.2.1.11.19"

//  The amount of physical main memory contained by the host.
#define HOST_RESOURCES_MIB_HR_MEMORY_SIZE ".1.3.6.1.2.1.25.2.2"

// The product ID of the firmware associated with the processor.
#define HOST_RESOURCES_MIB_HR_PROCESSOR_FRW_ID ".1.3.6.1.2.1.25.3.3.1.1"

// The average, over the last minute, of the percentage of time that this processor was not idle.
#define HOST_RESOURCES_MIB_HR_PROCESSOR_LOAD ".1.3.6.1.2.1.25.3.3.1.2"

/*  The current status of this printer device.
 *	When in the idle(1), printing(2), or warmup(3) state,
 *	the corresponding hrDeviceStatus should be
 *	running(2) or warning(3).  When in the unknown
 *	state, the corresponding hrDeviceStatus should be
 *	unknown(1).
 */
#define HOST_RESOURCES_MIB_HR_PRINTER_STATUS ".1.3.6.1.2.1.25.3.5.1.1"

// The type of storage represented by this entry.
#define HOST_RESOURCES_MIB_HR_STORAGE_TYPE ".1.3.6.1.2.1.25.2.3.1.2"

//  A description of the type and instance of the storage described by this entry.
#define HOST_RESOURCES_MIB_HR_STORAGE_DESCR ".1.3.6.1.2.1.25.2.3.1.3"

//  The amount of the storage represented by this entry that is allocated, in units of hrStorageAllocationUnits.
#define HOST_RESOURCES_MIB_HR_STORAGE_USED ".1.3.6.1.2.1.25.2.3.1.6"

/*  The size, in bytes, of the data objects allocated
 * from this pool.  If this entry is monitoring
 * sectors, blocks, buffers, or packets, for example,
 * this number will commonly be greater than one.
 * Otherwise this number will typically be one.
 */
#define HOST_RESOURCES_MIB_HR_STORAGE_ALLOCATION_UNITS ".1.3.6.1.2.1.25.2.3.1.4"

#endif /* INC_MIBDEFINITIONS_HPP_ */
