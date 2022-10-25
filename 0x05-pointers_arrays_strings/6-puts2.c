#include "main.h"

/**
 * puts2 - that prints every other character of a string 
 * starting with the first character
 * @str: information
 */
void puts2(char *str)
{
	int data, n;

	n = strlen(data);
	for (data = 0; data < n; data++)
		if (data % 2 == 0)
			_putchar(str[data]);
	_putchar('\n');
}
