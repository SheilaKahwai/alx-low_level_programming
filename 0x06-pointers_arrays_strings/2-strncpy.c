/**
 * _strncpy - copies string from src to dest
 * @dest: destination string
 * @src: source string
 * @n: number of characters of string src to copy
 * Return: pointer to resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
