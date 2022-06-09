#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 */

void print_triangle(int size)
{
int size;
int y;
if (n <= 0)
_putchar('\n');
else
{
for (size = 1; size <= n; size++)
{
for(y = n; y > 0; y--)
{
if (size >= y)
_putchar('#');
else if (y > size)
_putchar(' ');
}
_putchar('\n');
}
}
}
