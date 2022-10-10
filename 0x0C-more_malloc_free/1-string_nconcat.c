#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings using a
 * most an inputted number of bytes.
 * @s1: first string.
 * @s2: second string.
 * @n: maximum number of bytes of s2 to concatenates to s1.
 * Return: NULL if function fails,
 * pointer to the concatenated space in memory otherwise
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int len = n, i;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i]; i++)
len++;
concat = malloc(sizeof(char) * (len + 1));
if (concat == NULL)
return (NULL);
len = 0;
for (i = 0; s1[i]; i++)
concat[len++] = s1[i];
for (i = 0; s2[i] && i < n;)
concat[len++] = s2[i];
concat[len] = '\0';
return (concat);
}
