#include "main.h"
#include <stdio.h>
/**
 * alloc_grid - function that returns a pointer to a
 *2 dimensional array of integers
 *@width: array colonne
 *@height: array lines
 *
 *Return: Null or pointer
 */
int **alloc_grid(int width, int height)
{

	int **memory;
	int i, j;

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			memory = (int **) malloc(sizeof(int) * (width * height));
			**(memory + ((i * width) * j)) = 0;
			printf ("%d", **memory);
		}
	}
	return (memory);
}
