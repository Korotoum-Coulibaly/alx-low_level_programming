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
	a = n - 1;
	for (i = 0; a > 0 && i < a; i++, a--)
	{
		sauvegarde = s[i];
		s[i] = s[a];
		s[a] = sauvegarde;
	}
}
