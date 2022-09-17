#include "main.h"

/**
 * more_numbers- prints 0 to 14 10 times
 *
 * Description: prints 0 to 14 ten times
 */

void more_numbers(void);

void more_numbers(void)
{
	int i;
	int j = 48;
	int count = 0;

	while (count < 10)
	{
		for (i = 48; i <= 57; i++)
			_putchar(i);
		for (i = 49; (j <= 52) && (j >= 48); j++)
		{
			_putchar(i);
			_putchar(j);
		}
	count++;
	}
}
