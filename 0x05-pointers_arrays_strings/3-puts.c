#include "main.h"

/**
 * _puts - that prints a string,followed by a new line
 * @str: information that print
 */
void _puts(char *str)
{
	int i, n;

	n = _strlen(str);
	for (i = 0; i <= n; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
