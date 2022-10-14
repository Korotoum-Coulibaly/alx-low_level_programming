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
	unsigned int numero;
	char ligne;

	numero = 0;
	ligne = '\n';
	while (numero < 10)
	{
		printf("%d", numero);
		numero++;
	}
	putchar (ligne);
	return (0);
}
