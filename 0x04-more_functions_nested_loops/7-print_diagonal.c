#include "main.h"

/**
 * print_diagonal -prints a diagonal line
 * @n: length of line
 */

void print_diagonal(int n)
{
int x;
int y;
for (x = 1; x <= n; x++)
{
if (n > 0)
{
_putchar('\\');
_putchar('\n');
for (y = 1; y <= x; y++)
{
_putchar(' ');
}
}
}
_putchar('\n');
}
