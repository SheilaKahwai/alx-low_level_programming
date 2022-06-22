/**
 * _pow_recursion - calculates power of a number
 * @x: integer to be raised to a certain power
 * @y: power to raise the integer to
 * Return: power
 */

int _pow_recursion(int x, int y)
{
if (y == 0)
return (1);
if (y < 0)
return (-1);
return (x * _pow_recursion(x, (y - 1)));
}
