#include<stdio.h>
#include<stdlib.h>

/**
 * _calloc - allocates memory for an array and sets the
 * memory to zero
 * @nmemb: no of elements in array
 * @size: size of array
 * Return: pointer to newly allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	memset(ptr, 0, nmemb * sizeof(ptr[0]));

	return (ptr);
}
