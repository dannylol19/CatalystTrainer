#include "memory.h"

namespace memory {
  template<typename Type>
  Type* deref(const Pointer<Type>& pointer) {
    uintptr_t addr = pointer.base;
    for (const auto offset : pointer.offsets) {
      addr = *reinterpret_cast<uintptr_t*>(addr);
      addr += offset;
    }
    return reinterpret_cast<Type*>(addr);
  }
}