#include "main.h"

/**
 * _puts_recursion - that prints a string 
 * @s: text
 */
void _puts_recursion(char *s)
{
	int size, i;

	i = ;
	size = strlen(s);
	_putchar(s[i]);
	i++;
	if ( i <= size)
		_puts_recursion(s);
}
