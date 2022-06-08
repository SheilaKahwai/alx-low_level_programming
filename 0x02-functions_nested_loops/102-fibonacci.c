#include <stdio.h>

/**
 * main - prints the fibonacci numbers
 * Return: 0 on successful exit
 */

int main(void)
{
int c;
long int x = 1;
long int y = 2;
long int sum = 0;
printf("%ld, ", x);
printf("%ld, ", y);
for (c = 1; c <= 50; c++)
{
sum = x + y;
if (c != 50)
{
printf("%ld, ", sum);
x = y;
y = sum;
}
else
{
printf("%ld", sum);
}
}
printf("\n");
return (0);
}
