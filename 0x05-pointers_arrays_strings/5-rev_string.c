#include <stdio.h>
#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: a string
 * Return: nothing
 */

void rev_string(char *s)
{
	int i = 0;

	int j = 0;

	char mem[1000];

	while (s[i] != '\0')
	{
		i++;
	}

	for (; i > 0; i--)
	{
		mem[j] = s[i - 1];
		j++;
	}

	while (i < j)
	{
		s[i] = mem[i];
		i++;
	}
}
