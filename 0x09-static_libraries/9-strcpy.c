#include "main.h"

/**
 * _strcpy - checks for alphabetic character
 * @dest: thab
 * @src: c is an ascii character
 * @n: string
 * Return: 1 (if letter)
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
