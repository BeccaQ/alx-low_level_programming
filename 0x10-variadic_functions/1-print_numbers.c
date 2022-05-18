#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: pointer to a character
 * @n: number of parameters
 * Return: sum of parameters
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list(x);

	va_start(x, n);

	if (!separator)
	{
		return;
	}

	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(x, int));
		if (separator && i == n - 1)
			printf("%d", va_arg(x, int));
		else if (separator && i != n - 1)
			printf("%d%s", va_arg(x, int), separator);
	}
	printf("\n");
	va_end(x);
}
