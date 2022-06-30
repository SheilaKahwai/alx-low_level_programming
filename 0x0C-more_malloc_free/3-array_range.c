#include<stdlib.h>
#include<stdio.h>

/**
 * array_range - creates an array of integers
 * @min: min limit of integers
 * @max: max limit of integers
 * Return: resulting array
 */

int *array_range(int min, int max)
{
	int i, n;
	int *arr;

	if (min > max)
		return (NULL);
	n = (max - min) + 1;

	arr = malloc(n * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
	{
		arr[i] = min;
		min++;
	}

	return (arr);
}
