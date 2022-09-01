#include "lists.h"

/**
 * add_dnodeint - Add a node to begining
 * @head: head of list
 * @n: element
 *
 * Return: node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *current, *new;

	new = malloc(sizeof(dlistint_t));
	new->n = n;
	current = *head;
	*head = new;
	new->next = current;
	return (new);
}
