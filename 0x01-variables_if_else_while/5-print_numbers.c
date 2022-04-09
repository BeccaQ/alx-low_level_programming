#include <stdio.h>
#include <stdlib.h>

/**
 * main -  print single digit from 0 to 10,
 * followed by a new line.
 * Return: 0 always if successful.
 */

int main(void)
{
	int l = 0;

	for (; l < 10; l++)
	{
		printf("%d", l);
	}
	printf("\n");
	return (0);
}
