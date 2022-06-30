#include<stdlib.h>
#include<stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: no. of bytes to allocate
 * Return: a pointer to the newly allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
