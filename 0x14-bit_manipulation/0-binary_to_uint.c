#include "main.h"

/**
 * binary_to_uint - a function that converts  a binary to uint
 * @b: a array of chars.
 * Return: the converted num or 0.
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int j = 0;


	if (b == NULL)
	{
		return (0);
	}

	while (b[i] != '\0')
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}
		i++;
	}


	for (i = 0; b[i] != '\0'; i++)
	{
		j = 2 * j + (b[i] - '0');
	}

	return (j);
}
