#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - prints the name of the file
 * it was compiled from followed by a new line.
 * Return: the file name
 */

int main(void)
{
	printf("%s\n",__FILE__);
	return (0);
}
