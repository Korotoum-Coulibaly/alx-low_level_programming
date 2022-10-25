#include "main.h"

/**
 * print_rev - that prints a string,in reverse,followed by a new line
 * @s: information that print in reverse
 */
void rev_string(char *s)
{
	int i, n, a;
	char sauvegarde;

	n = strlen(s);
	a = 0;
	for (i = 0; i < n; i++)
	{
		sauvegarde = s[a];
		s[a] = s[i];
		s[i] = sauvegarde;
		a = a + 1;
	}
	_putchar('\n');
}
