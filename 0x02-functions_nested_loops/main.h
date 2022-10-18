#ifndef _MAIN_H_
#define _MAIN_H_
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

#endif /* _MAIN_H_ */
