#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - function that creates an array of integers.
 * @min: a parameter.
 * @max: a parameter.
 * Return: NULL
 */

int *array_range(int min, int max)
{
	int *arrayOfint;
	int size;
	int i;

	if (min > max)
		return (NULL);

	/* calculate the size of the array */
	size = max - min + 1;

	/* allocate memory for the array */
	arrayOfint = (int *)malloc(size * sizeof(int));

	/* check if malloc failed */
	if (arrayOfint == NULL)
		return (NULL);

	/* fill the array with values from min to max */
	for (i = 0; i < size; i++)
	{
		arrayOfint[i] = min + i;
	}

	return (arrayOfint);
}
