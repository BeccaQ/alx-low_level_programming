#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_all - prints all types of parameters passed to it
 * followed by a new line
 * @format: list of parameter types
 * Return: parameters
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *comma = "";

	va_list(x);

	va_start(x, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", comma, va_arg(x, int));
					break;
				case 'i':
					printf("%s%d", comma, va_arg(x, int));
					break;
				case 'f':
					printf("%s%f", comma, va_arg(x, double));
					break;
				case 's':
					str = va_arg(x, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", comma, str);
					break;
				default:
					i++;
					continue;
			}

			comma = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(x);
}
