#include "isr.h"
#include "kprint.h"

void divide_error_handler() {
  kprint_err("\nDivision Error");
  while (1)
    ;
  while (0)
    ;
}
void debug_handler() {
  kprint_err("Interrupt Fired");
  while (1)
    ;
}
void non_maskable_interrupt_handler() {
  kprint_err("Interrupt Fired");
  while (1)
    ;
}
void break_point_handler() {
  kprint_err("Interrupt Fired");
  while (1)
    ;
}
void overflow_handler() {
  kprint_err("Interrupt Fired");
  while (1)
    ;
}
void bound_range_exceeded_handler() {
  kprint_err("Interrupt Fired");
  while (1)
    ;
}
void invalid_opcode_handler() {
  kprint_err("Interrupt Fired");
  while (1)
    ;
}
void device_not_avalibale_handler() {
  kprint_err("Interrupt Fired");
  while (1)
    ;
}
void double_fault_handler() {
  kprint_err("Interrupt Fired");
  while (1)
    ;
}
void coprocessor_segment_overrun_handler() {
  kprint_err("Interrupt Fired");
  while (1)
    ;
}
void invalid_TSS_handler() {
  kprint_err("Interrupt Fired");
  while (1)
    ;
}
void segment_not_present_handler() {
  kprint_err("Interrupt Fired");
  while (1)
    ;
}
void stack_segment_fault_handler() {
  kprint_err("Interrupt Fired");
  while (1)
    ;
}
void general_protection_fault_handler() {
  kprint_err("Interrupt Fired");
  while (1)
    ;
}
void page_fault_handler() {
  kprint_err("Interrupt Fired");
  while (1)
    ;
}
void x87_floating_point_exception_handler() {
  kprint_err("Interrupt Fired");
  while (1)
    ;
}
void alignment_check_handler() {
  kprint_err("Interrupt Fired");
  while (1)
    ;
}
void machine_check_handler() {
  kprint_err("Interrupt Fired");
  while (1)
    ;
}
void SIMD_floating_point_exception_handler() {
  kprint_err("Interrupt Fired");
  while (1)
    ;
}
void virtualization_exception_handler() {
  kprint_err("Interrupt Fired");
  while (1)
    ;
}
void control_protection_exception_handler() {
  kprint_err("Interrupt Fired");
  while (1)
    ;
}
void hypervisor_injection_exception_handler() {
  kprint_err("Interrupt Fired");
  while (1)
    ;
}
void VMM_communication_exception_handler() {
  kprint_err("Interrupt Fired");
  while (1)
    ;
}
void security_exception_handler() {
  kprint_err("Interrupt Fired");
  while (1)
    ;
}
