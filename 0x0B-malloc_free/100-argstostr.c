#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - function that concatenates all the args of the prog.
 * @ac: a parameter
 * @av: a parameter
 * Return: NULL or a pointer
 */

char *argstostr(int ac, char **av)
{
	char *result;
	int total_length, arg_length, index, i;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	total_length = 0;
	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
		total_length += strlen(av[i]) + 1;
		}
	}
	result = (char *)malloc(total_length * sizeof(char) + 1);

	if (result == NULL)
	{
		return (NULL);
	}
	index = 0;

	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			arg_length = strlen(av[i]);
			strcpy(result + index, av[i]);
			index += arg_length;
			result[index] = '\n';
			index++;
		}
	}
	result[index] = '\0';
	return (result);
}
