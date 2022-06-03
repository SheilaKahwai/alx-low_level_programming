#include <stdio.h>

/**
 * main - prints alphabet in reverse
 * Return: 0 on successful exit
 */

int main(void)
{
char alph_rev = 'z';
while (alph_rev >= 'a')
{
putchar(alph_rev);
alph_rev--;
}
putchar('\n');
return (0);
}
