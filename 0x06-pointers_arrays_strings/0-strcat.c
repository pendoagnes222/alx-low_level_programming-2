#include "main.h"

/**
 * _strcat- function that concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: two strings combined
 */

char *_strcat(char *dest, char *src);

char *_strcat(char *dest, char *src)
{
	int length, srclength = 0;
	char *finalptr = dest;

	for (length = 0; dest[length] != '\0'; length++)
	{
	}
	for (srclength = 0; src[srclength] != '\0'; srclength++)
	{
		dest[length] = src[srclength];
		length++;
	}

	dest[length] = '\0';
	return (finalptr);
}
