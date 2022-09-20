#include "main.h"

/**
 * print_rev- prints the string in reverse
 * @s: pointer parsed to the function
 */

void print_rev(char *s)
{
	int len = 0;

	while (*s)
	{
		++len;
		++s;
	}
	s -= 1;
	while (len > 0)
	{
		_putchar(*s);
		len--;
		s--;
	}
	_putchar('\n');
}
