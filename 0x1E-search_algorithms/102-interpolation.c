#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of integers
 *
 * @array: in array that is a pointer to the first element of the array
 * @size: the number of elements in array
 * @value: is th value to search
 * Return: Null or -1 or value index
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t i = 0, low = 0, high = size - 1;

	if (array)
	{
		while ((value >= array[low]))
		{
			i = low + (((double)(high - low) /
						(array[high] - array[low])) * (value - array[low]));

			if (i > size)
			{
				printf("Value checked array[%lu] is out of range\n", i);
				break;
			}

			printf("Value checked array[%lu] = [%d]\n", i, array[i]);

			if (array[i] < value)
				low = i + 1;
			else if (array[i] > value)
				high = i - 1;
			else
				return (i);
		}
	}

	return (-1);
}
