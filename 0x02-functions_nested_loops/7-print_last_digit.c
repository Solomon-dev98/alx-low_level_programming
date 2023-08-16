#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: the parameter
 * Return: last digit
 */

int print_last_digit(int i)
{
	int k;

	k = i % 10;
	if (i < 10)
		k = -k;
	_putchar(k + '0');
	return (k);
}
