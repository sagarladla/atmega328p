CC = avr-gcc
CFLAGS = -nostdinc -fno-builtin -nostdlib -mmcu=atmega328p -DF_CPU=16000000UL -Os

all : led.hex

led.o : led.c io.h
	$(CC) $(CFLAGS) -c led.c io.h -I.

led.bin : led.o
	$(CC) $(CFLAGS) -o led.bin led.o

led.elf : led.o
	$(CC) $(CFLAGS) -o led.elf led.o

led.hex : led.bin
	avr-objcopy -O ihex -R .eeprom led.bin led.hex

burn:
	sudo avrdude -F -V -c arduino -p ATMEGA328P -P /dev/ttyACM0 -b 115200 -U flash:w:led.hex

lst:
	avr-objdump -Dx led.elf > led.lst

clean:
	rm -rf *.o *.hex *.bin *.gch *.elf *.lst

