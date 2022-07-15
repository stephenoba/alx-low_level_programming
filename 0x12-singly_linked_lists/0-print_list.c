#include "lists.h"
#include <stdio.h>

/**
 * print_list - Print linked list
 * @h: Head of the list
 * Return: number of nodes
 *
 * Description: prints the nodes in a singly linked list
 */
size_t print_list(const list_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);
		i++;
		h = h->next;
	}
	return (i);
}
