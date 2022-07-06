#include "3-calc.h"

/**
 * main - performs an arithmetic operation on 2 numbers
 * @ac: no. of arguments
 * @av: array of arguments
 * Return: 0 on successful exit
 */

int main(int ac, char *av)
{
	int num1, num2;
	int res = 0;
	int (*ptr)(int, int) = get_op_func(av[2]);

	num1 = atoi(av[1]);
	num2 = atoi(av[3]);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((av[2] == '/' || av[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	res = ptr(num1, num2);
	printf("%d\n", res);

	return (0);
}
