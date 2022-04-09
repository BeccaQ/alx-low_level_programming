#include <stdio.h>
#include <stdlib.h>

/**
 * main -  print the alphabet in lowercase in reverse,
 * followed by a new line.
 * Return: 0 always if successful.
 */

int main(void)
{
	char l = 'z';

	for (; l >= 'a'; l--)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
