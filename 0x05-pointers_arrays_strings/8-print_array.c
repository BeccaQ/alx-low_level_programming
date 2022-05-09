#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array
 * @a:integer to be printed
 * @n: number of elements of array
 * Return: nothing
*/

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));

		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
