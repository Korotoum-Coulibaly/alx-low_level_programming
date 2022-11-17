#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: string
 * @c: character
 *
 * By Coulby Dev
 * Return: reserve
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
		{
			s++;
		}
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
