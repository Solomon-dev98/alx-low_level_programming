#include <stdio.h>

/**
 * main - the main function
 * @argc: a variable
 * @argv: a variable
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
