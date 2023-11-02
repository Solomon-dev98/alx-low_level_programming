#include "main.h"

/**
 * _calloc - function that allocates memory for an array.
 * @nmemb: a variable.
 * @size: a variable.
 * Return: returns a pointer.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	/* allocates memory for the array. */
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb * size; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}

