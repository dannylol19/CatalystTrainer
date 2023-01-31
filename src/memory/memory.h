#pragma once
#include <cstdint>
#include "../generic/Pointer.h"

namespace memory {
  template<typename Type>
  Type* deref(const Pointer<Type>& ptr);

  template<typename Type>
  void write(Pointer<Type>& ptr, Type value);

  template<typename Type>
  Type read(const Pointer<Type>& ptr);
}