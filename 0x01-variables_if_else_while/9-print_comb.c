#include <stdio.h>
#include <stdlib.h>

/**
 * main -  print the alphabet in lowercase,
 * followed by a new line.
 * Return: 0 always if successful.
 */

int main(void)
{
	int l = '0';

	for (; l <= '9'; l++)
	{
		putchar(l);
		if (l != '9')
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
