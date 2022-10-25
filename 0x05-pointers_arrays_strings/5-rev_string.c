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
	for (i = n - 1; a >= 0 && i < a; i--, a++)
	{
		sauvegarde = s[a];
		s[a] = s[i];
		s[i] = sauvegarde;
	}
	_putchar('\n');
}
