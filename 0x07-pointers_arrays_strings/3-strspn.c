#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: a pointer variable.
 * @accept: a pointer variable.
 * Return: number of bytes.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int isAccepted;
	char *a;

	while (*s != '\0')
	{
		isAccepted = 0;
		for (a = accept; *a != '\0'; a++)
		{
			if (*s == *a)
			{
				isAccepted = 1;
				break;
			}
		}
		if (isAccepted)
		{
			length++;
			s++;
		}
		else
		{
			break;
		}
	}
	return (length);

}
