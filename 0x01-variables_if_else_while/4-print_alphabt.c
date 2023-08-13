#include <stdio.h>

/**
 * main - the maiin function
 * Return: always 0 when succesful
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		if (i != 'q' && i != 'e')
		putchar(i);
	putchar('\n');
	return (0);
}

