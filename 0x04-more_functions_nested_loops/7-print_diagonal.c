#include "main.h"

/**
 *print_diagonal - that draws a diagonal line on the terminal
 *@n : the number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		if (n > 0)
			_putchar ('\\');
		else
			_putchar ('\n');
	}
	_putchar ('\n');
}
