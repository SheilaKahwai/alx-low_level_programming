/**
 * _strlen - counts the number of characters in the string
 * @s: pointer to string
 * Return: x which is number of characters
 */

#include <string.h>

int _strlen(char *s)
{
		int x = 0;

		while (*s != '\0')
		{
			x++;
			s++;
		}
		return (x);
}
