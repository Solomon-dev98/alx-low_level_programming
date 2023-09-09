#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - a function that allocates memory for an array
 * @nmemb: a parameter
 * @size: a parameter.
 * Return: NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int size2;

	/* if nmemb or size is 0, return NULL */

	if (nmemb == 0 || size == 0)
		return (NULL);

	/* calculate the size */
	size2 = nmemb * size;

	/* allocate memory using malloc */

	ptr = malloc(size2);

	/* return NULL if malloc fails */
	if (ptr == NULL)
		return (NULL);

	/* set memory to 0 */
	memset(ptr, 0, size2);

	return (ptr);
}
