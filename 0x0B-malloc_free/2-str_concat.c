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
	unsigned int i;
	char *s;

	unsigned int j = 0;
	unsigned int len1 = 0;
	unsigned int len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
		len1++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		len2++;
	}

	s = malloc((len1 + len2 + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		s[i] = s1[i];
	}
	for (i = len1; i < (len1 + len2); i++)
	{
		s[i] = s2[j];
		j++;
	}

	s[i] = '\0';
	return (s);
}
