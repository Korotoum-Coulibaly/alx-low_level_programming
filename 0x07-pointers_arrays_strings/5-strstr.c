#include "main.h"

/**
 *_strstr -  function finds the first occurance of the substring
 *needle in the string haystack.The terminating null bytes(\0)
 *are not compared
 *@haystack: string
 *@needle: substring
 *
 * Return: a pointer to the beginning of the located substring,or
 * NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (*(haystack + i))
	{
		while (*(needle + j) && (*(haystack + i) == *(needle)))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (*(needle + j))
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
