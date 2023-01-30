//
// Generated with FrostbiteGen by Chod
// File: SDK\ProximityData.h
// Created: Mon Jan 23 07:17:28 2023
//

#ifndef FBGEN_ProximityData_H
#define FBGEN_ProximityData_H

#include "ProximityObjectType.h"
#include "DataContainer.h"

class ProximityData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282FBF0;
	}
	ProximityObjectType m_ProximityType; // 0x10
	unsigned char _0x14[0x4];
}; // size = 0x18

#endif // FBGEN_ProximityData_H
