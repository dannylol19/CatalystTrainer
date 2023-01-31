#pragma once
#include <cstdint>
#include <vector>

template<typename Type>
struct Pointer {
  uintptr_t base;
  std::vector<uintptr_t> offsets;
};