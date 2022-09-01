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
 * insert_dnodeint_at_index - insert a node at index
 * @h: pointer to head
 * @idx: index (positive integer starting from 0)
 * @n: data for new node
 *
 * Return: node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp;
	unsigned int counter, len;

	if (!h || idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	len = dlistint_len(*h);
	if (idx == len)
		return (add_dnodeint_end(h, n));
	if (idx > len)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	temp = *h;
	counter = 1;
	while (counter <= idx)
	{
		temp = temp->next;
		counter++;
	}
	temp->prev->next = new;
	new->next = temp;
	new->prev = temp->prev;
	temp->prev = new;
	return (new);
}
