#include <io.h>

int main(void)
{
	DDRB |= (1 << 5);
	volatile int i = 0;
	while(1)
	{
		for(i = 0; i < 25000; i++)
			PORTB |= (1 << 5);

		for(i = 0; i < 25000; i++)
			PORTB &= (~(1 << 5));
	}
	return 0;
}

