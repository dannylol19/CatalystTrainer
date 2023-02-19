#include "memory.h"

namespace memory {
  template<typename Type>
  Type* deref(const Pointer<Type>& ptr) {
    uintptr_t addr = ptr.base;
    for (const auto offset : ptr.offsets) {
      addr = *reinterpret_cast<uintptr_t*>(addr);
      addr += offset;
    }
    return reinterpret_cast<Type*>(addr);
  }

  template<typename Type>
  void write(Pointer<Type>& ptr, Type value) {
    *deref(ptr) = value;
  }

  template<typename Type>
  Type read(const Pointer<Type>& ptr) {
    return *deref(ptr);
  }
}