#include "main.h"

/**
 * puts2- prints every character of a string starting with the first
 * @str: pointer parsed to the function
 */

void puts2(char *str);

void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i % 2 == 0 || i == 0)
			_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
