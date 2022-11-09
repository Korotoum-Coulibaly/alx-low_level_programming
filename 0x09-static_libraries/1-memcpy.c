#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: zone memoire dest equivalent to array buffer
 * @src: zone memoire src equivalent to array buffer2
 * @n: n bytes from memory area - use like countdown
 *
 * By Coulby Dev
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	/*buffer + 50 so he beginning at 51*/
	/* and i use 'i' to count until 10*/
	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		/* buffer and buffer 2 are arrays */
		i++; /*don't forget to increment*/
	}

	return (dest);
}
