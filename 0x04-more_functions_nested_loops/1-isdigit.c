#include "main.h"

/**
 * _isdigit- checks for a digit
 * @c: value to be checked
 * Return: 0 if not a digit, 1 otherwise
 */

int _isdigit(int c);

int _isdigit(int c)
{
	return (c < 48 || c > 57 ? 0 : 1);
}
