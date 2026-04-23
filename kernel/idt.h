#ifndef IDT_H
#define IDT_H
#include "kernel.h"

typedef struct __attribute__((packed)) {
  unsigned short offset_low; // first 16 bit
  unsigned short selector;
  unsigned char reserved;
  unsigned char type_attribute;
  unsigned short offset_high;
} gate_descriptor;

void set_idt_entry(gate_descriptor *gate, uint32 ISR_address, uint16 selector,
                   uint8 type_attribute);

#endif
