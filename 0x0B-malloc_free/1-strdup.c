#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: pointer to source string
 * Return: pointer to copy of string or NULL if str is NULL
 */

char *_strdup(char *str)
{
	unsigned int len;
	char *cpy;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	cpy = (char *)malloc((len + 1) * sizeof(char));
	if (cpy == NULL)
		return (NULL);
	cpy = (char *)memcpy(cpy, str, len);
	return (cpy);
}

