#include<stdlib.h>
#include<stdio.h>
#include<string.h>

/**
 * string_nconcat - appends n characters of s2 to s1
 * @s1: string 1
 * @s2: string 2
 * @n: no. of characters to append to s1
 * Return: pointer to resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int len, len1, len2, i;

	if (s1 == NULL)
		*s1 = "";
	if (s2 == NULL)
		*s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
		n = len2;
	len = len1 + n;

	s3 = malloc((len + 1) * sizeof(char));
	if (s3 == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		s3[i] = s1[i];
	}
	for (i = 0; i < len; i++)
	{
		s3[len1 + i] = s2[i];
	}
	s3[len1 + i] = '\0';

	return (s3);
}
