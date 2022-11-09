#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: tableau that contain all @b information
 * array behaves like a pointer
 * @b: '0x01' information that print
 * @n: the first n bytes 95
 *
 * Return: a pointer to the memory area s
 * By Coulby Dev
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;/*important because comparison is made with type unsigned int*/

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
