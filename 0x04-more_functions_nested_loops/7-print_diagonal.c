#include "main.h"

/**
 * print_diagonal- function that draws a line
 * @n: length of line
 *
 */

void print_diagonal(int n);

void print_diagonal(int n)
{
	int l = 0;
	int j = 0;

	if (n > 0)
	{
		while (l < n)
		{
			j = l;

			for (; j != 0; j--)
				_putchar(' ');

			_putchar('\\');
			_putchar('\n');
			l++;
		}
	}
	else if (n <= 0)
		_putchar('\n');
}
