#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: a character to print between the numbers
 * @n: number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int x;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		if (i == 0)
			printf("%d", x);
		else
			printf(", %d", x);
	}
	printf("\n");
}
