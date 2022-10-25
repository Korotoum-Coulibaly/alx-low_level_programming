#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords
 *
 * Return: 0
 */
int main(void)
{
	char pass[84];
	int index = 0, sum = 0, dif1, dif2;

	srand(time(0));
	while(sum < 2772)
	{
		pass[index] = 33 + rand() % 94;
		sum += pass[index++];
	}
	pass[index] = '\0';
	if (sum != 2772)
	{
		dif1 = (sum - 2772) / 2;
		dif2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			dif1++;
		for (index = 0; pass[index]; index++)
		{
			if (pass[index] >= (33 + dif1))
			{
				pass[index] -= dif1;
				break;
			}
		}
		for (index = 0; pass[index]; index++)
		{
			if (pass[index] >= (33 + dif2))
			{
				pass[index] -= dif2;
				break;
			}
		}
	}
	printf("%s",pass);
	return (0);
}
