#include<stdio.h>
#include<stdlib.h>

/**
 * main - prints the opcodes of itself
 * @ac: number of arguments
 * @av: array of arguments
 * Return: 0 on succesful exit
 */
int main(int ac, char *av[])
{
	int bytes, i;
	char *ptr;

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(av[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == (bytes - 1))
		{
			printf("%02hhx\n", ptr[i]);
			break;
		}
		printf("%02hhx ", ptr[i]);
	}

	return (0);
}
