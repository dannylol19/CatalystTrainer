//
// Generated with FrostbiteGen by Chod
// File: SDK\SoundScopeData.h
// Created: Mon Jan 23 07:17:27 2023
//

#ifndef FBGEN_SoundScopeData_H
#define FBGEN_SoundScopeData_H

#include "SoundScopeStrategyData.h"
#include "DataContainer.h"

class SoundScopeData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C83A0;
	}
	const char* m_Name; // 0x10
	SoundScopeStrategyData* m_DefaultStrategy; // 0x18
}; // size = 0x20

#endif // FBGEN_SoundScopeData_H
