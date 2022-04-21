#include <stdio.h>
#include "main.h"

/**
 * swap_int -  swaps the values of two integers
 * @a: an integer
 * @b: another integer
 * @n: temporary value holder
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
