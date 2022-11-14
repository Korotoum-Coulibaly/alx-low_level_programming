#include "main.h"
#include <stdlib.h>

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

	int i, j;
	int **memory;
	int result;

	result = width * height;

	if (result <= 0)
		return (NULL);

	memory = (int **) malloc(sizeof(int *) * height);

	if (memory == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		*(memory + i) = (int *) malloc(sizeof(int) * width);
		if (*(memory + i) == NULL)
		{
			for (i--; i >= 0; i--)
				free(*(memory + i));
			free(memory);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			memory[i][j] = 0;

	return (memory);
}
