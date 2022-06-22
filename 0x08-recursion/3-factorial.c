/**
 * factorial - finds the factorial of a number
 * @n: number whose factorial we need to find
 * Return: factorial
 */

int factorial(int n)
{
if (n == 0)
return (1);
if (n < 0)
return (-1);
return (n * factorial(n - 1));
}
