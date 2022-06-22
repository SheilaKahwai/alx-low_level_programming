#include "main.h"

int find_prime(int n, int i);

/**
 * is_prime_number - finds out if a number is prime
 * @n: the number to assess
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (find_prime(n, n - 1));
}

/**
 * find_prime - finds out if a number is prime
 * @n: number to assess
 * @i: iterator
 * Return: 1 if prime, 0 if not prime
 */

int find_prime(int n, int i)
{
if (i == 1)
return (1);
if (n % i == 0 && i > 0)
return (0);
return (find_prime(n, i - 1));
}
