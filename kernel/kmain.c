#include "kernel.h"
#include "kprint.h"
void kmain(void) {
  gdt_entry null_entry;

  gdt_register init;

  sgdtr(&init);

  kmemory_dump_bin((void *)init.base + sizeof(null_entry), sizeof(null_entry));

  while (1)
    ;
}
