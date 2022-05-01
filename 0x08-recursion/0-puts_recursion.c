#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: a string
 * Return: nothing
 */

void _puts_recursion(char *s)
{
<<<<<<< HEAD
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
	}
	_putchar(*s);
	_puts_recursion(s+1);
=======
	if (*s == '\0')
	{
		return ('\n');
		return ();
	}
	return (*s);
	_puts_recursion(s + 1);
>>>>>>> 995010cc170b15de0fb6b56fc97364ffed6cb547
}
