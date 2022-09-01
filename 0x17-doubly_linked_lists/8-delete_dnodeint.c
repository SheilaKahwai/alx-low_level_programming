#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at specified index
 * @head: double pointer to first element of list
 * @index: position at which to delete node
 * Return: 1 on success, -1 otherwise
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int count = 0;
dlistint_t *curr = *head;

if (!head || !(*head))
return (-1);
if (index == 0)
{
*head = curr->next;
if (curr->next)
(*head)->prev = NULL;
free(curr);
return (1);
}
while (count != index && curr)
{
curr = curr->next;
count++;
}
if (count == index && curr)
{
if (!(curr->next))
curr->prev->next = NULL;
else
{
curr->prev->next = curr->next;
curr->next->prev = curr->prev;
}
free(curr);
return (1);
}
return (-1);
}
