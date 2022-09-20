#include "main.h"

/**
 * puts_half- function that prints half a string
 * @str: pointer to be parsed to the function
 */

void puts_half(char *str);

void puts_half(char *str)
{
	int i, j, length = 0;

	while (str[length])
		length++;

	if (length % 2 == 0)
		j = length / 2;
	else
		j = (length + 1) / 2;

	for (i = j; i < length; i++)
		_putchar(str[i]);

	_putchar('\n');
}

