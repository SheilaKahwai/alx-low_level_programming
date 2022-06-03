#include <stdio.h>

/**
 * main - prints alphabet except letter e and q
 * Return: 0 on successful exit
 */

int main(void)
{
char alph = 'a';
while (alph <= 'z' || (alph != 'e' && alph != 'q'))
{
putchar(alph);
alph++;
}
putchar('\n');
return (0);
}
