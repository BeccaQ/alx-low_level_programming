#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - print the minimum number of coins
 * to make change for an amount of money.
 * @argc: number of command line argument
 * @argv: argument vectors
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i, num, num2, change = 0;
	int coin[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	if (num < 1)
		printf("0\n");

	else if (argc == 2)
	{
		for (i = 0; i <  5 && num; i++)
		{
			num2 = num / coin[i];
			change += num2;
			num -= num2 * coin[i];
		}
		printf("%d\n", change);
	}
	return (0);
}
