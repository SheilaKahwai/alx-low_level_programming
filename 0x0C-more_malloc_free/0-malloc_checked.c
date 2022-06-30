/**
 * malloc_checked - allocates memory using malloc
 * @b: no. of variables that require memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b * sizeof(*ptr));
	if (ptr == NULL)
		exit(98);
}
