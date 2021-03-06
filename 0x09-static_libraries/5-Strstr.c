#include "main.h"

/**
 * _strstr - checks for alphabetic character
 * @haystack: c is an ascii character
 * @needle: string
 * Return: 1 (if letter)
 */

char *_strstr(char *haystack, char *needle)
{
	int x;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		x = 0;

		if (haystack[x] == needle[x])
		{
			do {
				if (needle[x + 1] == '\0')
					return (haystack);

				x++;
			
			} while (haystack[x] == needle[x]);
		}

		haystack++;
	}

	return ('\0');
}
