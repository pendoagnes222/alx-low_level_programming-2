#include "main.h"

/**
 *_strcmp - This compares two char arrays
 *@s2: First String for comparision
 *@s1: Second String for comparison
 *Return: returns 1 if s1 greater than s2, -1 if otherwise ekse 0
 */

int _strcmp(char *s1, char *s2);

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(const unsigned char *)s1 - *(const unsigned char *)s2);
}

