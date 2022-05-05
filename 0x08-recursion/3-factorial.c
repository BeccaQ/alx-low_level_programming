#include <stdio.h>
#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: a number
 * Return: a number
 */

int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (0);
}
