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
	int first, second, third;

	for (first = 0; first < 8 ; first++)
	{
		for (second = 1; second < 9; second++)
		{
			for (third = 2; third <= 9; third++)
			{
				if (first < second && second < third && (first != second) != third)
				{
					putchar ('0' + first);
					putchar ('0' + second);
					putchar ('0' + third);
					if (first != 7 || second != 8 || third != 9)
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
