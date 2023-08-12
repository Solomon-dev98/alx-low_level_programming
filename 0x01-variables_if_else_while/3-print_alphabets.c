#include <stdio.h>

/**
 * main - the main function
 *
 * Return: 0 when succesful
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	for (a = 'A'; a <= 'Z'; a++)
		putchar(a);
	putchar('\n');

	return (0);
}
