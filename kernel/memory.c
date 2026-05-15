
#include "memory.h"
#include "kernel.h"
#include "multiboot_metadata.h"

void memset(void *addr, uint32 c, uint32 size) {
  uint8 *p = (uint8 *)addr;
  while (size--) {
    p[size] = c;
  }
}

void show_physical_memory() {

  kprint("\nmultiboot header: 0x");
  kprint_hex((uint32)&multiboot_header);
  kprint("\n-------------kernel-------------");
  kprint("\n   .text        : 0x");
  kprint_hex((uint32)&kernel_text);
  kprint("\n   .rodata      : 0x");
  kprint_hex((uint32)&kernel_rodata);
  kprint("\n   .data        : 0x");
  kprint_hex((uint32)&kernel_data);
  kprint("\n   .bss         : 0x");
  kprint_hex((uint32)&kernel_bss);
  kprint("\n------------------0x");
  kprint_hex((uint32)&kernel_end);
  kprint("------------------");
}
