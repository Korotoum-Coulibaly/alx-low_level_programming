#include "main.h"

/**
 * swap_int - that swaps the values of two integers
 * @a: first value
 * @b: second value
 */
void swap_int(int *a, int *b)
{
	int sauvegarde;

	sauvegarde = *a;
	*a = *b;
	*b = sauvegarde;
}
