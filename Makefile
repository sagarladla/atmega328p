CC = avr-gcc

default:
	avr-gcc -Os -DF_CPU=16000000UL -mmcu=atmega328p -c -s lib_blinky.c
	avr-gcc -Os -DF_CPU=16000000UL -mmcu=atmega328p -c -o lib_blinky.o lib_blinky.c -s
	avr-gcc -o lib_blinky.bin lib_blinky.o
	avr-objcopy -O ihex -R .eeprom lib_blinky.bin lib_blinky.hex
	sudo avrdude -F -V -c arduino -p ATMEGA328P -P /dev/ttyACM0 -b 115200 -U flash:w:lib_blinky.hex

clean:
	rm -rf *.o *.hex *.bin