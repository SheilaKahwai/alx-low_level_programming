#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: destination string
 * @src: source string
 * Return: pointer to resulting dest string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int len1 = 0;
	int len2 = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len1++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		len2++;
	}

	for (i = 0; i <= len2; i++)
	{
		dest[len1 + i] = src[i];
	}
	dest[len1 + i] = '\0';

	return (dest);
}
