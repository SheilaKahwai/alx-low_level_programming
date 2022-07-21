#include "main.h"

/**
 * get_bit - gets value of a bit at a certain index
 * @n: number to search
 * @index: index of bit
 * Return: value of bit at the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);
	bit_val = (n >> index) & 1;
	
	return (bit_val);
