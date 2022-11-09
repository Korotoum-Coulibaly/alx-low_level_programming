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

	/*char *reserve;*/
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			s = (s + i);
			break;
		}
		i++;
	}
	return (s);
}
