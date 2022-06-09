#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 */

void print_triangle(int size)
{
int x;
int y;
if (size <= 0)
_putchar('\n');
else
{
for (x = 1; x <= size; x++)
{
for (y = size; y > 0; y--)
{
if (x >= y)
_putchar('#');
else if (y > x)
_putchar(' ');
}
_putchar('\n');
}
}
}
