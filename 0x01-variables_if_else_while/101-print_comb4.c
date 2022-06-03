#include <stdio.h>

/**
 * main - prints a combination of 3 digits
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
int z = 2;
while (z < 10)
{
if (x < y && y < z && x < z)
{
putchar(x + '0');
putchar(y + '0');
putchar(z + '0');
if (x != 7 || y != 8 || z != 9)
{
putchar(',');
putchar(' ');
}
}
z++;
}
y++;
}
z++;
}
putchar('\n');
return (0);
}
