#include "main.h"

/**
 * array_range - a function that creates an array of integers.
 * @min:  a variable.
 * @max: a variable.
 * Return: a pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *pt;
	int i;

	if (min > max)
		return (NULL);

	pt = malloc(sizeof(int) * (max - min + 1));

	if (pt == NULL)
		return (NULL);

	for (i = 0; i < max - min + 1; i++)
	{
		pt[i] = min + i;
	}
	return (pt);
}
