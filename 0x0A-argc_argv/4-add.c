#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds all positive integers passed to the command line
 * @argc: number of command line argument
 * @argv: argument vectors
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int k = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		k += atoi(argv[i]);
	}
	printf("%d\n", k);
	return (0);
}
