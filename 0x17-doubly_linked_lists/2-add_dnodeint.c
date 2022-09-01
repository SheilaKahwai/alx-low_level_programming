#include "lists.h"

/**
 * add_dnodeint - adds a new node at beginning of list
 * @head: double pointer to first node of list
 * @n: data to assign to new node
 * Return: address of new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;

if (!head)
return (NULL);
new = malloc(sizeof(dlistint_t));
if (!new)
return (NULL);
new->n = n;
new->next = *head;
new->prev = NULL;
if (*head)
(*head)->prev = new;
*head = new;

return (new);
}
