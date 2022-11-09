#include "main.h"

/**
 * _isdigit - that checks for uppercase character
 *@c: letter that check
 *
 * Return: 1 (error)
 * 0 (success)
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
