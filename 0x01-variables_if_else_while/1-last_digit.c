#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random numbers and tells if
 * the last digit is greaterthan 5,
 * equal to 0 or less than 6.
 * Return: 0 always if successful
 */
int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	printf("Last digit of %d", n);
		if (l > 5)
			printf(" is %d and is greater than 5\n", l);
		else if (l == 0)
			printf(" is %d and is 0\n", l);
		else if (l < 6 && l != 0)
		printf(" is %d and is less than 6 and not 0\n", l);
	return (0);
}
