#include "lists.h"

/**
 * add_dnodeint_end - add node to end of dlistint_t
 * @head: head of list
 * @n: element to add
 *
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current, *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}

	new->n = n;
	current = *head;
	if (!current)
	{
		*head = new;
		new->next = current;
		return (new);
	}
	while (current->next)
	{
		current = current->next;
	}
	current->next = new;
	new->prev = current;
	new->next = NULL;
	return (new);
}
