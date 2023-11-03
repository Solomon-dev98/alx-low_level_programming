#include "main.h"
#include <string.h>

/**
 * _realloc - function that reallocates a memory block.
 * @ptr: pointer to previously allocated memory.
 * @old_size: size of the previously allocated block.
 * @new_size: size of the new block.
 * Return: return a pointer on success.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *pt;
	size_t copysize;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	pt = malloc(new_size);

	if (pt == NULL)
	{
		return (NULL);
	}

	copysize = (old_size < new_size) ? old_size : new_size;

	memcpy(pt, ptr, copysize);
	free(ptr);

	return (pt);
}
