#include "main.h"

/**
 * main - program that prints number of args passed to it
 * @argc: a variable that contains no of args.
 * @argv: a variable.
 * Return: 0 on success.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
