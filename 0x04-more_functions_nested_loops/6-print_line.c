#include "main.h"

/**
 *print_line: that draws a straight line in the terminal
 */
void print_line(int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		if (n > 0)
			_putchar ('_');
		else
			_putchar ('\n');
	}
	_putchar ('\n');
}
