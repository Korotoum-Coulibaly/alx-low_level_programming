#include "dog.h"
#include <stddef.h>

/**
 * print_dog - function that prints a struct dog
 * @d: new struct dog
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("Nothing\n");
	else
	{
		if ((*d).name == NULL)
		{
			printf("Name: (nil)\n");
			printf("Age: %d\n", (*d).age);
			printf("Owner: %s\n", (*d).owner);
		}
		if ((*d).age == NULL)
		{
			printf("Name: %s\n", (*d).name);
			printf("Age: (nil)");
			printf("Owner: %s\n", (*d).owner);
		}
		if((*d).owner == NULL)
		{
			printf("Name: %s\n", (*d).name);
			printf("Age: %d\n", (*d).age);
			printf("Owner: (nil)");
		}
	}
}
