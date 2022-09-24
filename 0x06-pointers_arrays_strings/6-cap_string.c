#include "main.h"
#include<stdio.h>

/**
 *cap_string - This capitalizes first letter of words in the string
 *@p: pointer
 *Return: This returns the pointer to the string
 */


char *cap_string(char *p);

char *cap_string(char *p)
{
	int capFL = 0;
	char *ptr = p;
	char prev = *p;

	while (*p)
	{
		capFL = (*p >= 'a' && *p <= 'z') ? capFL + 1 : 0;
		if (capFL == 1)
		{
			if (prev == ' ' ||
			prev == '\t' ||
			prev == '\n' ||
			prev == ',' ||
			prev == ';' ||
			prev == '.' ||
			prev == '!' ||
			prev == '?' ||
			prev == '"' ||
			prev == '(' ||
			prev == ')' ||
			prev == '{' ||
			prev == '}' ||
			p == ptr)
			{
				*p = (65 + (*p - 97));
			}
		}
	prev = *p;
	p++;
	}
	return (ptr);
}
