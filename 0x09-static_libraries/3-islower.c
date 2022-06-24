/**
 * _islower - checks if letter is lowercase
 * @c: character to check
 * Return: 1 on lowercase, 0 otherwise
 */

int _islower(int c)
{
int res;
if (c >= 97 && c <= 122)
res = 1;
else
res = 0;
return (res);
}
