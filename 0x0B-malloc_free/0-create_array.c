#include<stdio.h>

/**
 * create_array - creates an array of chars, and initializes it with a specific char
 * @size: size of array
 * @c: char to initialize the array with
 * Return: pointer to array or NULL if size is 0
 */

char *create_array(unsigned int size, char c)
{
	char *ar;

	if (size == 0)
		return (NULL);
	
	ar = malloc(size * sizeof(char));
	if (ar == NULL)
		return (NULL);
	else
		ar[0] = 'c';

	return (ar);
}
