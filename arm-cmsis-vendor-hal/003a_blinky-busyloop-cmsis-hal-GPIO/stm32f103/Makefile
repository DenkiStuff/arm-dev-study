.PHONY : all
all : main.elf main.bin main.hex

main.hex : main.elf
	/opt/gcc-arm-none-eabi-7-2017-q4-major/bin/arm-none-eabi-objcopy -O ihex main.elf main.hex

main.bin : main.elf
	/opt/gcc-arm-none-eabi-7-2017-q4-major/bin/arm-none-eabi-objcopy -O binary main.elf main.bin

main.elf : main.o system_stm32f1xx.o stm32f1xx_hal_cortex.o stm32f1xx_hal_flash.o stm32f1xx_hal_flash_ex.o stm32f1xx_hal_gpio_ex.o stm32f1xx_hal_gpio.o stm32f1xx_hal_rcc_ex.o stm32f1xx_hal_rcc.o stm32f1xx_hal.o startup_stm32f103xb.o STM32F103RBTx_FLASH.ld
	/opt/gcc-arm-none-eabi-7-2017-q4-major/bin/arm-none-eabi-gcc main.o stm32f1xx_hal_cortex.o stm32f1xx_hal_flash.o stm32f1xx_hal_flash_ex.o stm32f1xx_hal_gpio_ex.o stm32f1xx_hal_gpio.o stm32f1xx_hal_rcc_ex.o stm32f1xx_hal_rcc.o stm32f1xx_hal.o startup_stm32f103xb.o system_stm32f1xx.o -mcpu=cortex-m3 -mthumb   -specs=nano.specs -TSTM32F103RBTx_FLASH.ld -Wl,-Map=stm32-f103rb-blinky.map,--cref -Wl,--gc-sections -o main.elf

main.o : main.c
	/opt/gcc-arm-none-eabi-7-2017-q4-major/bin/arm-none-eabi-gcc -c -mcpu=cortex-m3 -mthumb -g main.c -o main.o

stm32f1xx_hal_cortex.o : stm32f1xx_hal_cortex.c
	/opt/gcc-arm-none-eabi-7-2017-q4-major/bin/arm-none-eabi-gcc -c -mcpu=cortex-m3 -mthumb -g stm32f1xx_hal_cortex.c -o stm32f1xx_hal_cortex.o

stm32f1xx_hal_flash.o : stm32f1xx_hal_flash.c
	/opt/gcc-arm-none-eabi-7-2017-q4-major/bin/arm-none-eabi-gcc -c -mcpu=cortex-m3 -mthumb -g stm32f1xx_hal_flash.c -o stm32f1xx_hal_flash.o

stm32f1xx_hal_flash_ex.o : stm32f1xx_hal_flash_ex.c
	/opt/gcc-arm-none-eabi-7-2017-q4-major/bin/arm-none-eabi-gcc -c -mcpu=cortex-m3 -mthumb -g stm32f1xx_hal_flash_ex.c -o stm32f1xx_hal_flash_ex.o

stm32f1xx_hal_gpio_ex.o : stm32f1xx_hal_gpio_ex.c
	/opt/gcc-arm-none-eabi-7-2017-q4-major/bin/arm-none-eabi-gcc -c -mcpu=cortex-m3 -mthumb -g stm32f1xx_hal_gpio_ex.c -o stm32f1xx_hal_gpio_ex.o

stm32f1xx_hal_gpio.o : stm32f1xx_hal_gpio.c
	/opt/gcc-arm-none-eabi-7-2017-q4-major/bin/arm-none-eabi-gcc -c -mcpu=cortex-m3 -mthumb -g stm32f1xx_hal_gpio.c -o stm32f1xx_hal_gpio.o

stm32f1xx_hal_rcc_ex.o : stm32f1xx_hal_rcc_ex.c
	/opt/gcc-arm-none-eabi-7-2017-q4-major/bin/arm-none-eabi-gcc -c -mcpu=cortex-m3 -mthumb -g stm32f1xx_hal_rcc_ex.c -o stm32f1xx_hal_rcc_ex.o

stm32f1xx_hal_rcc.o : stm32f1xx_hal_rcc.c
	/opt/gcc-arm-none-eabi-7-2017-q4-major/bin/arm-none-eabi-gcc -c -mcpu=cortex-m3 -mthumb -g stm32f1xx_hal_rcc.c -o stm32f1xx_hal_rcc.o

stm32f1xx_hal.o : stm32f1xx_hal.c
	/opt/gcc-arm-none-eabi-7-2017-q4-major/bin/arm-none-eabi-gcc -c -mcpu=cortex-m3 -mthumb -g stm32f1xx_hal.c -o stm32f1xx_hal.o

system_stm32f1xx.o : system_stm32f1xx.c
	/opt/gcc-arm-none-eabi-7-2017-q4-major/bin/arm-none-eabi-gcc -c -mcpu=cortex-m3 -mthumb -g system_stm32f1xx.c -o system_stm32f1xx.o

startup_stm32f103xb.o : startup_stm32f103xb.s
	/opt/gcc-arm-none-eabi-7-2017-q4-major/bin/arm-none-eabi-as -mcpu=cortex-m3 -mthumb -g startup_stm32f103xb.s -o startup_stm32f103xb.o

.PHONY : clean
clean:
	rm -f *.o *.elf *.bin *.hex *.map
