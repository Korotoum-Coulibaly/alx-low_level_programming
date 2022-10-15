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
	int c;
	char ligne;

	c = 0;
	ligne = '\n';
	while (c <= 15)
	{
		if (c < 10)
			putchar ('0' + c);
		if (c >= 10 && c <= 15)
			putchar ((c - 10)["abcdef"]);
		c++;
	}
	putchar (ligne);
	return (0);
}
