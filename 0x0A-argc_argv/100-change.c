#include<stdio.h>
#include<stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on successful exit or 1 if no argument is given
 */

int main(int argc, char *argv[])
{
int x, i;
int change[5] = {25, 10, 5, 2, 1};
unsigned int cents = 0;

if (argc == 2)
{
x = atoi(argv[1]);
if (x < 0)
printf("0\n");
else
{
for (i = 0; i < 5; i++)
{
while (x >= change[i])
{
cents++;
x -= change[i];
}
}
printf("%d\n", cents);
}
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
