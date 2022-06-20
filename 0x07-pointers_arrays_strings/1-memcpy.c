/**
 * _memcpy - copies a block of memory from one location
 * to another
 * @dest: destination address
 * @src: source address
 * @n: number of bytes to copy
 * Return: pointer to resulting string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
