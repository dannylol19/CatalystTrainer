//
// Generated with FrostbiteGen by Chod
// File: SDK\EntityVoiceOverInfo.h
// Created: Mon Jan 23 07:17:31 2023
//

#ifndef FBGEN_EntityVoiceOverInfo_H
#define FBGEN_EntityVoiceOverInfo_H

#include "VoiceOverObject.h"
#include "Array.h"
#include "DataContainer.h"
#include "VoiceOverLabel.h"

class EntityVoiceOverInfo :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D4F10;
	}
	VoiceOverObject* m_VoiceOverType; // 0x10
	Array<VoiceOverLabel*> m_Labels; // 0x18
}; // size = 0x20

#endif // FBGEN_EntityVoiceOverInfo_H
