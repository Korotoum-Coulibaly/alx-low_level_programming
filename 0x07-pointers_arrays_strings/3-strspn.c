#include "main.h"
#include <ctype.h>

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string
 * @accept: character accepted
 *
 * By Coulby DEV
 * Return: the number of bytes in the initial segment 
 * of s which consist only of bytes from accept
 */
unisgned int _strspn(char *s, char *accept)
{
	unsigned int compteur = 0;
	int i, sizeA, j, sizeS;

	sizeA = strlen(*accept);
	sizeS = strlen(*s);

	for (i = 0; i < sizeA; i++)
	{
		for (j = 0; j < sizeS; j++)
		{
			if (*(accept + i) == *(s + j))
				compteur++;
		}
	}
	return (compteur);
}
