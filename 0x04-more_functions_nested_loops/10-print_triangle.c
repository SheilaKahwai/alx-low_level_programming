#include "main.h"

/**
 * main - prints a triangle
 * Return: 0 on successful exit
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
return (0);
}
