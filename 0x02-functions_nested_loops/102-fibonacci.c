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
	int count, i, j, m;

	i = 1;
	j = 2;
	for (count = 1; count <= 50; count++)
	{
		if (count == 1)
			putchar ('0' + i);
		if (count == 2)
			putchar ('0' + j);
		if (count != 1 && count != 2)
		{
			m = i + j;
			printf("%d", m);
			i = j;
			j = m;
		}
		putchar (',');
		putchar (' ');
	}
	printf("\n");
	return (0);
}
