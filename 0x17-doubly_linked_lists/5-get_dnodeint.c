#include "lists.h"

/**
 * get_dnodeint_at_index - finds the node at specified index
 * @head: pointer to first node of list
 * @index: position of node to find
 * Return: address of node or NULL if it does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int count = 0;
dlistint_t *curr = head;

if (!head)
return (NULL);
while (count != index && curr->next)
{
curr = curr->next;
count++;
}
if (count == index)
return (curr);
return (NULL);
}
