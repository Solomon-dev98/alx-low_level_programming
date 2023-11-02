#include "main.h"
#include <string.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: destination string variable.
 * @s2: source string variable.
 * @n: an unsigned int variable.
 * Return: returns a pointer.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	str = malloc(sizeof(*str) * (len1 + n) + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	strcpy(str, s1);

	strncat(str, s2, n);

	return (str);
}
