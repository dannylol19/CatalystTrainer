//
// Generated with FrostbiteGen by Chod
// File: SDK\SoundScopeStrategyData.h
// Created: Mon Jan 23 07:17:27 2023
//

#ifndef FBGEN_SoundScopeStrategyData_H
#define FBGEN_SoundScopeStrategyData_H

#include "Array.h"
#include "DataContainer.h"
#include "SoundScopeStageData.h"

class SoundScopeStrategyData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C82E0;
	}
	const char* m_Name; // 0x10
	Array<SoundScopeStageData*> m_Stages; // 0x18
}; // size = 0x20

#endif // FBGEN_SoundScopeStrategyData_H
