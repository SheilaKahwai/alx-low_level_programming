#include<stdio.h>
#include "lists.h"

/**
 * print_listint -  prints all the elements of a listint_t list
 * @h: pointer to first element of the list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count;
	const listint_t *curr;

	count = 0;

	for (curr = head; curr != NULL; curr++)
	{
		printf("%d\n", curr->n);
		count++;
	}

	return (count);
}
