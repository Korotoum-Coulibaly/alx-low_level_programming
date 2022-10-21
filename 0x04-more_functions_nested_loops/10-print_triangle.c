#include "main.h"

/**
 * print_triangle - prints multiple diagonals
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (b = size - row; b >= 1; b--)
			{
				_putchar(' ');
			}
			for (c = size - row; c >= 1; c--)
			{
				_putchar ('#');
			}
			_putchar('\n');
		}
	}
}
