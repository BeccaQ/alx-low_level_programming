#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion -  prints a string, followed by a new line.
 * @s: a string
 * Return: the string
 */

void _puts_recursion(char *s)
{
	int i;

	i = 0;

	if (s[i] == '\0')
	{
		return ('\n');
	}
	return (s[i] _puts_recursion(*s[i + 1]));
}
