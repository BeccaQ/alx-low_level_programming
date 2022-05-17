#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of arguments
 * Return: sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list(b);

	va_start(b, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
		sum += va_arg(b, int);
	va_end(b);
	return (sum);
}
