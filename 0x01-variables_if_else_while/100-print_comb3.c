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

	/*
	 * firstnumber = 0;
	 */

	secondnumber = 1;
	for (firstnumber = 0; firstnumber < 9 ; firstnumber++)
	{
		while (secondnumber <= 9)
		{
			if (firstnumber < secondnumber && firstnumber != secondnumber )
			{
				putchar ('0' + firstnumber);
				putchar ('0' + secondnumber);
				if (firstnumber != 8 && secondnumber != 9)
				{
					putchar (',');
					putchar (' ');
				}
			}
			secondnumber++;
		}
		/*
		 *firstnumber++;
		 */	 
	}
	putchar ('\n');
	return (0);
}
