#include "main.h"

/**
 *_strncat - that concatenates two string
 * function is similar to _strcat function,except that
 * it will use at most n bytes from src
 * and src does not need to be null-terminated
 * if it contains n or more bytes
 *@dest: first information
 *@src: second information
 *@n: third information
 *
 *Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		continue;

	for (j = 0; src[j] != '\0' && j < n; j++)
		dest[i + j] = src[j];

	dest[i + j] = '\0';

	return (dest);
}
