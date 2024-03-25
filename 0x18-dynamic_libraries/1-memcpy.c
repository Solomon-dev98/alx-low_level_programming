#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @n: number of bytes to be copied.
 * @dest: a memory area.
 * @src: a memory area n bytes is to be copied from.
 * Return: returns a pointer.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
