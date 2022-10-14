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

	c = 0;
	while (c <= 10)
	{
		putchar ('0' + c);
		c++;
	}
	putchar ("\n");
	return (0);
}
