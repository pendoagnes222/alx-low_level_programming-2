#include "main.h"

/**
 * _strcpy - this copies a string from src to destination
 * @src: this is the source string to be copied
 * @dest: this is where the string would be copied to
 * Return: This returns the pointer to the destination
 */

char *_strcpy(char *dest, char *src);

char *_strcpy(char *dest, char *src)
{
	int length = 0;
	int start = 0;

	/* get length */
	while (src[length])
		length++;

	for (start = 0; start <= length; start++)
		dest[start] = src[start];

	return (dest);
}
