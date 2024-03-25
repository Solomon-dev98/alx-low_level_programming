#include "main.h"
#include <stdio.h>

/**
 * _abs - it computes the absolute value of an integer.
 * @a: a parameter
 * Return: -a or a
 */

int _abs(int a)
{
	if (a < 0)
		return (-a);
	else
		return (a);
}
