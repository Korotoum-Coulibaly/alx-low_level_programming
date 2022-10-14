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
	char c;
	char ligne;

	c = 'a';
	ligne = '\n';
	while (c < 'z')
	{
		putchar (c);
		c++;
	}
	putchar (ligne);
	return (0);
}
