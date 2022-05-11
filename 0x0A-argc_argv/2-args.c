#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the command line arguments
 * passed to it
 * @argc: number of command line argument
 * @argv: argument vectors
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc >= 1)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
