#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase
 * follwed by a new line ten times
 */

void print_alphabet_x10(void)
{
  int x = 0, char alph;
  while (x < 10)
    {
      alph = 'a';
      while (alph <= 'z')
	{
	  _putchar(alph);
	  alph++;
	}
      _putchar('\n');
      x++;
    }
}
