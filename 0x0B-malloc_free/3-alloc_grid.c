#include<stdio.h>
#include<stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: no. of rows of array
 * @height: no. of columns of array
 * Return: 0 on successful exit or NULL if width or height is 0
 */

int **alloc_grid(int width, int height)
{
	int **ar;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	ar = (int **)malloc(width * sizeof(int *));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		ar[i] = (int *)malloc(height * sizeof(int));
		if (ar[i] == NULL)
		{
			free(ar);
			for (j = 0; j <= i; j++)
				free(ar[j]);
			return (NULL);
		}
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			ar[i][j] = 0;
		}
	}

	return (ar);
}
