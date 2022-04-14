#include <stdio.h>

/**
<<<<<<< HEAD
 * main - prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
=======
 * main -  print the alphabet in lowercase,
 * followed by a new line.
 * Return: 0 always if successful.
*/
>>>>>>> e264c475c753fd81a49842dad4f2cedb22ef27b4
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
