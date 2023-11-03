#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * mul - a program that multiplies two positive numbers.
 * @num1: a variable.
 * @num2: a variable.
 * Return: num1 * num2..
 */

int mul(int num1, int num2)
{
	return (num1 * num2);
}
/**
 * main - a function that returns the multipication of two numbers.
 * @argc: a parameter.
 * @argv: a parameter.
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int m, n, i;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		m = atoi(argv[1]);
		n = atoi(argv[2]);
		if (!isdigit(*argv[1]) || !isdigit(*argv[2]))
		{
			printf("Error\n");
			exit(98);
		}
		i = mul(m, n);
		printf("%d\n", i);
	}
	return (0);
}
