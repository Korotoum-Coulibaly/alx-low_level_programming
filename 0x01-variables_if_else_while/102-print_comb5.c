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

	for (firstnumber = 0; firstnumber < 99 ; firstnumber++)
	{
		for (secondnumber = firstnumber + 1; secondnumber <= 99; secondnumber++)
		{
			if (firstnumber < secondnumber && firstnumber != secondnumber)
			{
				putchar ('0' + firstnumber / 10);
				putchar ('0' + firstnumber % 10);
				putchar (' ');
				putchar ('0' + secondnumber / 10);
				putchar ('0' + secondnumber % 10);
				if (firstnumber != 98 || secondnumber != 99)
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
