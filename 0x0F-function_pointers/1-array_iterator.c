#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - calls functions to print elements of an array
 * @array: array whose elements to print
 * @size: no. of elements to print
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
