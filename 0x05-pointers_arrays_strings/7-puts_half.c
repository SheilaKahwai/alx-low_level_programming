#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int x, y;

	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (x = len / 2; str[x] != '\0'; x++)
		{
			_putchar(str[x]);
		}
	}
	else if (len % 2)
	{
		for (y = (len - 1) / 2; y < len - 1; y++)
		{
			_putchar(str[y + 1]);
		}
	}
	_putchar('\n');
}
