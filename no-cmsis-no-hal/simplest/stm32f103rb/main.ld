ENTRY(_Reset)

MEMORY
{
  FLASH (rx) : ORIGIN = 0x8000000, LENGTH = 128K
}


SECTIONS
{
  .text : { *(STACK_INIT) *(INT_VECTOR_TABLE) *(.text) } > FLASH
}
