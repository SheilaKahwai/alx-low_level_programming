#include "main.h"

/**
 * times_table - prints the times table
 */

void times_table(void)
{
int prod;
int x = 0;
while (x < 10)
{
int y = 0;
while (y < 10)
{
prod = x * y;
if (y == 0)
_putchar(prod + '0');
if (prod < 10 && y != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(prod + '0');
}
else if (prod >= 10)
{
_putchar(',');
_putchar(' ');
_putchar((prod / 10) + '0');
_putchar((prod % 10) + '0');
}
y++;
}
_putchar('\n');
x++;
}
}
