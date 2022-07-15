#include "lists.h"

/**
 * list_len - list lenght
 * @h: Head of the list
 * Return: number of nodes
 *
 * Description: gets the lenght of a linked list
 */
size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
