#include <string.h>
/**
 * _strchr - searches for the first occurrence of a character in a string
 * @s: pointer to string to search
 * @c: character to search for in the string
 * Return: string or NULL
 */

char *_strchr(char *s, char c)
{
	char *flag = NULL;

	if (s != NULL)
	{
		do {
			if (*s == c)
			{
				flag = s;
				break;
			}
		} while (*s++);
	}

	return (flag);
}
