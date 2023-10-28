#include "main.h"

/**
 * main - program that prints all args it receives.
 * @argc: a variable that counts all args.
 * @argv: an array of pointers to strings.
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
