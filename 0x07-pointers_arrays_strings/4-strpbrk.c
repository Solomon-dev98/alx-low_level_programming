#include "main.h"
#include "stddef.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: a variable.
 * @accept: a variable.
 * Return: returns a pointer.
 */

char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s != '\0')
	{
		for (a = accept; *a != '\0'; a++)
		{
			if (*s == *a)
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
