#include "function_pointers.h"

/**
 * int_index - calls functions to compare array elements
 * @size: size of array
 * @cmp: function pointer
 * Return: index of matching element or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
