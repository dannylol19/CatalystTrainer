//
// Generated with FrostbiteGen by Chod
// File: SDK\SoundDataChunk.h
// Created: Mon Jan 23 07:17:28 2023
//

#ifndef FBGEN_SoundDataChunk_H
#define FBGEN_SoundDataChunk_H

#include "Guid.h"
struct SoundDataChunk
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D0588;
	}
	Guid m_ChunkId; // 0x0
	unsigned int m_ChunkSize; // 0x10
}; // size = 0x14

#endif // FBGEN_SoundDataChunk_H
