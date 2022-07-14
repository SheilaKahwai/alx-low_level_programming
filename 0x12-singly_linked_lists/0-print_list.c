#include "lists.h"
#include<stdio.h>

/**
 * print-list - prints all the elements of a list_t list
 * @h: pointer to first element of list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i;
	h =  head;

	if (h->str == NULL)
		printf("[0] (nil)");
	else
		for (i = 0; h; i++)
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
	return (i);
}
