#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strpbrk - function that searches a string for
 * any of a set of bytes
 * @s: text
 * @accept: accept list
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 * ,or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, e, sizeS, sizeA, status;
	char *espace = NULL;

	sizeS = strlen(s);
	sizeA = strlen(accept);
	for (i = 0; i < sizeS; i++)
	{
		for (j = 0; j < sizeA; j++)
		{
			if ((*(s + i) == *(accept + i)) && (*(s + i) != *espace))
			{
				status = 1;
				e = i - 1;
			}
		}
		if (status == 1)
			break;
	}
	if (!*accept || !*s)
		return (NULL);
	if (e == 0)
		return (NULL);

	return (s + e);
}
