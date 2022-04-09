#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - tells wether the random numbers generated
 * by the programme is negative or positive
 * Return: 0 always if successful
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
