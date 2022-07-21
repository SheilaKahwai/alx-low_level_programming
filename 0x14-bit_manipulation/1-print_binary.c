#include "main.h"

/**
 * print_binary - converts number from decimal to binary
 * @n: number to convert
 */
void print_binary(unsigned long int n)
{
	int i, count;
	unsigned long int k;

	count = 0;

	for (i = 63; i >= 0; i--)
	{
		k = n >> i;
		if (k & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
