#include "main.h"

/**
 * alloc_grid - returns a pointer to a
 * 2 dimensional array of integers
 * @width: array width
 * @height: array height
 * Return: array
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **gr;

	if (width <= 0 || height <= 0)
		return (NULL);

	gr = (int **)malloc(height * sizeof(int *));
	if (gr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		a[i] = (int *)malloc(width * sizeof(int));
		if (a[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(a[j]);
			free(a);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}
