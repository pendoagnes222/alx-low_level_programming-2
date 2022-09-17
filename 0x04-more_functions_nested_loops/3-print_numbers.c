#include "main.h"

/**
 * print_numbers- prints 0 to 9
 *
 * Description: prints numbers between 0 and 9
 */

void print_numbers(void);

void print_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
		_putchar(c);
	_putchar('\n');
}
