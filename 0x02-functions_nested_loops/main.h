#include <stdio.h>

/**
 *print_alphabet - This function print alphabet in lowercase
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar (letter);
	}
		putchar ('\n');
}
