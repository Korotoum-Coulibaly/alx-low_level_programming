#include "main.h"

/**
 *more_numbers - that prints 10 times the numbers,from 0 to 14
 */
void more_numbers(void)
{
	int c, b;

	for (b = 0; b < 10; b++)
	{
		for (c = 0; c < 15; c++)
		{
			if (c > 9)
				_putchar ('0' + c / 10);
			_putchar ('0' + c % 10);
		}
		_putchar ('\n');
	}
}
