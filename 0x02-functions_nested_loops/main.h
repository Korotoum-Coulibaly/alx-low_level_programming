#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdio.h>
#include <ctype.h>

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
 * print_alphabet_x10 - this function prints 10 times
 *  the alphabet,in lowercase,followed by a new line
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
 * _islower - This function that checks for lowercase character
 * @c: is the information that checks
 *
 * Return: 1 if c is lowercase and 0 otherwise
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}

#endif /* _MAIN_H_ */
