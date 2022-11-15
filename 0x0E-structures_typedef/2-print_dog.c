#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 * @d: new struct dog
 *
 */
void print_dog(struct dog *d)
{
	if (!d)
		printf("Nothing\n");
	else
	{
		if ((*d).name == NULL)
		{
			printf("Name: (nil)\n");
			printf("Age: %f\n", (*d).age);
			printf("Owner: %s\n", (*d).owner);
		}
		if ((*d).age == 0)
		{
			printf("Name: %s\n", (*d).name);
			printf("Age: (nil)\n");
			printf("Owner: %s\n", (*d).owner);
		}
		if ((*d).owner == NULL)
		{
			printf("Name: %s\n", (*d).name);
			printf("Age: %f\n", (*d).age);
			printf("Owner: (nil)\n");
		}
		if ((*d).name == NULL && (*d).owner == NULL)
		{
			printf("Name: (nil)\n");
			printf("Age: %f\n", (*d).age);
			printf("Owner: (nil)\n");
		}
		if ((*d).name != NULL && (*d).age != 0 && (*d).owner != NULL)
		{
			printf("Name: %s\n", (*d).name);
			printf("Age: %f\n", (*d).age);
			printf("Owner: %s\n", (*d).owner);
		}
	}
}
