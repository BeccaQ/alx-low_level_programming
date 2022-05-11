#include <stdio.h>
#include <stdlib.h>

/**
 * _args - prints the command line arguments
 * passed to it
 * @argc: number of command line argument
 * @argv: argument vectors
 * Return: 0 on success
 */

int main(int argc, __attribute__ ((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
