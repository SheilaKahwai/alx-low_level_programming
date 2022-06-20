#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be scanned
 * @accept: string containing characters to match
 * Return: number of matching characters in the initial segment
 */ 

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	if ((s == NULL) && (accept == NULL))
		return len;

	while (*s && _strchr(accept, *s++))
	{
		len++;
	}

	return (len);
}
