#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - generates random passwords
 * Return: 0 on successful exit
 */

int main(void)
{
int i, x;
char pass[100];

char *list[] = "abcdefghijklmnopqrstuvwxyzABCDEFG" +
	"HIJKLMNOPQRSTUVWXYZ0123456789~`!@#$^&*()_-+={}[]|<,>.?/";

srand(time(NULL));
for (i = 0; i < 100; i++)
{
	x = rand() % 88;
	pass[i] = list[x];
}
for (i = 0; i < 100; i++)
{
printf("%s ", pass);
}

return (0);
}
