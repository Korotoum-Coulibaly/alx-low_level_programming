#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square
 * root of a number
 * @n: number
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (square(1, n));
}

/**
 * square - function that give square
 * @a: value 1
 * @n: number that square
 *
 * Return: int
 */
int square(int a, int n)
{
	if ((a * a) == n)
		return (a);
	if ((a * a) > n)
		return (-1);

	return (square((a + 1), n));
}
