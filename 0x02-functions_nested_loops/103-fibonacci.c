#include <stdio.h>

/**
 * main - prints the sum of the fibonacci series
 * Return: 0 on successful exit
 */

int main(void)
{
long int sum = 0;
long int next = 0;
long int x = 1;
long int y = 2;
while (y < 4000000)
{
if (y % 2 == 0)
sum += y;
next = x + y;
x = y;
y = next;
}
printf("%ld\n", sum);
return (0);
}
