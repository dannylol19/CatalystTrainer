//
// Generated with FrostbiteGen by Chod
// File: SDK\PoseTransitionTime.h
// Created: Mon Jan 23 07:17:29 2023
//

#ifndef FBGEN_PoseTransitionTime_H
#define FBGEN_PoseTransitionTime_H

#include "CharacterPoseType.h"
struct PoseTransitionTime
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282BE78;
	}
	CharacterPoseType m_ToPose; // 0x0
	float m_TransitionTime; // 0x4
}; // size = 0x8

#endif // FBGEN_PoseTransitionTime_H
