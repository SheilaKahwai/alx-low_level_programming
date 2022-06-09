#include "main.h"

/**
 * _isdigit - checks if character is a digit
 * @c: character to check
 * Return: res
 */

int _isdigit(int c)
{
int res;
if (c >= 48 && c <= 57)
res = 1;
else
res = 0;
return (res);
}
