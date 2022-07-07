#include "variadic_functions.h"

/**
 * print_strings - prints strings given to the function as arguments
 * @separator: character to print between the strings
 * @n: number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			printf("(nil)");
		if (i == 0)
			printf("%s", str);
		else
			printf(", %s", str);
	}
	printf("\n");
}
