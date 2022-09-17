#include "main.h"

/**
 * print_triangle- prints a triangle
 * @size: size of triangle
 */

void print_triangle(int size);

void print_triangle(int size)
{
	int l = 0;
	int j = 0;
	int k = 0;

	if (size > 0)
	{
		for (l = 0; l < size; l++)
		{
			j = l;
			for (; j < size - 1; j++)
			{
				_putchar(' ');
			}

			for (k = 0; k < size - j + l; k++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else if (size <= 0)
		_putchar('\n');
}
