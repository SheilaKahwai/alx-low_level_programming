#include "main.h"

int checkpal(char *s, int i, int len);
int length(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
if (*s == '\0')
return (1);
return (checkpal(s, 0, length(s)));
}

/**
 * length - calculates the length of the string
 * @s: string to check length of
 * Return: length of string
 */

int length(char *s)
{
if (*s == '\0')
return (0);
return (1 + length(s + 1));
}

/**
 * checkpal - checks recursively if a string is a palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of string
 * Return: 1 if palindrome, 0 if not
 */

int checkpal(char *s, int i, int len)
{
if (*(s + i) != *(s + (len - 1)))
return (0);
if (i >= len)
return (1);
return (checkpal(s, i + 1, len - 1));
}
