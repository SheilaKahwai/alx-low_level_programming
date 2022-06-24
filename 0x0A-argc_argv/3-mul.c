#include<stdio.h>
#include<stdlib.h>

/**
 * main - calculates the product of two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on successful exit or 1 if argc < 2
 */

int main(int argc, char *argv[])
{
	int i;
	int product = 0;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			product = atoi(argv[i]) * atoi(argv[i + 1]);
		}
		printf("%d\n", product);
	}

	return (0);
}
