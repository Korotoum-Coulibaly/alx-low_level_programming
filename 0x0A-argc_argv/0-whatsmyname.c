#include "main.h"

/**
 *main - program that prints its name,followed by a new line
 *@argc: argument number
 *@argv: array that contains value of argument
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", *(argv));
	return (0);
}
