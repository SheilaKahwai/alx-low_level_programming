/**
 * _memset - fills a block of memory with a particular value
 * @s: address of memory to be filled
 * @b: value to be filled
 * @n: no. of bytes to be filled
 * Return: resulting string
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
	{
		s++ = b;
	}
	return (s);
}
