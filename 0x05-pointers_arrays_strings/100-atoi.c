#include "main.h"

/**_atoi - convert a string to an integer
 * @s: the pointer to convert
 *
 * Return: convert
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int data = 0;
	int minimum = 1;
	int other = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			minimum *= -1;
		}
		while (s[c] >= 48 && s[c] <= 57)
		{
			other = 1;
			data = (data * 10) + (s[c] - '0');
			c++;
		}
		if (data == 1)
			break;
		c++;
	}
	data *= minimum;
	return (data);
}
