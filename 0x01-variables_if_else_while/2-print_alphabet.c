#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * Return: 0 on successful exit
 */

int main(void)
{
char alph = 'a';
while (alph <= 'z')
{
putchar(alph);
putchar('\n');
alph++;
}
return (0);
}
