#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - function that prints a string
 * @s: a variable that stores a string.
 * Return: nothing.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		printf("\n");
		return;
	}

	printf("%c", *s);
	_puts_recursion(s + 1);
}
