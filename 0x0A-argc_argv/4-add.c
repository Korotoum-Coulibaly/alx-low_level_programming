#include "main.h"

/**
 * main - program that adds possible positive numbers
 * @argc: argument number
 * @argv: argument value
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, result;

	for (i = 0; i < argc; i++)
	{
		if ( *(argv + i))
		{
			printf("Error");
			return (1);
		}
	}
	return (0);
}

