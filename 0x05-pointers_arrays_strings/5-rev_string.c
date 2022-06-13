#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	char tempo;
	int x, len, len1;

	len = 0;
	len1 = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	len1 = len - 1;

	for (x = 0; x < len / 2; x++)
	{
		tempo = s[x];
		s[x] = s[len1];
		s[len1--] = tempo;
	}
}
