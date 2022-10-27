#include "main.h"

/**
 * string_toupper - that changes all lowercase letters
 * of a string to uppercase
 *@t: information that upper
 *
 * Return: 0
 */
char *string_toupper(char * t)
{
	int i;

	i = 0;
	while (*(t + 1))
	{
		if (*(t + i) >= 'a' && *(t + i) <= 'z')
			*(t + i) -= 'a' - 'A';
		i++;
	}
	return (t);
}
