#include "main.h"
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 * @argc: a variable.
 * @argv: a variable;
 * Return: 0 on success or 1 for an error.
 */

int main(int argc, char *argv[])
{
	int num1, num2, mul = 0;

	if (argc > 1)
	{
		if (argc != 3)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			num1 = atoi(argv[1]);
			num2 = atoi(argv[2]);
			mul = num1 * num2;
			printf("%d\n", mul);
		}
	}
	return (0);
}
