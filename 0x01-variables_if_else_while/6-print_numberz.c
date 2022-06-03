#include <stdio.h>

/**
 * main - print numbers using putchar
 * Return: 0 on successful exit
 */

int main(void)
{
int alph = 0;
while (alph < 10)
{
putchar(alph + '0');
alph++;
}
putchar('\n');
return (0);
}
