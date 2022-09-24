#include "main.h"

/**
 *char *reverse_array - This reverses am integer array
 *@a: this is the pointer to the int array passed in
 *@n: this is the size of the int array
 */

void reverse_array(int *a, int n);

void reverse_array(int *a, int n)
{
	int i = 0, tmp = 0, length = n - 1;

	while (i < length)
	{
		if (length == i || i > length)
		{
			break;
		}
		tmp = a[length];
		a[length] = a[i];
		a[i] = tmp;
		i++;
		length--;
	}
}
