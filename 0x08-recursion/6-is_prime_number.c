#include "main.h"

/**
 * is_prime_number - function that returns 1 if the input
 * integer is a prime number, otherwise return 0
 *@n: value
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	/*the first prime number is two*/
	if (n == 2)
		return (1);
	/*prime is a function that search prime number*/
	return (prime(2, n));

}

/**
 * prime - function that search prime number
 * @a: number
 * @n: number that verified
 *
 * Return: 0 or 1
 */
int prime(int a, int n)
{
	if (n < 2)
		return (0);
	if (a > (n / 2))
		return (1);
	return (prime(a + 1, n));
}
