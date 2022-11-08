#include "main.h"

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
	char *memory = malloc(sizeof(char) * 100);
	
	for (i = 0 ; i < 100; i++)
		*memory = *str;

	return (memory);
}
