#include "main.h"

/**
 * _isupper - checks if character is uppercase
 * @c: character to check
 * Return: res
 */

int _isupper(int c)
{
int res;
if (c >= 65 && c <= 90)
res = 1;
else
res = 0;
return (res);
}
