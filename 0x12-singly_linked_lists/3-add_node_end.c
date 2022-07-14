#include<stdlib.h>
#include<string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to the first element of the list
 * @str: string to copy to new node
 * Return: address of new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len, i;
	list_t *new, *temp;

	len = 0;
	temp = *head;

	for (i = 0; str[i]; i++)
	{
		len++;
	}
	
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return(new);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;

	return (new);
}
