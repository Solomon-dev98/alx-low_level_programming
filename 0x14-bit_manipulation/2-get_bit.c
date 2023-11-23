#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: a long int var.
 * @index: the given index.
 * Return: returns the value of a bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);

	value = (n >> index) & 1;

	return (value);
}
