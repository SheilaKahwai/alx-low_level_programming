/**
 * _strlen_recursion - finds the length of a string
 * @s: pointer to string whose length we need to find
 *
 * @Return: length of string
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
