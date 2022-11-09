#include "main.h"

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array of integers
 *@width: array colonne
 *height: array lines
 *
 * Return Null or pointer
 */
int **alloc_grid(int width,int height)
{

	char *memory;
	unsigned int i, j;

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			memory = (char *) malloc(sizeof(char) * (width * height);
			/**memory = *(test + ((i * width) * j));*/
		}
	}

}
