#include "lists.h"

/**
 * sum_dlistint - gets the sum of elements in a dlistint_t
 * @head: head of list
 *
 * Return: number of nodes
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	while (head)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
