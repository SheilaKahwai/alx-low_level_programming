#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @x: number to check
 * Return: res which is the last digit
 */

int print_last_digit(int x)
{
int res;
if (x < 0)
x = -x;
res = x % 10;
if (res < 0)
res = -res;
return (res);
}
