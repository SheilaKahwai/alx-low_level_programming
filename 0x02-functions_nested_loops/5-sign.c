/**
 * print_sign - prints if number is positive, negative or zero
 * @n: number to check
 * Return: 1 if positive, 0 if zero, -1 if negative
 */

int print_sign(int n)
{
int res;
if (n > 0)
res = 1;
else if (n == 0)
res = 0;
else
res = -1;
return (res);
}
