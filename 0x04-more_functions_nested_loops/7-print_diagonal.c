#include "main.h"

/**
 * print_diagonal - a function that draws a diagonl line on the terminal
 * @n: a parameter
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;
		int j;

		for (i = 1; i <= n; i++)
		{
			for (j = 0; j <= i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
