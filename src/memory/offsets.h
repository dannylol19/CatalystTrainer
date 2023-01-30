#pragma once
#include <cstdint>
#include <array>

#include "memory.h"
#include "../generic/Vector.h"

// credits to https://github.com/tremwil/CatalystAPI for the offset values
namespace offsets {
  namespace plr {
	constexpr Pointer<Vector3<float>> position {.base = 0x142578a68, .offsets = {0x70, 0x98, 0x238, 0x18, 0x22d0}};
  }
  namespace game {
	
  }
}