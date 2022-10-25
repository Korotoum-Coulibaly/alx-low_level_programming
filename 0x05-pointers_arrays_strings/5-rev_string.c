#include "main.h"

/**
 * print_rev - that prints a string,in reverse,followed by a new line
 * @s: information that print in reverse
 */
void print_rev(char *s)
{
	int i, n, a;
	char *sauvegarde;

	n = strlen(s);
	a = 0;
	for (i = n - 1; i >= 0; i--)
	{
		sauvegarde = str[i];
		str[i] = str[a];
		str[a] = sauvegarde;
		a++;
	}
	_putchar('\n');
}
