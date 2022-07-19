#include "lists.h"

/**
 * sum_listint -  returns the sum of all the data (n)
 * of a listint_t linked list
 * @head: pointer to first element of linked list
 * Return: sum of all the data of the list
 */
int sum_listint(listint_t *head)
{
	listint_t *curr = head;
	int sum = 0;

	while (curr)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
