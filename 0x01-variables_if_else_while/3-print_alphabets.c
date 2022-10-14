#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - the program will assign a random number to the variable n
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	char c, C;
	char ligne;

	c = 'a';
	C = 'A';
	ligne = '\n';
	while (c <= 'z')
	{
		putchar (c);
		if (c == 'z')
		{
			while (C <= 'Z')
			{
				putchar (C);
				C++;
			}
		}
		c++;
	}
	putchar (ligne);
	return (0);
}
