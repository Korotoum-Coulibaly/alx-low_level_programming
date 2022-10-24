#include "main.h"

/**
 * reset_to_98 - that takes a pointer to an int as parameter
 * and updates the value it points to 98
 * @n: is the pointer that store addresse memory of other variable
 */
void reset_to_98(int *n)
{
	int number;

	number = 98;
	*n = number;
}
