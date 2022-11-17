#include "main.h"

/**
 *_strlen_recursion - function that returns the length of a string
 *@s: string
 *
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int count;

	if (*s)
	{
		_strlen_recursion(s + 1);
		count++;
	}
	return (count);
}

