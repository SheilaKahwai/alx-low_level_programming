#include<stdio.h>
#include "lists.h"

/**
 * listint_len - counts the number of elements in a linked listint_t list
 * @h: pointer to first element in the list
 * Return: number of nodes in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t count;
	const listint_t *curr;

	count = 0;

	for (curr = h; curr; curr = curr->next)
	{
		count++;
	}

	return (count);
}
