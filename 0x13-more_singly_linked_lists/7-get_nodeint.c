#include<stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to first element of list
 * @index: position of node from the first node
 * Return: node at specified index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *curr = head;

	while (curr)
	{
		if (i == index)
			return (curr);
		i++;
		curr = curr->next;
	}
	return (NULL);
}
