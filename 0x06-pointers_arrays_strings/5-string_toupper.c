#include "main.h"

/**
 *string_toupper - This compares two char arrays
 *@p: First String for comparision
 *Return: returns the pointer to the char array
 */

char *string_toupper(char *p);

char *string_toupper(char *p)
{
	int tmp = 0;
	char *ptr = p;
	char upper;

	for (; *p != '\0'; p++)
	{
		if (*p >= 97 && *p <= 122)
		{
			tmp = *p - 97;
			upper = 65 + tmp;
			*p = upper;
		}
	}
	return (ptr);
}
