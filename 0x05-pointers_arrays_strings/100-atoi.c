#include "main.h"

/**
  * _atoi- converts string to integer
  * @s: pointer to a string
  *
  * Return: Always 1 (Successful); 0 otherwise
  */

int _atoi(char *s)
{
	/* initialize result */
	unsigned int result = 0;
	/* initialize index of first digit */
	int j = 0;
	/* count of negatives */
	int count = 0;
	/* length of string */
	int length = 0;

	while (s[length])
		length++;

	/* if string is preceeded by infinite characters */
	for (j = 0; j <= length; j++)
	{
		if ((s[j] < 48) | (s[j] > 57))
		{
			if (s[j] == 45)
				++count;
			continue;
		}
		if ((s[j] >= 48) | (s[j] <= 57))
		{
			result = (result * 10) + s[j] - '0';
			if (((s[j + 1] < 48) | (s[j + 1] > 57)) | (s[j + 1] == '\0'))
			{
				if (count % 2 != 0)
					result = -result;
						break;
			}
		}
		else
			continue;
	}
	return (result);
}

