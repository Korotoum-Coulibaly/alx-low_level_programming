#include "main.h"

/**
 *print_diagonal - that draws a diagonal line on the terminal
 *@n : the number  of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int c, m;

	if (n <= 0)
		_putchar ('\n');
	else
	{
		for (c = 0; c < n; c++)
		{
			for (m = 0; m < c; m++)
				_putchar (' ');
			_putchar ('\\');
			_putchar ('\n');
		}
	}
}
