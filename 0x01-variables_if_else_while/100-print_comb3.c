#include <stdio.h>

/**
 * main - prints combinations of two digits
 * Return: 0 on successful exit
 */

int main(void)
{
int x = 0;
while (x < 10)
{
int y = 1;
while (y < 10)
{
if (x != y && x < y)
{
putchar(x + '0');
putchar(y + '0');
if (x != 8 || y != 9)
{
putchar(',');
putchar(' ');
}
}
y++;
}
x++;
}
putchar('\n');
return (0);
}
