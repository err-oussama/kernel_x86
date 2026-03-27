# Global Descriptor Table 


# Instruction 

## Global Descriptor Table Register (GDTR)
    
    The GDTR is a special hidden CPU register that holds two fields:
    - *Base Address* (32 bit in 32-bit mode and 64 bit in 64-bit mode)
        pointing to where the GDT lives in memory;
    - *limit* (16 bit size)that tells the CPU the exat byte boundry of the GDT 


