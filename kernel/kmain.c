#include "kernel.h"

void kmain(void) {
  gdt_entry gdt_entry[8];
  kprint_hex(GDT_ACC_ACCESSED | GDT_ACC_NON_CONFORMING | GDT_ACC_READ_ONLY |
             GDT_ACC_TYPE_CODE_SEG | GDT_ACC_TYPE_KERN_DATA | GDT_ACC_DPL0 |
             GDT_ACC_PRESENT);
  kprint("\n");

  setup_gdt_entrys(gdt_entry);
  kmemory_dump_hex(&gdt_entry[0], sizeof(gdt_entry[0]) * 8);

  while (1)
    ;
}
