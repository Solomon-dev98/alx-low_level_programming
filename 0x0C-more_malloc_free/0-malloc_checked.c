#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: an unsigned int variable.
 * Return: returns nothing.
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(sizeof(*ptr) * b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
