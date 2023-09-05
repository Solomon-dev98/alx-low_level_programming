#include "main.h"
#include <stdlib.h>
#include <string.h>


/**
 * str_concat - main function
 * @s1: a parameter.
 * @s2: a parameter.
 * Return: null or concatenated.
 */

char *str_concat(char *s1, char *s2)
{
	size_t len1;
	size_t len2;
	char *concatenated;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 =  "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	concatenated = (char *)malloc((len1 + len2) * sizeof(char));

	if (concatenated == NULL)
	{
		return (NULL);
	}

	strcpy(concatenated, s1);
	strcat(concatenated, s2);

	return (concatenated);
}
