#include "main.h"

/**
 * main - program that multiplies two numbers
 * @argc: argument number
 * @argv: argument value
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int result, firstvalue, secondvalue;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		firstvalue = atoi(*(argv + 1));
		secondvalue = atoi(*(argv  + 2));
		result = firstvalue * secondvalue;
		printf("%d\n", result);
	}
	return (0);
}
