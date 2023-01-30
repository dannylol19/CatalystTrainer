#pragma once
#include <cstdint>
#include "../generic/Pointer.h"

namespace memory {
  template<typename Type>
  Type* deref(const Pointer<Type>& pointer);
}