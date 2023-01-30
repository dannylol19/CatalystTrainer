//
// Generated with FrostbiteGen by Chod
// File: SDK\Asset.h
// Created: Mon Jan 23 07:17:33 2023
//

#ifndef FBGEN_Asset_H
#define FBGEN_Asset_H

#include "DataContainer.h"

class Asset :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B2340;
	}
	const char* m_Name; // 0x10
}; // size = 0x18

#endif // FBGEN_Asset_H
