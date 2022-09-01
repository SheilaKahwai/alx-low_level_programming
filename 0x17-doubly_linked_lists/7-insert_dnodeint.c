#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at specified index
 * @h: double pointer to first index of list
 * @idx: position to place new node at
 * @n: data to assign to new node
 * Return: address of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new;
dlistint_t *curr = *h;
unsigned int count = 0;

if (!h)
return (NULL);
new = malloc(sizeof(dlistint_t));
if (!new)
return (NULL);
new->n = n;
if (idx == 0)
return (add_dnodeint(h, n));
while (count != (idx - 1) && curr)
{
curr = curr->next;
count++;
}
if (count == (idx - 1) && curr)
{
if (curr->next == NULL)
return (add_dnodeint_end(h, n));
new->next = curr->next;
curr->next->prev = new;
new->prev = curr;
curr->next = new;
return (new);
}
return (NULL);
}
