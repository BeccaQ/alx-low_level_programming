#include "main.h"

/**
 * _strchr - checks for alphabetic character
 * @c: c is an ascii character
 * @s: e dey
 * Return: 1 (if letter)
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
