#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: a string
 * Return: nothing
 */

int _strlen(char *s)
{
	int i = 0;

	for(; s[i]; i++);

	return (i);
}