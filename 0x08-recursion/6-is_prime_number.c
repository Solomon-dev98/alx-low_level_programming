#include "main.h"

/**
 * prime - checks if v is a prime number or not
 * @v: number to be checked
 * @c: variable
 * Return: 1
 */
int prime(int c, int v)
{
	if (v < 2 || v % c == 0)
		return (0);
	else if (c > v / 2)
		return (1);

	return (prime(c + 1, v));
}

/**
 * is_prime_number - a function that checks for a prime number.
 * @n: a variable.
 * Return: return 1 or 0.
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);

	return (prime(2, n));
}


