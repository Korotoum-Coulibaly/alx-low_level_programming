#include <unistd.h>

/**
 * _putchar - this function has a same function that putchar
 *@c: information that checks
 *
 * Return: 0 (Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
