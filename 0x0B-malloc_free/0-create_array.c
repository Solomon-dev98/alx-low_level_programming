#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars, and init with char.
 * @c: a variable.
 * @size: a variable.
 * Return: NULL or a pointer.
 */

char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	ch = (char *)malloc(size * sizeof(char));

	if (ch == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ch[i] = c;
	}

	return (ch);
}
