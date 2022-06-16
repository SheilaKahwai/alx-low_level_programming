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
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
