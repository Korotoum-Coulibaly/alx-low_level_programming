#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	int a, b;

	a = 98;
	b = 42;
	printf("a=%d\n, b=%d\n", a, b);
	b = _strlen("My first strlen!");
	printf("b=%d\n",b );
	return (0);
}
