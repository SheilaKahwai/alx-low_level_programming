#include <stdio.h>

/**
 * main - prints sum of multiples of 3 and 5
 * Return: 0 on successful exit
 */

int main(void)
{
int sum = 0;
int x;
int rem1, rem2;
for (x = 1; x < 1024; x++)
{
rem1 = x % 3;
rem2 = x % 5;
if (rem1 == 0 || rem2 == 0)
{
sum += x;
}
}
printf("%d\n", sum);
return (0);
}
