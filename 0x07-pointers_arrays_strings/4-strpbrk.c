#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to string to scan
 * @accept: character to search the string for
 * Return: first character
 */

char *_strpbrk(char *s, char *accept)
{
	if ((s == NULL) && (accept == NULL))
		return (NULL);

	while (*s)
	{
		if _strchr(accept, s)
			return (s);
		else
			s++;
	}

	return (NULL);
}
