#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0
 * Return: void
 */

void times_table(void)
{
	int i, j, result;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			result = i * j;
			if (j = 0)
				_putchar('%d, ', result);
			else
			{
				_putchar("%d, ", result);
			}
			_putchar("2%d, " result);
		}
		_putchar('\n');
	}
}

