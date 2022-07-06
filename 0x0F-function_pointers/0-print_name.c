#include "function_pointers.h"

/**
 * print_name - calls functions using pointer to print name
 * @name: name to print
 * @f: pointer to functions
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
