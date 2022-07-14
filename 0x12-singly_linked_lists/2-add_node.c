#include<string.h>
#include<stdlib.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the first element of list_t
 * @str: string to add to node
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len, i;

	len = 0;

	for (i = 0; str[i]; i++)
	{
		len++;
	}

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
