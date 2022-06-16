/**
 * leet - encodes a string using 1337
 * @s: string to encode
 * Return: pointer to resulting string
 */

char *leet(char *s)
{
	int i, j;

	char *x = "aAeEoOtTlL";
	char *y = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; x[j] != '\0'; j++)
		{
			if (s[i] == x[j])
				s[i] = y[j];
		}
	}

	return (s);
}
