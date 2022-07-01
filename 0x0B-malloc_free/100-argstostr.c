#include<stdlib.h>
#include<stdio.h>

/**
 * argstostr - concatenates all arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 * Return: pointer to resulting string
 */

char *argstostr(int ac, char **av)
{
	int i, j, k;
	char *str;
	unsigned int len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; i++)
		{
			len++;
		}
		len++;
	}

	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}

	return (str);
}
