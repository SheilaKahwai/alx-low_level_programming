/**
 * _strcmp - compares 2 strings
 * @s1: first string
 * @s2: second string
 * Return: integer difference between the different characters
 */

int _strcmp(char *s1, char *s2)
{
	int flag = 0;
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			flag = s1[i] - s2[i];
			break;
		}
	}

	return (flag);
}
