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
int i;
int sum = 0;

for (i = 1; i < argc; i++)
{
if (*argv[i] >= 48 && *argv[i] <= 57)
{
sum += atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", sum);

return (0);
}
