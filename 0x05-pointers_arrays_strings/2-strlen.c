#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: a string
 * Return: the value of i
 */

int _strlen(char *s)
{
	for (int i = 0; s[i]; i++);
	return (i);
}
