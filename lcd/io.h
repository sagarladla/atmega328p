
#ifndef _IO_H_
#define _IO_H_

#define MCUCR (*(volatile uint8_t *)(0x55))

#define PINB (*(volatile uint8_t *)(0x23))
#define DDRB (*(volatile uint8_t *)(0x24))
#define PORTB (*(volatile uint8_t *)(0x25))

#define PINC (*(volatile uint8_t *)(0x26))
#define DDRC (*(volatile uint8_t *)(0x27))
#define PORTC (*(volatile uint8_t *)(0x28))

#define PIND (*(volatile uint8_t *)(0x29))
#define DDRD (*(voaltile uint8_t *)(0x2a))
#define PORTD (*(volatile uint8_t *)(0x2b))

#endif

