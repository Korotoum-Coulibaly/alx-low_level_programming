#include "main.h"

/**
 * _puts_recursion - that prints a string 
 * @s: text
 */
void _puts_recursion(char *s)
{
	int size;

	size = strlen(s);
	_putchar(s[size]);
	size--;
	if ( i != 0)
		_puts_recursion(s);
}
