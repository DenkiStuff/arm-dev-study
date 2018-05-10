.PHONY : all
all : main.elf main.bin main.hex

main.hex : main.elf
	/opt/gcc-arm-none-eabi-7-2017-q4-major/bin/arm-none-eabi-objcopy -O ihex main.elf main.hex

main.bin : main.elf
	/opt/gcc-arm-none-eabi-7-2017-q4-major/bin/arm-none-eabi-objcopy -O binary main.elf main.bin

main.elf : main.o system_stm32f1xx.o startup_stm32f103xb.o STM32F103RBTx_FLASH.ld
#	/opt/gcc-arm-none-eabi-7-2017-q4-major/bin/arm-none-eabi-gcc main.o startup_stm32f103xb.o system_stm32f1xx.o -mcpu=cortex-m3 -mthumb   -specs=nano.specs -TSTM32F103RBTx_FLASH.ld  -lc -lm -lnosys  -Wl,-Map=stm32-f103rb-blinky.map,--cref -Wl,--gc-sections -o main.elf
	/opt/gcc-arm-none-eabi-7-2017-q4-major/bin/arm-none-eabi-gcc main.o startup_stm32f103xb.o system_stm32f1xx.o -mcpu=cortex-m3 -mthumb   -specs=nano.specs -TSTM32F103RBTx_FLASH.ld -Wl,-Map=stm32-f103rb-blinky.map,--cref -Wl,--gc-sections -o main.elf

main.o : main.c
	/opt/gcc-arm-none-eabi-7-2017-q4-major/bin/arm-none-eabi-gcc -c -mcpu=cortex-m3 -mthumb -g main.c -o main.o

system_stm32f1xx.o : system_stm32f1xx.c
	/opt/gcc-arm-none-eabi-7-2017-q4-major/bin/arm-none-eabi-gcc -c -mcpu=cortex-m3 -mthumb -g system_stm32f1xx.c -o system_stm32f1xx.o

startup_stm32f103xb.o : startup_stm32f103xb.s
	/opt/gcc-arm-none-eabi-7-2017-q4-major/bin/arm-none-eabi-as -mcpu=cortex-m3 -mthumb -g startup_stm32f103xb.s -o startup_stm32f103xb.o

.PHONY : clean
clean:
	rm -f *.o *.elf *.bin *.hex *.map
