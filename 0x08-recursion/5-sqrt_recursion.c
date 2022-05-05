#include <stdio.h>
#include "main.h"

/**
 * _sqrt - returns the natural
 * square root of number
 * @x: an integer
 * @y: an integer
 * Return: a number
 */

int _sqrt(int x, int y)
{
	if (x * x == y)
	{
		return (x);
	}
	else if (x * x > y)
	{
		return (-1);
	}
	else if (x * x < y)
	{
		return (_sqrt(x + 1, y));
	}
	return (0);
}

/**
 * _sqrt_recursion - returns the natural
 * square root of number
 * @n: an integer
 * Return: a number
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(0, n));
}
