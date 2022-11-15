#ifndef _MACRO_
#include <stdio.h>
#define ABS(x)\
	if (x > 0) {(x = x)} else {(x = -x)}

/**
 * abs - function that computes the absolute value of a number x
 * @x: value
 *
 * Return: result
 */
int abs(int x)
{
	int result;

	result = ABS(x);
	return (result);
}

#endif /*_MACRO_ */
