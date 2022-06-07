#include "main.h"

/**
 * _abs - prints the absolute value of a number
 * @x: the number to check
 * Return: res which is the absolute value
 */

int _abs(int x)
{
int res;
if (x > 0)
res = x;
else
res = x * (-1);
 return (res);
}
