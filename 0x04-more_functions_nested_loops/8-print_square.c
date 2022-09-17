#include "main.h"

/**
 * print_square- prints a square
 * @size: size of the square
 */

void print_square(int size);

void print_square(int size)
{
	int l = 0;
	int j = 0;

	if (size > 0)
	{
		while (l < size)
		{
			j = 0;

			for (; j < size; ++j)
			{
				_putchar('#');
			}
			_putchar('\n');
			l++;
		}
	}

	else if (size <= 0)
		_putchar('\n');
}
