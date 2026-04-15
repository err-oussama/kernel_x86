#include "gdt.h"
#include "kernel.h"
#include "kprint.h"

void kmain(void) {
  gdt_entry null_entry;

  gdt_set_entry(&null_entry, 0, 0, 0,
                GDT_FLAG_64BIT | GDT_FLAG_OP_SIZE_32 | GDT_FLAG_SEG_UNIT_1KB);

  kmemory_dump_bin(&null_entry, sizeof(null_entry));

  while (1)
    ;
}
