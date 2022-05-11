#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two integers passed to the command line
 * @argc: number of command line argument
 * @argv: argument vectors
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i, j, k;


	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		k = i * j; 	
		printf("%d\n", k);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
