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
for (c = 0; c < 50; c++)
{
sum = x + y;
printf("%ld, ", sum);
x = y;
y = sum;
}
printf("\n");
return (0);
}
