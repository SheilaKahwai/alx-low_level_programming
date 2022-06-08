#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
int prod;
int x, y;
if (n >= 0 && n < 15)
{
for (x = 0; x <= n; x++)
{
for (y = 0; y <= n; y++)
{
prod = x * y;
if (y == 0)
_putchar(prod + '0');
else if (prod < 10 && y != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
 _putchar(' ');
_putchar(prod + '0');
}
else if (prod >= 10 && prod < 100)
{
_putchar(',');
_putchar(' ');
 _putchar(' ');
_putchar((prod / 10) + '0');
_putchar((prod % 10) + '0');
}
else if (prod >= 100)
{
_putchar(',');
_putchar(' ');
_putchar((prod / 100) + '0');
_putchar(((prod / 10) % 10) + '0');
_putchar((prod % 10) + '0');
}
}
_putchar('\n');
}
}
}
