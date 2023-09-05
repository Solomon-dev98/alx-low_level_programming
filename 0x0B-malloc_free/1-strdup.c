#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function prototype
 * @str: a char parameter.
 * Return: null
 */

char *_strdup(char *str)
{
	char *duplicate;
	size_t len;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);

	duplicate = (char *)malloc((len + 1) * sizeof(char));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	strcpy(duplicate, str);

	return (duplicate);
}
