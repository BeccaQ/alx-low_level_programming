#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints a string in reverse
 * followed by a new line
 * @s: a string
 * Return: nothing
 */

void print_rev(char *s)
{
	int i, j, slen;

	for (i = 0; s[i] != '\0';)
	{
		i++;
	}

	slen = i;

	for (j = slen - 1; j >= 0;)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}
