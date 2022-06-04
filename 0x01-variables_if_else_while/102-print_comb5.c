#include <stdio.h>

/**
 * main - prints a combination of two double digits
 * Return: 0 on successful exit
 */

int main(void)
{
int w = 0;
while (w < 10)
{
int x = 0;
while (x < 10)
{
int y = 0;
while (y < 10)
{
int z = 0;
while (z < 10)
{
if (w <= y && x < z)
{
putchar(w + '0');
putchar(x + '0');
putchar(' ');
putchar(y + '0');
putchar(z + '0');
if (w != 9 || x != 8 || y != 9 || z != 9)
{
putchar(',');
putchar(' ');
}
}
z++;
}
y++;
}
x++;
}
w++;
}
putchar('\n');
return (0);
}
