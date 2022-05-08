#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: a string
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}

/**
 * _print_rev_recursion -  prints a string in reverse
 * @s:a string
 * Return: s
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

/**
 * is_palindrome -  prints a string in reverse
 * @s:a string
 * Return: s
 */

int is_palindrome(char *s)
{
	if (_puts_recursion(s) == _print_rev_recursion(s))
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
