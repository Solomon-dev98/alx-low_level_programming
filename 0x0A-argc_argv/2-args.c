#include <stdio.h>

/**
 * main - the main function
 * @argc: argument count
 * @argv: argument array of pointers
 * Return: always 0 when succesful
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
