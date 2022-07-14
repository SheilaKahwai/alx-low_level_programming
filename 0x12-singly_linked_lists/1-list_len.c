#include "lists.h"

/**
 * list_len - finds the number of elements in a linked list_t list
 * @h:pointer to first element of the list
 * Return: no. of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t len;
	list_t *curr;

	len = 0;

	for (curr = h; curr; curr = curr->next)
	{
		len++;
	}

	return (len);
}

