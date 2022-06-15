/**
 * cap_string - capitalizes a string
 * @str: strin to capitalize
 * Return: pointer to resulting string
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 32 && str[i] <= 44 || str[i] == 46 || str[i] == 47 || str[i] == '\n' || str[i] == '\t' || str[i] == 123 || str[i] == 125 || str[i] == 63 || str[i] == 59)
		{ 
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}

	return (str);
}
