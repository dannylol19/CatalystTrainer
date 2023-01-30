//
// Generated with FrostbiteGen by Chod
// File: SDK\PlayerViewDefinition.h
// Created: Mon Jan 23 07:17:29 2023
//

#ifndef FBGEN_PlayerViewDefinition_H
#define FBGEN_PlayerViewDefinition_H

#include "LocalPlayerId.h"
#include "Array.h"
#include "ViewDefinition.h"

struct PlayerViewDefinition
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142816060;
	}
	LocalPlayerId m_LocalPlayerId; // 0x0
	unsigned char _0x4[0x4];
	Array<ViewDefinition> m_Views; // 0x8
}; // size = 0x10

#endif // FBGEN_PlayerViewDefinition_H
