#include "main.h"

/**
 * _puts_recursion - that prints a string 
 * @s: text
 */
void _puts_recursion(char *s)
{
	_putchar(s);
	s++;
	if ( s != null)
		_puts_recursion(s);
}
