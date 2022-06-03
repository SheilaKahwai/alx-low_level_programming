#include <stdio.h>

/**
 * main - prints combinations of single digits
 * Return: 0 on successful exit
 */

int main(void)
{
int x = 0;
while (x <= 9)
{
putchar(x + '0');
if (x != 9)
{
putchar(',');
putchar(' ');
}
x++;
}
putchar('\n');
return (0);
}
