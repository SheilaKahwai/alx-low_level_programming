#include <stdio.h>

/**
 * main - prints a combination of two double digits
 * Return: 0 on successful exit
 */

int main(void)
{
int x = 0;
while (x < 100)
{
int y = 0;
while (y < 100)
{
if (x < y)
{
putchar((x / 10) + 48);
putchar((x % 10) + 48);
putchar(' ');
putchar((y / 10) + 48);
putchar((y % 10) + 48);
if (x != 98 || y != 99)
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
