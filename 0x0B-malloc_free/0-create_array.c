#include<stdio.h>
#include<stdlib.h>

/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char
 * @size: size of array
 * @c: char to initialize the array with
 * Return: pointer to array or NULL if size is 0
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	ar = (char *)malloc(size * sizeof(char));
	if (ar == NULL)
		return (NULL);
	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	ar[i] = '\0';

	return (ar);
}
