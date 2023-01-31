#pragma once
#include "features.h"
#include "../memory/memory.h"
#include "../memory/pointers.h"

namespace features {
  void godmode() {
	memory::write(pointers::player::health, 7);
  }
}