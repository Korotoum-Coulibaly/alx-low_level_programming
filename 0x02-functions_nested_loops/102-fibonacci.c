#include <stdio.h>
#include <stdlib.h>

/**
 * main - fibonacci sequence is generated by adding
 * the previous two terms
 *
 * Return: 0
 */
int main(void)
{
	int count;
	unsigned long i, j, m;

	i = 1;
	j = 2;
	for (count = 1; count <= 50; count++)
	{
		if (count == 1)
		{
			putchar ('0' + i);
			putchar (',');
			putchar (' ');
		}

		if (count == 2)
		{
			putchar ('0' + j);
			putchar (',');
			putchar (' ');
		}
		if (count != 1 && count != 2)
		{
			m = i + j;
			putchar (',');
			putchar (' ');
			printf("%lu", m);
			i = j;
			j = m;
		}
	}
	printf("\n");
	return (0);
}
