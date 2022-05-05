#include <stdio.h>
#include "main.h"

/**
 * _prime_num - tells whether a number
 * is prime number or not
 * @x: factor
 * @y: multiple
 * Return: a number
 */

int _prime_num(int x, int y)
{
	if (y <=1 || (x != y && y % x == 0))
	{ 
		return (0);
	}
	else if (x == y)
	{
		return (1);
	}
	return (_prime_num(x + 1, y));
}

/**
 * is_prime_number - tells whether a number
 * is prime number or not 
 * @n: an integer
 * Return: a number
 */

int is_prime_number(int n)
{
	return (_prime_num(2, n));
}
