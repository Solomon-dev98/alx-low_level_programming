#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - function that prints anything.
 * @format: a format string that specifies the types of arguments.
 * @...: a variable number of arguments.
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char ch;
	int integer;
	float fl;
	char *str, *sep = "";
	va_list args;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				ch = va_arg(args, int);
				printf("%s%c", sep, ch);
				break;
			case 'i':
				integer = va_arg(args, int);
				printf("%s%d", sep, integer);
				break;
			case 'f':
				fl = va_arg(args, double);
				printf("%s%f", sep, fl);
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					printf("%s(nil)", sep);
				else
					printf("%s%s", sep, str);
				break;
		}
		sep = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
