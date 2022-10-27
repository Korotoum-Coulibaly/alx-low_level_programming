#include "main.h"

/**
 * cap_string - that capitalizes all words of a string
 *@c: space string
 *
 * Return: c
 */
char *cap_string(char *c)
{
	int i = 0, j;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(s + 1))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			if (i == 0)
				*(s + i) -= 'a' - 'A';
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (a[j] == *(s + i - 1))
						*(s + i) -= 'a' - 'A';
				}
			}
		}
		i++;
	}	
	return (c);
}
