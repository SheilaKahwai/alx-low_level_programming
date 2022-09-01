#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at end of list
 * @head: double pointer to first node of list
 * @n: data to assign to new node
 * Return: address of new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new;
dlistint_t *curr = *head;

if (!head)
return (NULL);
new = malloc(sizeof(dlistint_t));
if (!new)
return (NULL);
new->n = n;
new->next = NULL;
if (!(*head))
{
new->prev = NULL;
*head = new;
return (*head);
}
while (curr->next)
{
curr = curr->next;
}
curr->next = new;
new->prev = curr;

return (new);
}
