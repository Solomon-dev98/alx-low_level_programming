#include <stdio.h>

/**
 * main - the main function
 *
 * Return: always 0 when successful
 */

int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
		putchar(a);
	putchar('\n');
	return (0);
}
