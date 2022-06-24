#include<stdio.h>
#include<stdlib.h>

/**
 * main - finds the sum of numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on successful exit or 1 if argument is not an integer
 */

int main(int argc, char *argv[])
{
int i, j, x;
int sum = 0;

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] > '9' || argv[i][j] < '0')
{
printf("Error\n");
return (1);
}
}
}
for (i = 1; i < argc; i++)
{
x = atoi(argv[i]);
if (x >= 0)
sum += x;
}
printf("%d\n", sum);
return (0);
}
