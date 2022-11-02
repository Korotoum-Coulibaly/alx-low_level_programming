#include "main.h"

/**
 * _puts_recursion - that prints a string 
 * @s: text
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
