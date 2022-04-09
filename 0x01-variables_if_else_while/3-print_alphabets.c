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
	char v = 'A';

	for (; l <= 'z'; l++)
	{
		putchar(l);
	}
	for (; v <= 'Z'; v++)
	{
		putchar(v);
	}
	putchar('\n');
	return (0);
}
