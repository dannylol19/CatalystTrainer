//
// Generated with FrostbiteGen by Chod
// File: SDK\GamePhysicsEntityData.h
// Created: Mon Jan 23 07:17:31 2023
//

#ifndef FBGEN_GamePhysicsEntityData_H
#define FBGEN_GamePhysicsEntityData_H

#include "PhysicsEntityData.h"
#include "GameComponentEntityData.h"

class GamePhysicsEntityData :
	public GameComponentEntityData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282F830;
	}
	PhysicsEntityData* m_PhysicsData; // 0x80
	unsigned char _0x88[0x8];
}; // size = 0x90

#endif // FBGEN_GamePhysicsEntityData_H
