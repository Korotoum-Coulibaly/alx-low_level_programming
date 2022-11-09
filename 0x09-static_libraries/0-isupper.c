#include "main.h"

/**
 * _isupper - that checks for uppercase character
 *@c: letter that check
 *
 * Return: 1 (error)
 * 0 (success)
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
