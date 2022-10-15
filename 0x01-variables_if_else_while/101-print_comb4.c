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
	int firstnumber, secondnumber, thirdnumber;

	for (firstnumber = 0; firstnumber < 8 ; firstnumber++)
	{
		for (secondnumber = 1; secondnumber < 9; secondnumber++)
		{
			for (thirdnumber = 2; thirdnumber <= 9; thirdnumber++)
			{
				if ((firstnumber < secondnumber && secondnumber < thirdnumber && (firstnumber != secondnumber) != thirdnumber)
				{
					putchar ('0' + firstnumber);
					putchar ('0' + secondnumber);
					putchar ('0' + thirdnumber);
					if (firstnumber != 7 || secondnumber != 8 || thirdnumber != 9)
					{
						putchar (',');
						putchar (' ');
					}
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
