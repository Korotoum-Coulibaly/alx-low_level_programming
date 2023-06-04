#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of
 * integers using the linear search algorithm
 * @array: in array that is a pointer to the first element of the array
 * @size: input size of elements in array
 * @value: is th value to search
 * Return: Null or -1 or value index
 */

int linear_search(int *array, size_t size, int value)
{
	size_t C;

	if (array)
	{
		for (C = 0; C < size; C++)
		{
			printf("Value checked array[%lu] = [%d]\n", C, array[C]);
			if (array[C] == value)
				return (C);
		}
	}
	return (-1);
}
