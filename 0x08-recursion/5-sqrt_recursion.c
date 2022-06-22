#include "main.h"

int find_sqrt(int n, int i);

/**
 * _sqrt_recursion - finds the squareroot of a number
 * @n: number to find the squareroot of
 * Return: squareroot
 */

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (find_sqrt(n, 0));
}

/**
 * find_sqrt - recursion to find the squareroot
 * @n: number to find the squareroot of
 * @i: iterator
 * Return: squareroot
 */

int find_sqrt(int n, int i)
{
if (i * i == n)
return (i);
if (i * i > n)
return (-1);
return (find_sqrt(n, i + 1));
}
