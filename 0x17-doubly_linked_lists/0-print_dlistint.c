#include "lists.h"

/**
 * print_dlistint - prints the elements in a dlistint_t
 * @h: head of list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
