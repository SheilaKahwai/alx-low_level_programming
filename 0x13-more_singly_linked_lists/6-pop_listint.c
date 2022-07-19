#include<stdio.h>
#include<stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 * @head: double pointer to first element of node
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int x;

	if (!head || !(*head))
		return (0);
	x = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (x);
}
