#include "main.h"
#include <stdio.h>

/**
 * print_array- prints the elements of an array of integers
 * @a: pointer parsed to function
 * @n: number of elements to be printed
 */

void print_array(int *a, int n);

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == n - 1)
			continue;
		printf(", ");
	}
	printf("\n");
}
