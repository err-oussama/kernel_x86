# Memory


## Frame

A **Frame** is a **fixed-siz 4KB of physical RAM**. It is the smallest unit the physical memory manager works with. Physical memory is divided into frames sequentially from address 0 to the top of RAM -- frame 0 starts at address `0x00000000`, frame 1 at `0x00001000`, frame 2 at `0x00002000`, and so on. When the physical memory manager allocates memory it hands out one frame at a time, and when it frees memory it takes one frame back.


## Physical Address Map 

### Part I 0x00000000 → 0x0009FBFF

#### 0x00000000 → 0x000003FF

- Real mode Inuterrupt Vector Table (IVT) (1KB)
#### 0x00000400 → 0x000004FF
- BIOS data area   (256B)                          
#### 0x00000500 → 0x0009FBFF
free (avoid)



### Part II 0x0009FC00 → 0x000EFFFF

#### x0009FC00  →  
reserved BIOS 
#### 0x000A0000

VGA buffer 

##### 0x000A0000 - 0x000AFFFF 
VGA graphics frame buffer   (64KB)

##### 0x000B0000 - 0x000B7FFF 
VGA monochrome text buffer  (32KB)

##### 0x000B8000 - 0x000BFFFF    

VGA color text buffer       (32KB) 

##### 0x000C0000 - 0x000EFFFF    
VGA BIOS ROM / options ROMs 

#### 0x000F0000
BIOS ROM


### Part III 0x00100000
#### 0x00100000




### Part IV 0x7FE00000

reserved ACPI




### Part V 0xFFFC0000
BIOS ROM mapped

does not exist in booting time only after BIOS setup, before that this is direct to the BIOS chip ROM.





