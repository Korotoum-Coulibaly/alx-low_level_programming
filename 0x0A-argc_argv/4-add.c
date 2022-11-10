#include "main.h"
#include <ctype.h>

/**
 * main - program that adds possible positive numbers
 * @argc: argument number
 * @argv: argument value
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, result, a;

	result = 0;
	for (i = 1; i < argc; i++)
	{
		/*a = atoi(*(argv + i));*/
		/*printf("%d\n", a);*/
		if (isalpha(a) != 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			a = atoi(*(argv + i));
			result = result + a;
		}
	}
	printf("%d\n", result);
	return (0);
}

