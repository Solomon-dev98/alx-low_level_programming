#include "main.h"

/**
 * square - checks if a * a squares d or not
 * @a: number to be squared
 * @d: square root
 * Return: a
 */
int square(int a, int d)
{
	if (a * a == d)
		return (a);
	else if (a * a > d)
		return (-1);
	return (square(a + 1, d));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: a variable.
 * Return: returns the square of a number.
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (-1);
	return (square(1, n));
}
