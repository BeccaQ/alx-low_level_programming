#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array
 * @c: a character
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *g = (char *)malloc(size * sizeof(char));

	if (size && g)
	{
		for (i = 0; i < size; i++)
		{
			*(g + i) = c;
		}
		return (g);
	}

	return (NULL);
}
