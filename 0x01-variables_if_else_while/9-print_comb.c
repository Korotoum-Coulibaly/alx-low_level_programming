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
	int numero;

	numero = 0;
	while (numero <= 9)
	{
		putchar ('0' + numero);
		if (numero != 9)
		{
			putchar (',');
			putchar (' ');
		}
		numero++;
	}
	putchar ('\n');
	return (0);
}
