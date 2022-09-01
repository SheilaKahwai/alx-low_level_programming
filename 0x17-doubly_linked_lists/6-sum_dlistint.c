#include "lists.h"

/**
 * sum_dlistint - finds the sum of all data in list
 * @head: pointer to first node in linked list
 * Return: sum of all data held in nodes
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;

if (!head)
return (0);
while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
