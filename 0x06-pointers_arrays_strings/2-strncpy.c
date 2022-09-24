#include "main.h"

/**
 *_strncpy -This copies the string from src to dest
 *@dest: this is the pointer that gets copied to
 *@src: this is the string to be copied
 *@n: this is the measure to which it will copy
  *Return: returns a pointer to the final value
 */

char *_strncpy(char *dest, char *src, int n);

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	char *finalptr = dest;

	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (finalptr);
}
