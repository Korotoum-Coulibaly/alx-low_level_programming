#include "main.h"

/**
 * _pow_recursion - function that returns the value of x raised to the power of y
 * @x: first value
 * @y: second value
 *
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	_pow_recursion(x, y - 1);
	x = x * x;
	return (x);
}
