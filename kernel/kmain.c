#include "kprint.h"

void kmain(void) {
  char *a = "ABCDEFGHIJKLMNOPQRSTUVWXYZ       ";
  kmemory_dump_hex(a, 27);
  while (1)
    ;
}
