#include <stdio.h>

/**
 * main - a while loop
 *
 * Return: always 0 when successful
 */

int main(void)
{
	int a = 0;

	while (a < 10)
	{
		printf("%d\n", a);
		a = a + 1;
	}
	return (0);
}
