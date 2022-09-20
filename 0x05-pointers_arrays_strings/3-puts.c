#include "main.h"

/**
 * _puts- function that prints a string and new line to stdout
 * @str: string to be printed
 */

void _puts(char *str);

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');

}

