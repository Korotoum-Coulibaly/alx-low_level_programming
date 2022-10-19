#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = print_last_digit(-102);
	printf("%d\n", r);
	r = _abs(-98);
	_putchar(r + '0');
	return (0);
}
