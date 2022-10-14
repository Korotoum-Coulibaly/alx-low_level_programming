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

	char * a = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("%s %d and is greather than 5\n", a, n);
	if (n == 0)
		printf("%s %d and is 0\n", a, n);
	if (n < 6 && n != 0)
		printf("%s %d and is less than 6 and not 0\n", a, n);
	return (0);

}
