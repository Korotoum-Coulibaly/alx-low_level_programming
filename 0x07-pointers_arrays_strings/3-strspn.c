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
	int i, sizeA, j, sizeS, k, status;
	char *copy = malloc(sizeof(char) * sizeA);

	sizeA = strlen(accept);
	sizeS = strlen(s);
	
	/* browe array accept*/
	for (i = 0; i < sizeA; i++)
	{
		/* browse array s or text enter*/
		for (j = 0; j < sizeS; j++)
		{
			/*browse array copy to verified if element are not repeat*/
			for (k = 0; k < sizeA; k++)
			{
				if ((* accept + i) == *(copy + k))
					status = 1;
				else
					*(copy + i) = *(accept + i);
			}

			/*stop to browse array s if element repeat*/
			if (status == 1)
				break;
			/*if element is not repeat increment count*/
			if (*(accept + i) == *(s + j))
			{
				count++;
				break;
			}
		}
	}
	free(copy);
	return (count);
}
