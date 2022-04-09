#include <stdio.h>
#include <stdlib.h>

/**
 * main -  print numbers from 0-9,
 * followed by a new line.
 * Return: 0 always if successful.
 */

int main(void)
{
	int l = '0';

	for (; l <= '9'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
