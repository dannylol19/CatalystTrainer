//
// Generated with FrostbiteGen by Chod
// File: SDK\SpeedModifierData.h
// Created: Mon Jan 23 07:17:27 2023
//

#ifndef FBGEN_SpeedModifierData_H
#define FBGEN_SpeedModifierData_H

struct SpeedModifierData
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282BCE0;
	}
	float m_ForwardConstant; // 0x0
	float m_BackwardConstant; // 0x4
	float m_LeftConstant; // 0x8
	float m_RightConstant; // 0xc
}; // size = 0x10

#endif // FBGEN_SpeedModifierData_H
