#pragma once
#include <cstdint>

template<typename Type>
struct Pointer {
  uintptr_t base;
  uintptr_t offsets[];
};