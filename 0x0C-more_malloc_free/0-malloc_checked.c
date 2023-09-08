#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: is a parameter to malloc_checked function.
 * Return: return a pointer
 */

void *malloc_checked(unsigned int b)
{
	void *allomem;

	allomem = malloc(b);

	if (allomem == NULL)
		exit(98);

	return (allomem);
}
