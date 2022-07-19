#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at an index
 * @head: head
 * @idx: index
 * @n: value
 * Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *previous, *current = *head;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (current != NULL)
	{
		while (i < idx && current != NULL)
		{
			previous = current;
			current = current->next;
			i++;
		}
		previous->next = new_node;
		new_node->next = current;
	}
	else
	{
		new_node->next = NULL;
		*head = new_node;
	}
	return (new_node);
}
