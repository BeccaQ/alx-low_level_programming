#include <stdio.h>
#include <stdlib.h>

/**
 * main -  print the alphabet in lowercase,
 * followed by a new line.
 * Return: 0 always if successful.
 */

int main(void)
{
	int l = 48;
	char v = 'a';

	for (; l < 58; l++)
	{
		putchar(l);
	}
	for (; v <= 'f'; v++)
	{
		putchar(v);
	}
	putchar('\n');
	return (0);
}
