#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: pointer to a string
 * @n: number of strings
 * Return: strings and separatorfollowed by new line
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list(x);

	va_start(x, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(x, char *);

		if (!str)
			str = "nil";
		if (!separator || (separator && i == 0))
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}

	printf("\n");

	va_end(x);
}
