#include "main.h"

/**
 *main - program that prints its name,followed by a new line
 *@argc: argument number
 *@argv: array that contains value of argument
 * Return: argc
 */
int main(int argc, char **argv)
{
	printf("%s\n", *(argv));
	return (argc);
}
