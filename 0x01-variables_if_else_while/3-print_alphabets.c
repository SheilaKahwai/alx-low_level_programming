#include <stdio.h>

/**
 * main - prints the alphabet in lower and uppercase
 * Return: 0 on successful exit
 */

int main(void)
{
char lower_alph = 'a';
char upper_alph = 'A';
while (lower_alph <= 'z')
{
putchar(lower_alph);
lower_alph++;
}
while (upper_alph <= 'Z')
{
putchar(upper_alph);
upper_alph++;
}
putchar('\n');
return (0);
}
