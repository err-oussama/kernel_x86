
## Code Segment - CS 


The CS register is a 16-bit register, but it doesn't hold an address -- it holds a **selector**, which is essentially an index into the GDT plus some extra metadata packed into the bits, also tell the CPU which GDT entry describes the currently executing code 


|*Bits* |  *Name*   |       *Role*              |   *Value*     |
|-------|-----------|---------------------------|---------------|
| 0-1   |PL         |privilege level            |0-3            |
|  2    |TI         |Table indicator            |0=GDT \ 1=LDT  |
| 3-15  |GDT index  |Index                      |index          |


The CPU reads CS constantly in the background. Every instruction it executes, every memory address it makes, every privilege check if performs -- all of them start by looking at CS to understand the current execution context.



**The Three fields explained**

***Index (bits 15-3) -- 13 bits** This is the actual GDT slot number. 13 bits means you can have up to 8129 entries in your GDT. When the CPU needs to know "Who am i right now", it takes this index, multiplies by 8 (size of a GDT entry), and reads thatt descriptor from the GDT base.


***TI (bit 2) -- 1 bit*** Table Indicator. `0`=look in the GDT,`1`=look in the LDT (Local Descriptor Table -- almost nobody uses this in modern kernels, you'll always have this as `0`.




***RPL (bits 1-0) -- 2 bits -- Requested Privilege Level*** is the name  





