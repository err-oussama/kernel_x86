#ifndef MEMORY_H
#define MEMORY_H

#include "multiboot_metadata.h"
#include "type.h"

void memset(void *addr, uint32 c, uint32 size);

void show_physical_memory();

#endif
