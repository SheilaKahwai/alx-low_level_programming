/**
 * cap_string - capitalizes a string
 * @str: string to capitalize
 * Return: pointer to resulting string
 */

char *cap_string(char *str)
{
	int i, j;

	char spec[13] = {' ', ',', ';', '.', '!', '?', '"',
		'(', ')', '{', '}', '\n', '\t'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (str[i] == spec[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
					str[i + 1] -= 32;
			}
		}
	}
	return (str);
}
