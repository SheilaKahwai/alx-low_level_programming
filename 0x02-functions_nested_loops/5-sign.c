/**
 * print_sign - prints if number is positive, negative or zero
 * @n: number to check
 * Return: 1 if positive, 0 if zero, -1 if negative
 */

int print_sign(int n)
{
int res;
if (n > 0)
{
_putchar('+');
_putchar(',');
res = 1;
_putchar('\n');
}
else if (n == 0)
{
_putchar(' ');
_putchar(',');
res = 0;
_putchar('\n');
}
else
{
_putchar('-');
_putchar(',');
res = -1;
_putchar('\n');
return (res);
}
