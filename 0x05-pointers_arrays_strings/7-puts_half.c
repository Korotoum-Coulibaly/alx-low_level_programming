#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: information
 *
 * Return: 0
 */
void puts_half(char *str)
{
	int data = 0, n;

	while (str[data] != '\0')
		data++;
	if (data + 1 % 2 != '0')
		n = (data - 1) / 2;
	else
		n = (data / 2);
	n++;
	for (data = n; str[data] != '\0'; string++)
		_putchar(str[data]);
	_putchar('\n');
