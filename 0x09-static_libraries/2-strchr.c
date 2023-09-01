#include "main.h"
#include <stddef.h>

/**
 * _strchr - function that locates a character in a string.
 * @s: a pointer variable of type char.
 * @c: a character variable.
 * Return: a pointer.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
