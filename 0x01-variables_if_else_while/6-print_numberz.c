#include <stdio.h>

/**
 * main - function prints 0 to 9
 *
 * Return: always 0 when succesful
 */

int main(void)
{
	int i;

	for (i = 0; i <= 10; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
