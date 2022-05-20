#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @size: unsigned int
 * @nmemb: unsigned int 
 * Return: a pointer to the new string
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i;

	if (!nmemb || !size)
	{
		return (NULL);
	}

	s = malloc(nmemb * size);
	
	for (i = 0; i < nmemb; i++)
	{
		s[i] = 0;
	}
	return (s);
}
