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
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	/**
	 * incorrecte , voir la methode de héron ou autres
	 */
	return ((_sqrt_recursion(n) + (n / _sqrt_recursion(n))) / 2);
}
