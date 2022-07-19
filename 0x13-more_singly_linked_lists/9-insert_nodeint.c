#include<stdio.h>
#include<stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: double pointer to first element of list
 * @idx: index to insert node
 * @n: data to add to node
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *curr;
	unsigned int count;

	count = 0;
	curr = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (count < idx)
	{
		if (count == (idx - 1))
		{
			new->next = curr->next;
			curr->next = new;
			return (new);
		}
		else
		{
			curr = curr->next;
			count++;
		}
	}
	return (NULL);
}
