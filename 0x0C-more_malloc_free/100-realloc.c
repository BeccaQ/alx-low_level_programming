#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc -reallocates memory block, using malloc and free
 * @old_size: int
 * @new_size: int
 * @ptr: pointer
 * Return: a pointer to the new string
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *tmp;

	if (new_size == old_size)
	return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	tmp = malloc(new_size);
free(ptr);
return (tmp);
}
