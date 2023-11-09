#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers followed by new line
 * @separator: a string to be printed
 * @n: number of integers passed
 * @...: a variable number of arguments
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int print = 0;
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		print = va_arg(args, int);
		printf("%d", print);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
