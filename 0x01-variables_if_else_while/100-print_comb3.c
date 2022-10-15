#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - the program will assign a random number to the variable n
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int firstnumber, secondnumber;

	for (firstnumber = 0; firstnumber < 9 ; firstnumber++)
	{
		for (secondnumber = 1; secondnumber <= 9; secondnumber++)
		{
			if (firstnumber < secondnumber && firstnumber != secondnumber )
			{
				putchar ('0' + firstnumber);
				putchar ('0' + secondnumber);
				if (firstnumber != 8 || secondnumber != 9)
				{
					putchar (',');
					putchar (' ');
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
