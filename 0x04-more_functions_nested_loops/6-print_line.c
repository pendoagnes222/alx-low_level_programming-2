#include "main.h"

/**
 * print_line- function that draws a line
 * @n: length of line
 */

void print_line(int n);

void print_line(int n)
{
	int l = 0;

	if (n > 0)
	{
		while (l < n)
		{
			_putchar('_');
			l++;
		}
		_putchar('\n');
	}
	else if (n <= 0)
		_putchar('\n');
}
