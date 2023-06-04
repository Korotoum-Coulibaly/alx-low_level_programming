#include"search_algos.h"

/**
 * print - prints number seperated with comma
 * @array: a pointer to the array to print
 * @first: the first index 
 * @last: the last index 
 * Return: the values 
 */

void print(int *array, size_t first, size_t last)
{
	size_t c;

	printf("Searching in array: ");
	for (c = first; c <= last; c++)
	{
		if (c != first)
			printf(", ");
		printf("%d", array[c]);
	}
	printf("\n");
}


/**
 * binary_search - function that searches for a value in a sorted 
 * array of integers using the Binary search algorithms
 * @array: in array that is a pointer to the first element of the array
 * @size: input size of elements in array
 * @value: is th value to search
 * Return: The index where the value is located or
 * -1 if it doesn't exist in the array
 */

int binary_search(int *array, size_t size, int value)
{
	size_t c = 0, first = 0, last = size - 1;

	if (array)
	{
		while (first <= last)
		{
			print(array, first, last);
			c = (first + last) / 2;

			if (value > array[c])
				first = c + 1;
			else if (value < array[c])
				last = c - 1;
			else
				return (c);
		}
	}

	return (-1);
}