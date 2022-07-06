/**
 * int_index - calls functions to compare array elements
 * @size: size of array
 * @cmp: function pointer
 * Return: index of matching element or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	int flag = 0;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		flag = cmp(array[i]);

		if (flag != 0)
			return (i);
		if (i == (size - 1))
			return (-1);
	}
}
