#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly
 * allocated space in memory, which contains
 * a copy of the string given as a parameter.
 * @str: a string to copy
 * Return: pointer to a new allocated space memory
 * and NULL if code fails
 */

char *_strdup(char *str)
{
	int len, i, x = 0;
	char *g;

	if (!str)
		return (NULL);
	for (i = 0; *(str + i); i++)
	{
		x++;
	}
	len = x + 1;
	g = malloc(len * sizeof(char));

	if (!g)
		return (NULL);

	for (i = 0; *(str + i); i++)
	{
		g[i] = str[i];
	}
	g[len] = '\0';
	return (g);
	free(g);
}
