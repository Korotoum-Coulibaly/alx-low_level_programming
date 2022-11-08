#include "main.h"

/**
 * create_array - function that creates an array of chars and initialize it
 * with a specific char
 * @size: malloc size
 * @c: string
 *
 * Return: Null if size =  or it fails ,or a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *memory = (char *) malloc(sizeof(int) * size);
	unsigned int i;

	if (size == 0)
		memory = NULL;
	else
	{
		for (i = 0; i < size; i++)
		{
			*(memory  + i) = c;
		}
	}

	return (memory);
	free(memory);
}
