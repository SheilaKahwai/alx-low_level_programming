#include<stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a list
 * @head: pointer to first element of list
 */

void free_listint(listint_t *head)
{
	listint_t *curr;

	while (head != NULL)
	{
		curr = head->next;
		free(head);
		head = curr;
	}
}
