#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - allocates memory for an array, using malloc
 * @min: int
 * @max: int 
 * Return: a pointer to the new string
 */

int *array_range(int min, int max)
{
	int *s;
	int j, i, l = 0;

	if (min > max)
	{
		return (NULL);
	}
	j = max - min + 1;
	s = malloc(j * sizeof(int));
	
	if (!s)
		return (NULL);
	
	for (i = min; i <= max; i++)
	{
		s[l] = i;
		l++;
	}
	return (s);
}
