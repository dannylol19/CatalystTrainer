//
// Generated with FrostbiteGen by Chod
// File: SDK\CharacterStateData.h
// Created: Mon Jan 23 07:17:33 2023
//

#ifndef FBGEN_CharacterStateData_H
#define FBGEN_CharacterStateData_H

#include "Array.h"
#include "DataContainer.h"
#include "CharacterStatePoseInfo.h"

class CharacterStateData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282C4A0;
	}
	Array<CharacterStatePoseInfo*> m_PoseInfo; // 0x10
}; // size = 0x18

#endif // FBGEN_CharacterStateData_H
