#include "main.h"

/**
 * set_bit - sets bit at specified index to 1
 * @n: pointer to number
 * @index: index of bit to change
 * Return: 1 for success, -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
