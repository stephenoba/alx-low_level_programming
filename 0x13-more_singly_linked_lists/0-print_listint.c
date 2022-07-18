#include "lists.h"

/**
 * print_listint - lists the data in the nodes of a linked list
 * @h: head
 * Return::data
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i += 1;
	}
	return (i);
}
