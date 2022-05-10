#include "main.h"

/**
 * _strpbrk - checks for alphabetic character
 * @s: c is an ascii character
 * @accept: 
 * Return: 1 (if letter)
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}

		}
		s++;
	}
return ('\0');
}
