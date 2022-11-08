#include "main.h"
#include <string.h>
/**
 * _strdup - function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string as a
 * parameter
 * @str: string
 *
 * Return: Null or a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *memory = NULL;
	unsigned int i;
	unsigned int size;

	if (str == NULL)
		memory = NULL;
	else
	{
		size = strlen(str) + 1;
		memory = (char *) malloc(sizeof(char) * size);
		for (i = 0 ; i < size; i++)
			*(memory + i) = *(str + i);
	}
	return (memory);
}
