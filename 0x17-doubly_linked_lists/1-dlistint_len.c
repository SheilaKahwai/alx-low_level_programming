#include "lists.h"

/**
 * dlistint_len - counts the number of elements in a linked list
 * @h: pointer to first element of list
 * Return: number of elements in a linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;

if (!h)
return (count);
while (h)
{
count++;
h = h->next;
}
return (count);
}
