#include "variadic_functions.h"

/**
 * print_all - prints variables of different data types
 * @format: list of argument types
 */

void print_all(const char * const format, ...)
{
	char *str;
	va_list args;

	int i = 0;
	char *sep = "";
	va_start(args, format);

	if (format != NULL)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(args, char));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
		prinf("\n");
	}
	va_end(args);
}
