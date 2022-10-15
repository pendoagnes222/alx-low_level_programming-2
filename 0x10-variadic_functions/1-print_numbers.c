
#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator:  string to be printed between numbers
 *              if NULL, do not print it
 * @n: number of integers passed to function
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)

{
unsigned int i;
va_list ptr;
va_start(ptr, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(ptr, int));
if (separator == NULL)
;
else if (i != (n - 1))
printf("%s", separator);
}
va_end(ptr);
printf("\n");
}
