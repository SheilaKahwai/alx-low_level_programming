#include "main.h"

/**
 * main - prints the alphabet in lower case followed by a new line
 * Return: 0 on succesful exit
 */

void print_alphabet(void)
{
char alph = 'a';
while (alph <= 'z')
{
_putchar(alph);
alph++;
}
_putchar('\n');
}
