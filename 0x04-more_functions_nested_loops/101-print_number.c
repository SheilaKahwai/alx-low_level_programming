#include "main.h"

/**
 * print_number - prints any integer
 * @n: integer to print
 */

void print_number(int n)
{
int x;
if (n < 0)
{
_putchar('-');
x = -n;
}
else
x = n;
if (x / 10)
print_number(x / 10);
_putchar((x % 10) + '0');
}