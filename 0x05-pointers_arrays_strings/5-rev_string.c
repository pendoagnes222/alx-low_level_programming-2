#include "main.h"

/**
 * rev_string- reverses a string
 * @s: pointer parsed to the function
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	int right = 0;
	int len = 0;
	char temp;

	/* get lenght of string */
	while (s[j])
	{
		len++;
		j++;
	}
	right = len - 1;

	for (i = 0; i <= right; i++)
	{
		temp = s[i];
		s[i] = s[right];
		s[right] = temp;
		right--;
	}
}
