#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: destination string
 * @s2: source string
 * Return: resulting string or NULL if malloc fails
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len1;
	unsigned int len2;

	if (s2 == NULL)
		s2 = " ";
	len1 = strlen(s1);
	len2 = strlen(s2);

	s1 = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (s1 == NULL)
		return (NULL);
	s1 = strcat(s1, s2);
	return (s1);
}
