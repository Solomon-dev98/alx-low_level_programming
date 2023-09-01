#include "main.h"
#include <stddef.h>

/**
 * _strstr - the main function.
 * @haystack: a variable.
 * @needle: a variable.
 * Return: return a pointer.
 */

#include <stddef.h>

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}

