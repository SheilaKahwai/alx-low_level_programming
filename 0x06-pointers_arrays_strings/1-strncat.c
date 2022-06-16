/**
 * _strncat - concatenates n number of characters from
 * src to dest string
 * @dest: destination string
 * @src: source string
 * @n: number of character of src to append to dest string
 * Return: pointer to resulting dest string
 */


char *_strncat(char *dest, char *src, int n)
{
	int i;
	unsigned int len1 = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len1++;
	}

	for (i = 0; i < n; i++)
	{
		dest[len1 + i] = src[i];
	}

	return (dest);
}
