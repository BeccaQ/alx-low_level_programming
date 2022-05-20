#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - that concatenate two strings
 * @n: unsigned int
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: a pointer to the new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, k, l;

	if (!s1)
		i = 0;
	for (i = 0; s1[i];)
		i++;
	if (!s2)
		j = 0;
	for (j = 0; s2[j];)
		j++;
	if (n >= j)
		n = j;
	k = i + n + 1;

	s = malloc(k * sizeof(char));

	if (!s)
	{
		return ("NULL");
	}

	for (l = 0; l < i; l++)
	{
		s[l] = s1[l];
	}
	for (l = 0; l < n; l++)
	{
		s[l + i] = s2[l];
	}

	return (s);

}
