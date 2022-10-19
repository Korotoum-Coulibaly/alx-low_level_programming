#include <stdio.h>

/**
 * main - that computes and prints the sum
 * off all the multiples of 3 or 5 below 1024
 *
 * Return: 0
 */
int main(void)
{
	int count, sum;
	sum = 0;

	for (count = 0; count < 1024; count++)
	{
		if ((count % 3) == 0 || (count % 5) == 0)
		{
			sum = sum + count;
		}
	}
	printf("%d\n", sum);
	return (0);
}
