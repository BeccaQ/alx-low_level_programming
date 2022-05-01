#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: a string
 * Return: the string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return ('\n');
		return ();
	}
	return (*s);
	_puts_recursion(s + 1);
}
