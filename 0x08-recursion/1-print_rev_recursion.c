#include "main.h"

/**
 * _print_rev_recursion - that prints a string
 * @s: text
 */
void _print_rev_recursion(char *s)
{
	
	if (*s)
	{
		_putchar(*s);
		_print_rev_recursion(s - 1);
	}
	else
		_putchar('\n');
}
