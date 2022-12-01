#include "main.h"
#include <string.h>

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string
 * @accept: character accepted
 *
 * By Coulby DEV
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, sizeA, j, sizeS;

	sizeA = strlen(accept);
	sizeS = strlen(s);
	/* browse array accept*/
	for (i = 0; i < sizeA; i++)
	{
		if (sizeA != 32)
		{
			/* browse array s or text enter*/
			for (j = 0; j < sizeS; j++)
			{
				if (*(accept + i) == *(s + j))
				{
					count++;
				}
			}
		}
		else
			return (count);
	}
	return (count);
}
