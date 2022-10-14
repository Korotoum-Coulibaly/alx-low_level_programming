#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Program will assign a random number to the variable n
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	int lastdigi;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigi = n % 10;
	if (lastdigi > 5)
		printf("Last digit of %d is %d and is greather than 5\n", n, lastdigi);
	if (lastdigi == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastdigi);
	if (lastdigi < 6 && lastdigi != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdigi);
	return (0);

}
