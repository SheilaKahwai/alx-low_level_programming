#include "main.h"

/**
 * binary_to_uint - converts binary to decimal
 * @b: string to convert to decimal
 * Return: decimal number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_val = 0;
	unsigned int base = 1;
	unsigned int len = 0;
	unsigned int i;

	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		len++;
	}

	for (i = (len - 1); b[i]; i--)
	{
		if (b[i] > '1' || b[i] < '0')
			return (0);
		if (b[i] == '1')
			dec_val += base;
		base = base * 2;
	}
	return (dec_val);
}
