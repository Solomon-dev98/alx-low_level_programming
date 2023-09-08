#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two string.
 * @n: a parameter
 * @s1: a parameter
 * @s2: a parameter
 * Return: NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *catenate;
	unsigned int len1;

	/* treat NULL as empty string */

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* get length of both strings */

	len1 = strlen(s1);

	if (n >= strlen(s2))
		n = strlen(s2);

	catenate = (char *)malloc(len1 + n + 1);

	if (catenate == NULL)
		return (NULL);

	strcpy(catenate, s1);

	strncat(catenate, s2, n);

	return (catenate);
}
