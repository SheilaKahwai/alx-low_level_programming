#include<stdio.h>
#include "lists.h"

/**
 * reverse_listint - reverses a list
 * @head: double pointer to first element of list
 * Return: pointer to first element of list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;

	return (*head);
}
