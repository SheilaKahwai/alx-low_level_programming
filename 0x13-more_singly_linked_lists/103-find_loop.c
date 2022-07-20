#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: double pointer to first element in list
 * Return: pointer to beginning of loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_p = head;
	listint_t *fast_p = head;

	if (!head)
		return (NULL);
	while (slow_p && fast_p && fast_p->next)
	{
		slow_p = slow_p->next;
		fast_p = fast_p->next->next;
		if (slow_p == fast_p)
		{
			slow_p = head;
			while (slow_p->next != fast_p->next)
			{
				slow_p = slow_p->next;
				fast_p = fast_p->next;
			}
			return (fast_p);
	}
	return (NULL);
}
