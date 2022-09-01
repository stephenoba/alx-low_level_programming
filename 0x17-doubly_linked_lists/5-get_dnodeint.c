#include "lists.h"

/**
 * dlistint_len - gets the length of dlistint_t
 * @h: head of list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}

/**
 * get_dnodeint_at_index - get node at an index
 * @head: head of list
 * @index: position of node to retrieve
 *
 * Return: node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t len;
	size_t counter;

	if (!head)
		return (NULL);

	len = dlistint_len(head);
	if (index >= len)
		return (NULL);
	else if (index == 0)
		return (head);

	counter = 1;
	while (counter <= index)
	{
		head = head->next;
		counter++;
	}
	return (head);
}
