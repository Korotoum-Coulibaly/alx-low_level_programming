#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int _putchar(char c);
/**
 *print_alphabet - This function print alphabet in lowercase
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar (letter);
	putchar ('\n');
}

/**
 *print_alphabet_x10 - this function prints 10 times
 *the alphabet,in lowercase,followed by a new line
 */
void print_alphabet_x10(void)
{
	char letter;
	int counter;

	for (counter = 0; counter < 10; counter++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			putchar (letter);
		putchar ('\n');
	}
}

/**
 *_islower - This function that checks for lowercase character
 *@c: is the information that checks
 *
 *Return: 1 if c is lowercase and 0 otherwise
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}

/**
 *_isalpha - checks alphabetic character
 *@c: is the information that checks
 *
 *Return: 1 if c is a letter,lowercase or uppercase
 *0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}

/**
 *print_sign - That prints the sign of a number
 *@n: information that checks
 *
 *Return: 1 if n is greater than zero
 *0 if n is a zero
 *-1 if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}

/**
 * _abs - that computes the absolute value of an integer
 * @n: number that computes
 *
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	if (n < 0)
		n = -n;
	if (n >= 0)
		n = n;
	return (0);
}
#endif /* _MAIN_H_ */
