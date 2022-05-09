#include <stdio.h>
#include "main.h"

/**
 * _strchr -  that locates a character in a string
 * @s: pointer to a char
 * @c: a char
 * Return: a pointer
 */

char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			break;
		}
	} while
		(*s++);

	return (s);
}
