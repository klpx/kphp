#pragma once

#include <cstring>

#include "runtime/memory_resource/memory_resource.h"

namespace memory_resource {
namespace details {

template<typename Allocator>
void *universal_reallocate(Allocator &alloc, void *mem, size_type new_size, size_type old_size) {
  if (void *new_mem = alloc.try_expand(mem, new_size, old_size)) {
    memory_debug("reallocate %d to %d, reallocated address %p\n", old_size, new_size, new_mem);
    return new_mem;
  }

  void *new_mem = alloc.allocate(new_size);
  if (new_mem != nullptr) {
    memcpy(new_mem, mem, old_size);
    alloc.deallocate(mem, old_size);
  }
  return new_mem;
}

} // namespace details
} // namespace memory_resource