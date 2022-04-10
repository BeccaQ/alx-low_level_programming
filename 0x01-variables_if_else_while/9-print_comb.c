#include <stdio.h>
#include <stdlib.h>

/**
 * main -  print the single digit numbers,
 * seperated by commas.
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
	return (0);
}
