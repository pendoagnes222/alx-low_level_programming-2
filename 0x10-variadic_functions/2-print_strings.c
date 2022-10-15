#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between strings
 *             if NULL, do not print it
 * @n: number of strings passed to function
 *     if one of the strings is NULL, print (nil) instead
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)

{
unsigned int i;
va_list(strings);
char *str_list;

va_start(strings, n);

for (i = 0; i < n; i++)
{
str_list = va_arg(strings, char *);
if (str_list == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str_list);
}
if (separator != NULL && i != (n - 1))
{
printf("%s", separator);
}
}
va_end(strings);
printf("\n");
}
