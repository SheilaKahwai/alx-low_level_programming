#include "main.h"

/**
 * clear_bit - sets value of bit at specified index to 0
 * @n: number to change
 * @index: index of bit to set to 0
 * Return: 1 on success, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
