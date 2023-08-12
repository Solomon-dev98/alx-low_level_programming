#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - this is the main function
 *
 * Return: always 0
 */

int main(void)
{
	int n;
	int g;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	g = n % 10;
	if (g > 5)
		printf("Last digit of %d is %d and is greater than 5", n, g);
	else if (g == 0)
		printf("Last digit of %d is %d and is 0", n, g);
	else if (g < 6 && g != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, g);

	printf("\n");

	return (0);
}
