#include "variadic_functions.h"

/**
 * sum_them_all - function that returns sum all of its parameters.
 * @n: a variable.
 * @...: an ellipse
 * Return: returns sum or 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;

	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
