#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the last digit of the number
 * stored in the variable n.
 * Return: Always 0
 */
int main(void)
{
	int n, lusdig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lusdig = n % 10;

	if (lusdig > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lusdig);
	}
	else if (lusdig == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lusdig);
	}
	else if (lusdig < 6 && lusdig != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lusdig);
	}

	return (0);
}
