#include <stdlib.h>



/**
 * _strdup - function tat returns a newly allocated space in memory.
 * @str: a variable.
 * Return: a pointer.
 */

char *_strdup(char *str)
{
	int l = 0;
	int i = 0;
	char *str1;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		l++;
		i++;
	}
	str1 = (char *)malloc(l * sizeof(char) + 1);
	if (str1 == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		str1[i] = str[i];
	}
	return (str1);
}
