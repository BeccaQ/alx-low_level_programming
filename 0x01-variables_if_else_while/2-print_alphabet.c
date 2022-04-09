#include <stdio.h>
#include <stdlib.h>

/**
 * main -  print the alphabet in lowercase,
 * followed by a new line.
 * Return: 0 always if successful.
 */

int main(void)
{
	char l = 'a';

	for (; l <= 'z'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
