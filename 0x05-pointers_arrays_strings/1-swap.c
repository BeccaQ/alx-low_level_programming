#include <stdio>
#include "main.h"

/**
 * swap_int -  swaps the values of two integers
 * @a: an integer
 * @b: another integer
 * Return: nothing
 */

void swap_int(int *a, int *b);
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
