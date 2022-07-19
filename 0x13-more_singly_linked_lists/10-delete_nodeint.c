#include<stdio.h>
#include<stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at nth index
 * @head: pointer to first element of list
 * @index: position of node to be deleted
 * Return: 1 on success, 0 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *newnode;
	unsigned int i;

	temp = *head;
	i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		return (1);
	}
	while (i < (index - 1))
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}
	nextnode = temp->next;
	temp->next = nextnode->next;
	free(nextnode);

	return (1);
}
