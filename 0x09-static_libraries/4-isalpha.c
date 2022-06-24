/**
 * _isalpha - checks if character is an alphabet
 * @c: character to check
 * Return: 1 if alphabet, 0 otherwise
 */

int _isalpha(int c)
{
int res;
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
res = 1;
else
res = 0;
return (res);
}
