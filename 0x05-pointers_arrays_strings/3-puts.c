#include <string.h>

/**
 * _puts - prints a string
 * @str: string to print
 */

void _puts(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		_putchar(*str++);
	}

	_putchar('\n');
}
