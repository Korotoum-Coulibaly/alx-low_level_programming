#include "main.h"

/**
 * _strncpy - that copies a string
 * @dest: first information
 * @src: second information
 * @n: third information
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	
	for (i = 0; i < n && *(src+1); i++)
		*(dest + 1) = *(src+1);
	for (; i < n; i++)
		*(dest + 1) = '\0';
	
	return (dest);
}
