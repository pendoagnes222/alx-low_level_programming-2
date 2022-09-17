#include "main.h"

/**
 * _isupper- checks for uppercase character
 * @c: ascii of the character
 * Return: 0 if lowercase, 1 otherwise
 */

int _isupper(int c);

int _isupper(int c)
{
	if (c < 65 || c > 90)
		return (0);
	else
		return (1);
}
