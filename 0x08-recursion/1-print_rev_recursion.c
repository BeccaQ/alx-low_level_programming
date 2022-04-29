#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion -  prints a string in reverse
 * @s:a string
 * Return: s
 */

void _print_rev_recursion(char *s)
{
	char  i = 0;

	if (s[i] != '0')
	{
		return _print_rev_recursion(s[i-1]);
		return s[i];
		i--;
	}

	else
		return ('\n'); 
}
