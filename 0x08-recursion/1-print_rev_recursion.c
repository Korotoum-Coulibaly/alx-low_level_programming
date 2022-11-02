#include "main.h"

/**
 * _print_rev_recursion - that prints a string
 * @s: text
 */
void _print_rev_recursion(char *s)
{
	
	int compteur;

	if (*s)
	{
		_putchar(*s);
		_print_rev_recursion(s + 1);
		compteur = s + 1;
		_putchar(compteur);
	}
	else
		_putchar('\n');
}
