#include <stdio.h>

/**
 * main - prints a triangle
 * Return: 0 on successful exit
 */

int main(void)
{
int x;
int y;
if (n <= 0)
_putchar('\n');
else
{
for (x = 1; x <= n; x++)
{
for(y = n; y > 0; y--)
{
if (x >= y)
_putchar('#');
else if (y > x)
_putchar(' ');
}
_putchar('\n');
}
}
return (0);
}
