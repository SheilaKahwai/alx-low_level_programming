#include<stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new nnnnnode to the end of list
 * @head: double pointer to first element of list
 * @n: int to add to new node
 * Return: address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	temp = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;

	return (new);
}
