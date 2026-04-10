#include "kernel.h"


void gdt_set_entry(
				gdt_entry * entry, unsigned int base, unsigned int limit, 
				unsigned char access_byte, unsigned char flags){

	// set access byte 
	entry->access_byte = access_byte;
	
	// set base address 
	entry->base_high = base >> 24;
	entry->base_middle = (base << 8) >> 24;
	entry->base_low =  (base << 16) >> 16;
	
	// set limit 
	
	entry->limit_low = (limit << 16) >> 16;

	// set flags 
	

}
