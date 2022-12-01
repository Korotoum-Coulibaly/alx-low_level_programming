#include <stdio.h>

/**
 * main - write a program that finds and prints the first 98
 * Fibonacci numbers, starting with 1 and 2,followed
 * by a new line.
 * Your are not allowed to use malloc or long long
 *
 * Return: 0
 */
int main(void)
{
	int count;
	unsigned int value1 = 0, value2 = 1, valuesum;
	unsigned int value1_half1, value1_half2;
	unsigned int value2_half1, value2_half2;
	unsigned int half_1, half_2;

	for (count = 0; count < 92; count++)
	{
		valuesum = value1 + value2;
		printf("%1u, ", valuesum);

		value1 = value2;
		value2 = valuesum;
	}
	value1_half1 = value1 / 10000000000;
	value1_half2 = value1 % 10000000000;
	value2_half1 = value2 / 10000000000;
	value2_half2 = value2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		half1 = value1_half1 + value2_half1;
		half2 = value1_half2 + value2_half2;
		if (value1_half2 + value2_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}
		printf("%lu%lu", half1, half2);
		if (count != 98)
			printf(", ");

		value1_half1 = value2_half1;
		value1_half2 = value2_half2;
		value2_half1 = half1;
		value2_half2 = half2;
	}
	printf("\n");
	return (0);
}
