#include "main.h"

/**
 *leet- Compares two char arrays
 *@ptr: pointer to the char array to be encoded
 *Return: returns a pointer to the char array encoded
 */

char *leet(char *ptr);

char *leet(char *ptr)
{
	char encodersCap[] = "A, E, O, T, L";
	char encodersLower[] = "a, e, o, t, l";
	char fillers[] = "4, 3, 0, 7, 1";
	int  i = 0;
	char *finalptr = ptr;

	while (*ptr)
	{
		for (i = 0; i < 14; i++)
		{
			if (*ptr == encodersCap[i] ||
			*ptr == encodersLower[i])
			{
				*ptr = fillers[i];
				break;
			}
		}
		ptr++;
	}
	return (finalptr);
}
