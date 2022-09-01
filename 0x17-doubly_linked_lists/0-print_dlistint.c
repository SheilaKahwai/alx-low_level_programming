#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: pointer to first element of list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
  size_t count = 0;

  if (!h)
    return (count);
  while (h)
    {
      printf("%d\n", h->n);
      h = h->next;
      count++;
    }
  return (count);
}
  
