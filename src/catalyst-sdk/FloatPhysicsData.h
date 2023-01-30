//
// Generated with FrostbiteGen by Chod
// File: SDK\FloatPhysicsData.h
// Created: Mon Jan 23 07:17:31 2023
//

#ifndef FBGEN_FloatPhysicsData_H
#define FBGEN_FloatPhysicsData_H

#include "DataContainer.h"

class FloatPhysicsData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282EC90;
	}
	float m_Density; // 0x10
	float m_FilledDensity; // 0x14
}; // size = 0x18

#endif // FBGEN_FloatPhysicsData_H
