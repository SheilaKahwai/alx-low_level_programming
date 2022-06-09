#include "main.h"

/**
 * print_line - prints a line
 * @n: length of line
 */

void print_line(int n)
{
int x;
for (x = 1; x <= n; x++)
{
if (n > 0)
_putchar('_');
}
_putchar('\n');
}
