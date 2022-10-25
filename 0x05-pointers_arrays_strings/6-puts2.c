#include "main.h"

/**
 *puts2 - that prints every other character of a string
 *starting with the first character
 *@str: information
 */
void puts2(char *str)
{
	int data;

	for (data = 0; str[data] != '\0'; data++)
		if (data % 2 == 0)
			_putchar(str[data]);
	_putchar('\n');
}
