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
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);

	s1 = malloc((len1 + len2 + 1) * sizeof(char));
	if (s1 == NULL)
		return (NULL);
	for (i = 0; i <= len2; i++)
	{
		s1[len1 + i] = s2[i];
	}
	s1[len1 + i] = '\0';
	return (s1);
}
