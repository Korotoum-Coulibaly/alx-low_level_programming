#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: Null or pointer should point to a newly allocated space
 * un memory which contains the content of s1 followed by the
 * contents of s2,and null terminated
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int sizeS1, sizeS2, size;
	char *memory = NULL;
	unsigned int i, j;

	sizeS1 = strlen(s1);
	sizeS2 = strlen(s2);
	size = sizeS1 + sizeS2 + 1;

	if (s1 == NULL)
	{
		for (i = 0; i < sizeS2; i++)
			*(memory + i) = *(s2 + i);
	}
	else if (s2 == NULL)
	{
		for (i = 0; i < sizeS1; i++)
			*(memory + i) = *(s1 + i);
	}
	else
	{
		memory = (char *) malloc(sizeof(char) * size);

		for (i = 0; i < sizeS1; i++)
			*(memory + i) = *(s1 + i);
		i = 0;
		for (j = sizeS1; j < size; j++)
		{
			*(memory + j) = *(s2 + i);
			i++;
		}
	}
	return (memory);
}
